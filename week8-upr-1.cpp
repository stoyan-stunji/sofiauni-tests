#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

bool difference(int matrix[][MAX_SIZE], int size)
{
	bool flag = false;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (matrix[i][j] == matrix[i + 1][j + 1])
			{
				flag = true;
			}
			if (matrix[i+ 1][j] == matrix[i + 2][j + 1])
			{
				flag = true;
			}
			if (matrix[i][j + 1] == matrix[i + 1][j + 2])
			{
				flag = true;
			}
			if (matrix[i][j] == matrix[i + 1][j - 1])
			{
				flag = true;
			}
			if (matrix[i + 2][j - 1] == matrix[i + 1][j])
			{
				flag = true;
			}
			if (matrix[i][j - 2] == matrix[i][j - 1])
			{
				flag = true;
			}		 
		}
	}
	return flag;
}

int main()
{
    int matrix[MAX_SIZE][MAX_SIZE];
    int size = 0;

	cin >> size;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cin >> matrix[i][j];
		}
	}
	cout << "Are there equal elements on any diagonal?\n";
	cout << boolalpha << difference(matrix, size);
}
