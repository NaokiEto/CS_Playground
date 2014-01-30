#include <iostream>
#include <string>

using namespace std;

string reverse(string s);

int main()
{
    string str;

    cout << "Input the string: " << endl;

    cin >> str;

    str = reverse(str);

    cout << "The reversed string is: " << str << endl;

    return 0;
}

string reverse(string s)
{
    string revstring = "";

    for (int i = 0; i < s.length(); i++)
    {
        revstring = s[i] + revstring;
    }

    return revstring;
}
