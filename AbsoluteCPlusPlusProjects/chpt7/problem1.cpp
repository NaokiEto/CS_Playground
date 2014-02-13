#include <iostream>

using namespace std;

/*
 * This class is for months, and tracks months by either their first three
 * characters, or their index, with January starting at 1, and December
 * at 12. It can also calcuate the next month, and allows user input to
 * change the first three characters or the index.
*/

class Month
{
    public:
        // Constructors
        Month(char first, char second, char third);
        Month(int index);

        // Default constructor
        Month();

        const Month nextmonth();

        //Output
        void printMonthInt();

        void printMonthChar();

        //Input
        void monthInputInt(int index);
        void monthInputChar(char first, char second, char third);

    private:
        int monthIndex;
        int charToInt(char first, char second, char third);
};

int main()
{
    Month February = Month('F', 'E', 'B');

    Month March = February.nextmonth();

    February.printMonthInt();

    February.printMonthChar();

    March.printMonthInt();

    March.printMonthChar();

    February.monthInputInt(5);

    February.printMonthChar();

    return 0;
}

/* Constructor takes in the first three characters of a month */
Month::Month(char first, char second, char third)
{
    monthIndex = charToInt(first, second, third);
}

/* Constructor takes in the index of a month */
Month::Month(int index)
{
    monthIndex = index;
}

/* Default Constructor defaults to January */
Month::Month()
{
    monthIndex = 1;
}

/* This function calculates the next month and returns
 * a Month class type
*/
const Month Month::nextmonth()
{
    int nextmonthIndex = monthIndex % 12 + 1;

    return Month(nextmonthIndex);
}

/* This function prints out the index of the month */
void Month::printMonthInt()
{
    cout << monthIndex << endl;
}

/* This function prints out the first three characters of the month */
void Month::printMonthChar()
{
    if (monthIndex == 1)
    {
        cout << "JAN" << endl;
    }

    else if (monthIndex == 2)
    {
        cout << "FEB" << endl;
    }

    else if (monthIndex == 3)
    {
        cout << "MAR" << endl;
    }

    else if (monthIndex == 4)
    {
        cout << "APR" << endl;
    }

    else if (monthIndex == 5)
    {
        cout << "MAY" << endl;
    }

    else if (monthIndex == 6)
    {
        cout << "JUN" << endl;
    }

    else if (monthIndex == 7)
    {
        cout << "JUL" << endl;
    }

    else if (monthIndex == 8)
    {
        cout << "AUG" << endl;
    }

    else if (monthIndex == 9)
    {
        cout << "SEP" << endl;
    }

    else if (monthIndex == 10)
    {
        cout << "OCT" << endl;
    }

    else if (monthIndex == 11)
    {
        cout << "NOV" << endl;
    }

    else if (monthIndex == 12)
    {
        cout << "DEC" << endl;
    }
}

/* This member function converts the char representation to int representation */
int Month::charToInt(char first, char second, char third)
{
    if (first == 'J' && second == 'A' && third == 'N')
    {
        monthIndex = 1;
    }

    else if (first == 'F' && second == 'E' && third == 'B')
    {
        monthIndex = 2;
    }

    else if (first == 'M' && second == 'A' && third == 'R')
    {
        monthIndex = 3;
    }

    else if (first == 'A' && second == 'P' && third == 'R')
    {
        monthIndex = 4;
    }

    else if (first == 'M' && second == 'A' && third == 'Y')
    {
        monthIndex = 5;
    }

    else if (first == 'J' && second == 'U' && third == 'N')
    {
        monthIndex = 6;
    }

    else if (first == 'J' && second == 'U' && third == 'L')
    {
        monthIndex = 7;
    }

    else if (first == 'A' && second == 'U' && third == 'G')
    {
        monthIndex = 8;
    }

    else if (first == 'S' && second == 'E' && third == 'P')
    {
        monthIndex = 9;
    }

    else if (first == 'O' && second == 'C' && third == 'T')
    {
        monthIndex = 10;
    }

    else if (first == 'N' && second == 'O' && third == 'V')
    {
        monthIndex = 11;
    }

    else if (first == 'D' && second == 'E' && third == 'C')
    {
        monthIndex = 12;
    }

    return monthIndex;
}

/* Takes in an index from user input and sets it to the member variable */
void Month::monthInputInt(int index)
{
    monthIndex = index;
}

/* Takes in the first three char's of the month and use the char-to-int
 * conversion
*/
void Month::monthInputChar(char first, char second, char third)
{
    monthIndex = charToInt(first, second, third);
}
