#include <iostream>]

using namespace std;

const int ARRAY_MAX_SIZE = 100;

void menu()
{
    cout << "\tProgramme's Functions:" << endl;
    cout << "1. Welcome." << endl;
    cout << "2. Gives the even numbers in an array." << endl;
    cout << "3. Checks if a number is non-decreasing." << endl;
    cout << "4. Finds the neighbouring numbers that are bigger than a certain element." << endl;
    cout << "5. Matrix and its various properties." << endl;
    cout << "6. Checks if a matrix is symmetric by the main diagonal." << endl;
    cout << "7. Exit." << endl;
}

void evenNumbers(int *array, int input)
{
    cout << "Enter lenght of the array: \n";
    cin >> input;
    cout << "\nEnter the elements of the array: \n";
    for (int i = 0; i < input; i++)
    {
        cin >> array[i];
    }
    cout << "\nThe even elements are: \n";
    for (int i = 0; i < input; i++)
    {
        if (array[i] % 2 == 0)
        {
            cout << array[i] << " ";
        }
    }
}

bool isInteresting(int input)
{
    int digits = 0;
    int inputCopy = input;
    while (inputCopy != 0)
    {
        inputCopy /= 10;
        digits++;
    }
    bool flag = true;
    for (int i = 0; i < digits; i++)
    {
        if (input % 10 >= input / 10 % 10)
        {
            input /= 10;
        }
        else
        {
            flag = false;
        }
    }
    return flag;
}

int neighbours(int array[], int size) 
{
    int result = 0;
    for (unsigned int i = 1; i < size - 1; ++i) 
    {
        if (array[i] > array[i - 1] && array[i] > array[i + 1])
        {
            result++;
        }
    }
    return result;
}

