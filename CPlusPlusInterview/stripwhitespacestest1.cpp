#include <iostream>

using namespace std;

void removespaces(char string[]);

int main()
{
    char str[30];

    cout << "Input a string of 30 characters or less: " << endl;

    cin.getline(str, sizeof(str));

    removespaces(str);

    cout << "The new string is : " << str << endl;

    return 0;
}

void removespaces(char string[])
{
    char *copy_from = string;
    char *copy_to = string;

    while(*copy_from != '\0')
    {
        if (*copy_from == ' ')
        {
            copy_from++;
            continue;
        }

        *copy_to = *copy_from;

        copy_to++;
        copy_from++;
    }

    *copy_to = '\0';
}
