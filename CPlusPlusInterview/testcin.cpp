#include <iostream>
using namespace std;

void even(int num);

int main()
{
    int howdy, mutt;
    
    cin >> howdy;
    cin >> mutt;

    cout << "the sum of the two numbers are: " << howdy + mutt << endl;

    cout << "next we will test whether a number is even or odd using bitwise operators" << endl;

    int bitnum;

    cin >> bitnum;

    even(bitnum);

    return 0;
}

void even(int num)
{
    if (num & 1 == 0)
    {
        cout << "the number is even" << endl;
    }

    else
    {
        cout << "the number is odd" << endl;
    }
}