void printMatrix(int matrix[][ARRAY_MAX_SIZE], int input)
{
    for (int i = 0; i < input; i++)
    {
        for (int j = 0; j < input; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void printMatrixPrimaryDiagonal(int matrix[][ARRAY_MAX_SIZE], int input)
{
    for (int i = 0; i < input; i++)
    {
        for (int j = 0; j < input; j++)
        {
            if (i == j)
            {
                cout << matrix[i][j] << " ";
            }
        }
        cout << endl;
    }
}

void printMatrixAbovePrimaryDiagonal(int matrix[][ARRAY_MAX_SIZE], int input)
{
    for (int i = 0; i < input; i++)
    {
        for (int j = 0; j < input; j++)
        {
            if (i < j)
            {
                cout << matrix[i][j] << " ";
            }
        }
        cout << endl;
    }
}

void printMatrixBelowPrimaryDiagonal(int matrix[][ARRAY_MAX_SIZE], int input)
{
    for (int i = 0; i < input; i++)
    {
        for (int j = 0; j < input; j++)
        {
            if (i > j)
            {
                cout << matrix[i][j] << " ";
            }
        }
        cout << endl;
    }
}

void printMatrixSecondaryDiagonal(int matrix[][ARRAY_MAX_SIZE], int input)
{
    for (int i = 0; i < input; i++)
    {
        for (int j = 0; j < input; j++)
        {
            if (i + j == input - 1)
            {
                cout << matrix[i][j] << " ";
            }
        }
        cout << endl;
    }
}

void printMatrixAboveSecondaryDiagonal(int matrix[][ARRAY_MAX_SIZE], int input)
{
    for (int i = 0; i < input; i++)
    {
        for (int j = 0; j < input; j++)
        {
            if (i + j < input - 1)
            {
                cout << matrix[i][j] << " ";
            }
        }
        cout << endl;
    }
}

void printMatrixBelowSecondaryDiagonal(int matrix[][ARRAY_MAX_SIZE], int input)
{
    for (int i = 0; i < input; i++)
    {
        for (int j = 0; j < input; j++)
        {
            if (i + j > input - 1)
            {
                cout << matrix[i][j] << " ";
            }
        }
        cout << endl;
    }
}

void printTransposedMatrix(int matrix[][ARRAY_MAX_SIZE], int input)
{
    for (int i = 0; i < input; i++)
    {
        for (int j = 0; j < input; j++)
        {
            cout << matrix[j][i] << " ";
        }
        cout << endl;
    }
}

void printTransposedBySecondary(int matrix[][ARRAY_MAX_SIZE], int input)
{
    for (int i = input - 1; i >= 0; i--)
    {
        for (int j = input - 1; j >= 0; j--)
        {
            cout << matrix[j][i] << " ";
        }
        cout << endl;
    }
}

void transpose(int matrix[][ARRAY_MAX_SIZE], int trans[][ARRAY_MAX_SIZE], int input)
{
    for (int i = 0; i < input; i++)
    {
        for (int j = 0; j < input; j++)
        {
            trans[i][j] = matrix[j][i];
        }
    }
}

bool isSymmetric(int matrix[][ARRAY_MAX_SIZE], int input)
{
    int trans[ARRAY_MAX_SIZE][ARRAY_MAX_SIZE];

    transpose(matrix, trans, input);

    for (int i = 0; i < input; i++)
    {
        for (int j = 0; j < input; j++)
        {
            if (matrix[i][j] != trans[i][j])
            {
                return false;
            }
        }
    }
    return true;
}

void exit()
{
    cout << "Goodbye! :(" << endl;
}


int main()
{
    int array[ARRAY_MAX_SIZE];
    int input = 0;
    int flag = 0;

    int matrix[ARRAY_MAX_SIZE][ARRAY_MAX_SIZE];
    int trans[ARRAY_MAX_SIZE][ARRAY_MAX_SIZE];

    cout << "week 6\n";
    cout << "Enter a number between 1 and 7 to start the programme: \n";
    int start = 0;
    cin >> start;

    while (start != 0)
    {
        switch (start)
        {
        case 1:
            menu();
            break;
        case 2:
            evenNumbers(array, input);
            break;
        case 3:
            cout << "\nEnter number of elements: \n";
            cin >> input;
            cout << "\nEnter the elements: \n";
            for (int i = 0; i < input; i++)
            {
                cin >> array[i];
            }

            for (int i = 0; i < input; i++)
            {
                if (isInteresting(array[i]))
                {
                    cout << "YES" << endl;
                }
                else {
                    cout << "NO" << endl;
                }
            }
            break;
        case 4:
            while (input < 1 || input > 100)
            {
                cout << "\nEnter a number between 1 and 100: \n";
                cin >> input;
            }
            cout << "\nEnter the elements of the array: \n";
            for (int i = 0; i < input; i++)
            {
                cin >> array[i];
            }
            cout << "\nThe result is: \n" << neighbours(array, input) << endl;
            break;
        case 5:
            cout << "\nEnter the size of the matrix:\n";
            cin >> input;
            cout << "\nEnter the elements of the matrix:\n";
            for (int i = 0; i < input; i++)
            {
                for (int j = 0; j < input; j++)
                {
                    cin >> matrix[i][j];
                }
            }
            cout << "\nMatrix:" << endl;
            printMatrix(matrix, input);
            cout << "\nPrimary diagonal numbers:" << endl;
            printMatrixPrimaryDiagonal(matrix, input);
            cout << "\nNumbers above the primary diagonal: \n";
            printMatrixAbovePrimaryDiagonal(matrix, input);
            cout << "\nNumbers below the primary diagonal: \n";
            printMatrixBelowPrimaryDiagonal(matrix, input);
            cout << "\nSecondary diagonal numbers:" << endl;
            printMatrixSecondaryDiagonal(matrix, input);
            cout << "\nNumbers above the secondary diagonal: \n";
            printMatrixAboveSecondaryDiagonal(matrix, input);
            cout << "\nNumbers below the secondary diagonal: \n";
            printMatrixBelowSecondaryDiagonal(matrix, input);
            cout << "\nTransposed by primary diagonal: \n" << endl;
            printTransposedMatrix(matrix, input);
            cout << "\nTransposed by secondary diagonal: \n" << endl;
            printTransposedBySecondary(matrix, input);
            break;
        case 6: 
            cout << "\nEnter the size of the matrix:\n";
            cin >> input;
            cout << "\nEnter the elements of the matrix:\n";
            for (int i = 0; i < input; i++)
            {
                for (int j = 0; j < input; j++)
                {
                    cin >> matrix[i][j];
                }
            }
            if (isSymmetric(matrix, input))
            {
                cout << "\nYes";
            }
            else
            {
                cout << "\nNo";
            }
            break;
        case 7:
            exit();
            return 0;
        case 8:
            cout << "https://www.youtube.com/watch?v=ifzQZ7A04TM \n" << endl;
            break;
        default:
            cout << ">:(";
            break;
        }
        cout << "\n\n[1-7]\n";
        cin >> start;
    }
    return 0;
}
