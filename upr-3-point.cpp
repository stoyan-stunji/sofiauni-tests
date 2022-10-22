#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	cout << "Is a point (x,y) within a square (0,0)"
		" with a radius R = 4 and a circle (0,3) with a radius r = 2?\n";
	cout << "Enter the first coordinate x: \n";
	double pointX = 0;
	cin >> pointX;
	cout << "Enter the second coordinate y: \n";
	double pointY = 0;
	cin >> pointY;

	const double RADIUS1 = 4;
	const double RADIUS2 = 2;
	const double SQUAREX = 0;
	const double SQUAREY = 0;
	const double CIRCUMX = 0;
	const double CIRCUMY = 3;
		
	const bool isInCircum = RADIUS2 * RADIUS2 >= ((pointX - CIRCUMX) * (pointX - CIRCUMX)) +
		((pointY - CIRCUMY) * (pointY - CIRCUMY));

	const bool isOutCircum = RADIUS2 * RADIUS2 < ((pointX - CIRCUMX)* (pointX - CIRCUMX)) +
		((pointY - CIRCUMY) * (pointY - CIRCUMY));
	
	if (pointX > 0)
	{
		const bool isInSquare = (0 <= pointX >= 2) && (0 <= pointY >= 2);

		if (isInSquare && isInCircum)
		{
			cout << "The point is IN." << endl;
		}
		else
		{
			cout << "The point is OUT." << endl;
		}

	}
	else if (pointX < 0)
	{
		const bool isInSquare = (-2 <= pointX >= 0) && (-2 <= pointY >= 0);

		if (isInSquare && isOutCircum)
		{
			cout << "The point is IN." << endl;
		}
		else
		{
			cout << "The point is OUT." << endl;
		}
	}

	return 0;
}
