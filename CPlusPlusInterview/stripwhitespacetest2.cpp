#include <iostream>
using namespace std;

void removespaces(char* string);

int main()
{
    char str[20] = "My name is";

    removespaces(str);

    cout << "the new string is: " << str << endl;

    return 0;
}

void removespaces(char* string)
{
    if (string == NULL)
    {
        return;
    }

    char* copy_from = string;

    char* copy_to = string;

    while(*copy_from != '\0')
    {
        if(*copy_from == ' ')
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
