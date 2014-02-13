#include <iostream>

using namespace std;

const int numrows = 7;

const int numcols = 4;

/* Display the seating chart */
void display(char arr[][numcols]);

/* Takes in the user input of what seat s/he would like to choose
 * Takes in an int and a char as the seat
 */
void userinput(char arr[][numcols]);

int main()
{

    char seats[numrows][numcols];

    bool flag = true;

    char choice;

    for (int i = 0; i < numrows; i++)
    {
        seats[i][0] = 'A';
        seats[i][1] = 'B';
        seats[i][2] = 'C';
        seats[i][3] = 'D';
    }

    display(seats);

    do
    {
        userinput(seats);

        cout << "Would you like to continue? y/n" << endl;

        cin >> choice;

        if (choice == 'n')
        {
            flag = false;
        }

        display(seats);

    } while (flag);

    return 0;
}

void userinput(char arr[][numcols])
{
    int userow;

    char charcol;

    cout << "Please input a seat position: " << endl;

    cin >> userow;

    cin >> charcol;

    cout << "The user row is: " << userow << endl;

    int usercol;

    if (charcol == 'A')
    {
        usercol = 0;
    }
    else if (charcol == 'B')
    {
        usercol = 1;
    }
    else if (charcol == 'C')
    {
        usercol = 2;
    }
    else if (charcol == 'D')
    {
        usercol = 3;
    }

    cout << "The usercol is: " << usercol << endl;

    arr[userow][usercol] = 'X';
}

/* Display the seating arrangements */
void display(char arr[][numcols])
{
    for (int i = 0; i < numrows; i++)
    {
        cout << i << "\t" << arr[i][0] << " " << arr[i][1] << "  " << arr[i][2]\
             << " " << arr[i][3] << endl;
    }
}

