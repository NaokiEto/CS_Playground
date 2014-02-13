#include <iostream>
#include <string>
using namespace std;

string reverse(string s);

int main()
{
    cout << "Input a string" << endl;
    string str;
    getline(cin, str);
    str = reverse(str);

    cout << "the reversed string is: " << str << endl;
}

string reverse(string s)
{
    string revString = "";

    for(int i = 0; i < s.length(); i++)
    {
        revString = s[i] + revString;
    }

    return revString;
}
