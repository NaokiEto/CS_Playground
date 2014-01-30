#include <iostream>
#include <cstring>

using namespace std;

void reverse(char word[]);

int main()
{
    char str[30];
    cout << "Please input a string of 30 characters of less: " << endl;

    cin.getline(str, sizeof(str));

    reverse(str);

    cout << "The new reversed string is: " << str << endl;

    return 0;
}

void reverse(char word[])
{
    // get the length of the word
    int length = strlen(word) - 1;

    for (int charCount = 0; charCount < length; charCount++, length--)
    {
        // put the first element in a temporary variable
        char temp = word[charCount];

        // set the first element equal to the last element
        word[charCount] = word[length];

        // complete the reversal of two elements, and put the first element in the last element's spot
        word[length] = temp;
    }
}
