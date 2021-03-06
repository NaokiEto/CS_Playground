#include <iostream>
#include <cstring>

using namespace std;

void reverse(char rev[]);

int main()
{
    char str[30];

    cout << "Please input a string of 30 characters or less " << endl;
    
    cin.getline(str, sizeof(str));

    reverse(str);

    cout << "The new string is: " << str << endl;
    return 0;
}

void reverse(char rev[])
{
    int length = strlen(rev) - 1;
    
    for (int charCount = 0; charCount < length; charCount++, length--)
    {
        char temp = rev[length];

        rev[charCount] = rev[length];

        rev[length] = temp;
    }
}
