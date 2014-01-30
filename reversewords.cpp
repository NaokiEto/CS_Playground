#include <string> 
#include <iostream> 

using namespace std;

string reverse (string s);

int main() { 

    string str = "abcdefghijklmnopqrstuvwxyz"; 

    str = reverse(str); //i will create a function that takes a string and returns a new string which is the reverse 

    cout<<str<<endl; 
} 

string reverse (string s) { 

    string result=""; //create a new string and set it to the empty string 

    for (int i=0; i<s.length( ) ; i++) 
    { //s.length( ) returns the length of a string 

        result = s[ i ] + result ; //take the newest character and add it before what we have already 
    } 

    return result; 
    }
