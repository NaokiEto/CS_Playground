#include <iostream>

using namespace std;

void removewhitespaces(char* string);

int main()
{
    char str[30] = "My name is jim";

    removewhitespaces(str);

    cout << "The new string is: " << str << endl;

    return 0;
}

void removewhitespaces(char* string)
{
    if (string == NULL)
    {
        return;
    }

    char* copy_to = string;

    char* copy_from = string;

    while (*copy_from != '\0')
    {
        if (*copy_from == ' ')
        {
            copy_from++;
            continue;
        }

        *copy_to = *copy_from;

        copy_from++;
        copy_to++;
    }

    *copy_to = '\0';
}
