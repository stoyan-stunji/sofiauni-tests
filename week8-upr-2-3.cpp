#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

int sumRow(int matrix[][MAX_SIZE], int row, int size)
{
    int sumRow = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            sumRow += matrix[row - 1][j];
        }
    }
    return sumRow / size;
}

int sumColumn(int matrix[][MAX_SIZE], int column, int size)
{
    int sumColumn = 0;
    for (int i = 0; i < size; i++)
    {
            sumColumn += matrix[i][column - 1];
    }
    return sumColumn;
}

int sumMain(int matrix[][MAX_SIZE], int size)
{
    int sumMain = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
           if (i == j)
           {
              sumMain += matrix[i][j];
           }
        }
    }
    return sumMain;
}

int sumSecond(int matrix[][MAX_SIZE], int size)
{
    int sumSecond = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (j == size - i - 1)
            {
                sumSecond += matrix[i][j];
            }
        }
    }
    return sumSecond;
}

bool isMagic(int matrix[][MAX_SIZE], int size)
{
    int sumRow = 0;
    int sumColumn = 0;
    int sumMain = 0;
    int sumSecond = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            sumRow = matrix[i - 1][j];

            sumColumn = matrix[i][j - 1];

            if (i == j)
            {
                sumMain += matrix[i][j];
            }
            if (j == size - i - 1)
            {
                sumSecond += matrix[i][j];
            }
        }
    }

    if (sumMain == sumSecond && sumRow == sumColumn)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void swap(int &num1, int &num2)
{
    int temp = 0;
    temp = num1;
    num1 = num2;
    num2 = temp;
}

void transpose(int matrix[][MAX_SIZE], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
}

void printTranspose(int matrix[][MAX_SIZE], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int matrix[MAX_SIZE][MAX_SIZE];

    int size = 0;
    cout << "Enter size of the matrix: \n";
    cin >> size;

    cout << "Enter matrix' elements: \n";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int row = 0;
    cout << "\nEnter row: \n";
    cin >> row;
    cout << "The sum of " << row << " row is " << sumRow(matrix, row, size) << "." << endl;
    int column = 0;
    cout << "\nEnter column: \n";
    cin >> column;
    cout << "The sum of " << column << " column is " << sumColumn(matrix, column, size) << "." << endl;

    cout << "\nThe sum of numbers of the main diagonal is " << sumMain(matrix, size) << "." << endl;
     
    cout << "\nThe sum of numbers of the second diagonal is " << sumSecond(matrix, size) << "." << endl;

    cout << "\nIs the matrix a magic square?" << boolalpha << "\n" << isMagic(matrix, size) << endl;
    cout << "\nThe trasposed version of the matrix is: \n";

    transpose(matrix, size);
    printTranspose(matrix, size);
}
