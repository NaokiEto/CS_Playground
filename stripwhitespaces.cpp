#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char str[20] = "howdy my name";

    cout << "the string you entered is: " << str << endl;
    for(size_t i = 0, j = 0; str[i] = str[j]; j+=!isspace(str[i++]));
    cout << "the newstring is: " << str << endl;
    return 0;
}
