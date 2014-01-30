#include <iostream>
#include <iomanip>

/*
 * This C++ program plays tic-tac-toe
 */

using namespace std;

const int NUMROWS = 3;

const int NUMCOLS = 3;

void display(const char arr[][NUMCOLS]);

void play(char arr[][NUMCOLS], int position, int player);

bool gamesum(const char arr[][NUMCOLS]);

int main()
{
    char tictac[NUMROWS][NUMCOLS] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

    int pos;

    display(tictac);

    cout << "This is a game of two-player tic tac toe" << endl;

    cout << "Please enter the position you would like to mark by typing the position number" << endl;

    int playernum = 0;

    char marks[2] = {'X', 'O'};

    // play until a winner has occurred
    while(gamesum(tictac))
    {
        cout << "Player " << playernum + 1 << ": You are " << marks[playernum] <<endl;

        cin >> pos;

        play(tictac, pos, playernum);

        display(tictac);

        playernum = 1 - playernum;
    }

    return 0;
}

void display(const char arr[][NUMCOLS])
{
    for (int i = 0; i < NUMROWS; i++)
    {
        for (int j = 0; j < NUMCOLS; j++)
        {
            cout << setw(5) << arr[i][j];
        }
        // create a new line to add the next row of tictactoe
        cout << endl;
    }
}

void play(char arr[][NUMCOLS], int position, int player)
{
    // determine the row that the position is in
    int row = position / 3;

    // determine the column that the position is in
    int col = position % 3 - 1;

    // for player 1
    if (player)
    {
        arr[row][col] = 'O';
    }

    // for player 0
    else
    {
        arr[row][col] = 'X';
    }

    
}

bool gamesum(const char arr[][NUMCOLS])
{
    // check the row sums
    for (int i = 0; i < NUMROWS; i++)
    {
        int rowsum = 0;
        for (int j = 0; j < NUMCOLS; j++)
        {
            rowsum += arr[i][j];
        }

        if (rowsum == 3*'O')
        {
            cout << "Player 2 (O's) wins!" << endl;
            return false;
        }

        else if (rowsum == 3*'X')
        {
            cout << "Player 1 (X's) wins!" << endl;
            return false;
        }

    }

    // check the column sums
    for (int i = 0; i < NUMCOLS; i++)
    {
        int colsum = 0;
        for (int j = 0; j < NUMROWS; j++)
        {
            colsum += arr[j][i];
        }

        if (colsum == 3*'O')
        {
            cout << "Player 2 (O's) wins!" << endl;
            return false;
        }

        else if (colsum == 3*'X')
        {
            cout << "Player 1 (X's) wins!" << endl;
            return false;
        }
    }

    // check the diagonal sums

    int diagsum[2] = {arr[0][0] + arr[1][1] + arr[2][2], arr[0][2] + arr[1][1] + arr[2][0]};

    for (int k = 0 ; k < 2; k++)
    {
        if (diagsum[k] == 3*'0')
        {
            cout << "Player 2 (O's) wins!" << endl;
            return false;
        }

        else if (diagsum[k] == 3*'X')
        {
            cout << "Player 1 (X's) wins!" << endl;
            return false;
        }
    }

    return true;
}

