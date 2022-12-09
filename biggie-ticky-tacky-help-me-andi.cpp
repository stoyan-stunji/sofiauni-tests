#include <iostream>

using namespace std;

const int MAX_SIZE = 9;

void p1enter(char board[][MAX_SIZE], int size)
{
    int positionX = 0;
    int positionY = 0;
    cout << "\nPlayer 1: \n";
    cout << "x ";
    cin >> positionX;

    while (positionX > size - 1)
    {
        cout << "Enter a number within the range of the board!\n";
        cin >> positionX;
    }
    cout << "y ";
    cin >> positionY;
    cout << endl;
    while (positionY > size - 1)
    {
        cout << "Enter a number within the range of the board!\n";
        cin >> positionY;
    }

    for (int i = 0; i < size; i++) 
    {
        for (int j = 0; j < size; j++) 
        {
            if (positionX == i && positionY == j) 
            {
                board[i][j] = 'X';
            }
        }
    }
}

void p2enter(char board[][MAX_SIZE], int size)
{
    int positionX = 0;
    int positionY = 0;
    cout << "\nPlayer 2: \n";
    cout << "x ";
    cin >> positionX;

    while (positionX > size - 1)
    {
        cout << "Enter a number within the range of the board!\n";
        cin >> positionX;
    }
    cout << "y ";
    cin >> positionY;
    cout << endl;
    while (positionY > size - 1)
    {
        cout << "Enter a number within the range of the board!\n";
        cin >> positionY;
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++) 
        {
            if (positionX == i && positionY == j)
            {
                board[i][j] = 'Y';
            }
        }
    }
}

bool checkWinXRow(char board[][MAX_SIZE], int size)
{
    bool flag = false;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (board[i][j] == board[i][size - i - 1])
            {
                if (board[i][size - i - 1] == 'X') 
                {
                    flag = true;
                }
                else 
                {
                    flag = false;
                }
            }
        }
    }
    return flag;
}

bool checkWinXColumn(char board[][MAX_SIZE], int size)
{
    bool flag = false;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (board[i][j] == board[size - j - 1][j] )
            {
                if (board[size - j - 1][j] == 'X') 
                {
                    flag = true;
                }
                else 
                {
                    flag = false;
                }
            }
        }
    }
    return flag;
}

bool checkWinXMain(char board[][MAX_SIZE], int size)
{
    bool flag = false;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (board[i][j] == board[size - j][size - i] && board[i][j] == 'X')
            {
                flag = true;
            }
        }
    }
    return flag;
}

bool checkWinXSecond(char board[][MAX_SIZE], int size)
{
    bool flag = false;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (board[i][size - i - 1] == board[i + 1][size - i - 2] && board[i][size - i - 1] == 'X')
            {
                flag = true;
            }
        }
    }
    return flag;
}

bool checkWinYRow(char board[][MAX_SIZE], int size)
{
    bool flag = false;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (board[i][j] == board[i][size - i - 1])
            {
                if (board[i][size - i - 1] == 'Y')
                {
                    flag = true;
                }
                else
                {
                    flag = false;
                }
            }
        }
    }
    return flag;
}

bool checkWinYColumn(char board[][MAX_SIZE], int size)
{
    bool flag = false;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (board[i][j] == board[size - j - 1][j])
            {
                if (board[size - j - 1][j] == 'Y')
                {
                    flag = true;
                }
                else
                {
                    flag = false;
                }
            }
        }
    }
    return flag;
}

bool checkWinYMain(char board[][MAX_SIZE], int size)
{
    bool flag = false;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (board[i][j] == board[size - j][size - i] && board[i][j] == 'Y')
            {
                flag = true;
            }
        }
    }
    return flag;
}

bool checkWinYSecond(char board[][MAX_SIZE], int size)
{
    bool flag = false;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (board[i][size - i - 1] == board[i + 1][size - i - 2] && board[i][size - i - 1] == 'Y')
            {
                flag = true;
            }
        }
    }
    return flag;
}

void printBoard(char board[][MAX_SIZE], int size) 
{
    
    for (int i = 0; i < size; i++) 
    {
        for (int j = 0; j < size; j++) 
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }

}


int main()
{
    cout << "----------------------" << endl;
    cout << "VERY LARGE TIC-TAC-TOE" << endl;
    cout << "----------------------" << endl;
    char board[MAX_SIZE][MAX_SIZE];
    int size = 0;

    cout << "\nEnter the size of the board: ";
    cin >> size;

    while (size < 3 || size > 9)
    {
        cout << "Enter a number between 3 and 9: ";
        cin >> size;
    }
    cout << endl;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            board[i][j] = '*';
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    

    while (true) 
    {
        p1enter(board, size);
        p2enter(board, size);
        printBoard(board, size);
        cout << boolalpha << checkWinXRow(board, size) << checkWinXColumn(board, size) << checkWinXMain(board, size) << checkWinXSecond(board, size);
        cout << boolalpha << checkWinYRow(board, size) << checkWinYColumn(board, size) << checkWinYMain(board, size) << checkWinYSecond(board, size);
        //if (checkWinX(board, size))
        //{
        //    cout << "Player 1 wins!";
        //    break;
        //}
        //else if (checkWinY(board, size))
        //{
        //    cout << "Player 2 wins!";
        //    break;
        //}
        //else
        //{
        //    cout << "Draw!";
        //    break;
        //}
    }
}
