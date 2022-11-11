#include <iostream>

using namespace std;

void welcome()
{
    cout << "\nWelcome :D";
}

void help()
{
	cout << "\n1. Welcome Menu\n2. Help Menu\n"
		<< "3. Square - reads a number in the interval between -10 and 10\n and gives the user the squared version of this number.\n"
		<< "4. Factorial - reads a number in the interval between 0 and 20\n and gives the user the factorial of this number.\n"
		<< "5. Prime - reads a number in the interval between 1 and 100\n and gives the user all of the prime numbers in this interval\n that are less than the number.\n"
		<< "6. Goodbye Menu";
}

int square(int input)
{
	cout << "\nEnter a number between -10 and 10: \n";
	cin >> input;
	while (input < -10 || input > 10)
	{
		cout << "\nPlease, enter a number between -10 and 10!\n";
		cin >> input;
	}
	cout << "The square of " << input << " is\n";
	return input * input;
}

int factorial(int input)
{
	cout << "Enter a number between 0 and 20: \n";
	cin >> input;
	while (input < 0 && input > 20)
	{
		cout << "Please, enter a number between 0 and 20: \n";
		cin >> input;

	}
	if (input <= 0)
	{
		return 1;
	}

	int result = 1;
	for (int i = 1; i <= input; i++)
	{
		result *= i;
	}
	return result;
}

bool prime(int input)
{
	if (input < 1 || input > 100)
	{
		return false;
	}
	else
	{
		if (input <= 2)
		{
			return false;
		}

		for (int i = 2; i < input; i++)
		{
			if (input % i == 0)
			{
				return false;
			}
		}
		return true;
	}
}

void primePrint(int input)
{
	cout << "\nEnter a number between 1 and 100:\n";
	cin >> input;
	cout << "\nThe prime numbers in the interval between 1 and 100 are:\n";
	for (int i = 2; i <= input; i++)
	{
		if (prime(i))
		{
			cout << i << " ";
		}
	}
}

void exit()
{
	cout << "Goodbye! :(" << endl;
}

int main()
{
	cout << "Hello! Please, enter a number between 1 and 6 to access the programme's functions:\n";
    int start = 0;
    cin >> start;

	int input = 0;

	while (start != 0)
	{
		switch (start)
		{
		case 1:
			welcome();
			break;
		case 2:
			help();
			break;
		case 3:
			cout << square(input);
			break;
		case 4: //factorial не дава правилни резултати;
			cout << factorial(input);
			break;
		case 5:
			primePrint(input);
			break;
		case 6:
			exit();
			return 0;
		default:
			cout << ">:(";
			break;
		}
		cout << "\n\n[1-6]\n";
		cin >> start;
	}
	return 0;
}
