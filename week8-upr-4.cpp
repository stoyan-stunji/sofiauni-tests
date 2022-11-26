#include <iostream>

using namespace std;

const int MAX_SIZE = 3;

int determinantFunction(int matrix[][MAX_SIZE])
{
	int section1 = 0;
	int section2 = 0;
	int section3 = 0;
	int section4 = 0;
	int section5 = 0;
	int section6 = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			section1 = matrix[0][0] * matrix[1][1] * matrix[2][2];
			section2 = matrix[0][1] * matrix[1][2] * matrix[2][0];
			section3 = matrix[0][2] * matrix[1][0] * matrix[2][1];
			section4 = matrix[2][0] * matrix[1][1] * matrix[0][2];
			section5 = matrix[2][1] * matrix[1][2] * matrix[0][0];
			section6 = matrix[2][2] * matrix[1][0] * matrix[0][1];
		}
	}
	int determinant = section1 + section2 + section3 - section4 - section5 - section6;
	return determinant;
}

void sumOfDeterminants(int matrix1[][MAX_SIZE], int matrix2[][MAX_SIZE])
{
	int section1 = 0;
	int section2 = 0;
	int section3 = 0;
	int section4 = 0;
	int section5 = 0;
	int section6 = 0;
	int section7 = 0;
	int section8 = 0;
	int section9 = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			section1 = matrix1[0][0] + matrix2[0][0];
			section2 = matrix1[0][1] + matrix2[0][1];
			section3 = matrix1[0][2] + matrix2[0][2];
			section4 = matrix1[1][0] + matrix2[1][0];
			section5 = matrix1[1][1] + matrix2[1][1];
			section6 = matrix1[1][2] + matrix2[1][2];
			section7 = matrix1[2][0] + matrix2[2][0];
			section8 = matrix1[2][1] + matrix2[2][1];
			section9 = matrix1[2][2] + matrix2[2][2];
		}
	}
	cout << section1 << " " << section2 << " " << section3 << endl;
	cout << section4 << " " << section5 << " " << section6 << endl;
	cout << section7 << " " << section8 << " " << section9 << endl;
}

void difOfDeterminants(int matrix1[][MAX_SIZE], int matrix2[][MAX_SIZE])
{
	int section1 = 0;
	int section2 = 0;
	int section3 = 0;
	int section4 = 0;
	int section5 = 0;
	int section6 = 0;
	int section7 = 0;
	int section8 = 0;
	int section9 = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			section1 = matrix1[0][0] - matrix2[0][0];
			section2 = matrix1[0][1] - matrix2[0][1];
			section3 = matrix1[0][2] - matrix2[0][2];
			section4 = matrix1[1][0] - matrix2[1][0];
			section5 = matrix1[1][1] - matrix2[1][1];
			section6 = matrix1[1][2] - matrix2[1][2];
			section7 = matrix1[2][0] - matrix2[2][0];
			section8 = matrix1[2][1] - matrix2[2][1];
			section9 = matrix1[2][2] - matrix2[2][2];
		}
	}
	cout << section1 << " " << section2 << " " << section3 << endl;
	cout << section4 << " " << section5 << " " << section6 << endl;
	cout << section7 << " " << section8 << " " << section9 << endl;
}

void multiplyOfDeterminants(int matrix1[][MAX_SIZE], int matrix2[][MAX_SIZE])
{
	int section1 = 0;
	int section2 = 0;
	int section3 = 0;
	int section4 = 0;
	int section5 = 0;
	int section6 = 0;
	int section7 = 0;
	int section8 = 0;
	int section9 = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			section1 = matrix1[0][0] * matrix2[0][0];
			section2 = matrix1[0][1] * matrix2[0][1];
			section3 = matrix1[0][2] * matrix2[0][2];
			section4 = matrix1[1][0] * matrix2[1][0];
			section5 = matrix1[1][1] * matrix2[1][1];
			section6 = matrix1[1][2] * matrix2[1][2];
			section7 = matrix1[2][0] * matrix2[2][0];
			section8 = matrix1[2][1] * matrix2[2][1];
			section9 = matrix1[2][2] * matrix2[2][2];
		}
	}
	cout << section1 << " " << section2 << " " << section3 << endl;
	cout << section4 << " " << section5 << " " << section6 << endl;
	cout << section7 << " " << section8 << " " << section9 << endl;
}

int main()
{
    int matrix1[MAX_SIZE][MAX_SIZE];
    int matrix2[MAX_SIZE][MAX_SIZE];
	cout << "Enter elements of the first matrix: \n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> matrix1[i][j];
		}
	}
	cout << "Enter elements of the second matrix: \n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> matrix2[i][j];
		}
	}
	cout << "\nThe determinant of the first matrix is: \n";
	cout << determinantFunction(matrix1) << endl;
	cout << "\nThe determinant of the second matrix is: \n";
	cout << determinantFunction(matrix2) << endl;
	cout << endl;
	cout << "Matrix 1 + Matrix2:" << endl;
	sumOfDeterminants(matrix1, matrix2);
	cout << endl;
	cout << "Matrix 1 - Matrix2:" << endl;
	difOfDeterminants(matrix1, matrix2);
	cout << endl;
	cout << "Matrix 1 * Matrix2:" << endl;
	multiplyOfDeterminants(matrix1, matrix2);
}
