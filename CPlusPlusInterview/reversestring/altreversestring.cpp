#include <iostream>
#include <cstring>
using namespace std;
 
// function prototypes
void Reverse(char name[]);
 
int main()
{
     // declare variable
     char name[30];
 
     // get user data
     cout<<"Enter your name: ";
     cin.getline(name, sizeof(name));
 
     // function declaration
     Reverse(name);
 
     cout<<"\nYour name reversed is: "<< name<<endl;
 
     return 0;
}// end of main
 
void Reverse(char name[])
{
     // get the length of the current word in the array index
     int nameLength = strlen(name)-1;

     int length = name.size();
     cout << "the name length is: " << nameLength << endl;

     cout << "the new length is: " << length << endl;

     // increment thru each letter within the current char array index
     // reversing the order of the array
     for(int currentChar=0; currentChar < nameLength; nameLength--, currentChar++)
     {
          // copy 1st letter in the array index into temp
          char temp = name[currentChar]; 
          // copy last letter in the array index into the 1st array index
          name[currentChar] = name[nameLength];
          // copy temp into last array index
          name[nameLength] = temp;
     }
}
