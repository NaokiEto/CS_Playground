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
     // private variables
     int nameLength = 0;
     char copy[30];
 
     strcpy(copy,name);
 
     //get lenght of array
     while(name[nameLength] != '\0')
     {
          nameLength++;
     }

     //decrease the length of by 1
     nameLength--;
 
     // reverse the array
     for(int x = 0; x <= nameLength; ++x)
     {
          // rearange the order of the two arrays
          name[nameLength - x] = copy[x];
     }     
}
