#include <iostream>
using namespace std;

int main()
{
    float a = 25;

    int b = 12;

    float c = 12.349582934;

    float d = 0.28385;

    //cout.setf(ios::fixed);

    //cout.setf(ios::showpoint);

    cout.precision(5);

    cout << showpoint <<"The numbers are: " << a << ", " << b << ", " << c << ", " << d << endl;

    cout << noshowpoint <<"The numbers are: " << a << ", " << b << ", " << c << ", " << d << endl;

    return 0;
}
