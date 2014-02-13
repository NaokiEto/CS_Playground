#include <iostream>

using namespace std;

void stripwhitespaces(char* string);

int main()
{
    char str[30] = "My name is Jim";

    stripwhitespaces(str);

    cout << "The new string is: " << str << endl;

    return 0;
}

void stripwhitespaces(char* string)
{
    if (string == NULL)
    {
        return;
    }

    char* copy_to = string;
    char* copy_from = string;

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
