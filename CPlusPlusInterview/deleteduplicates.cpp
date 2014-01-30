#include <iostream> 
using namespace std;

void deleteduplicates(int arr[], int& size);

int main ( ) 
{
    int numofints = 6 ; 
    int integers [numofints] ; 
    int index ; 
    cout << "Please enter " << numofints << " integers, hitting return after each one:" << endl ; 
    for ( index = 0 ; index < numofints ; ++index ) 
        cin >> integers [index];

    deleteduplicates(integers, numofints);

    cout << "You entered " << numofints << " distinct numbers:" << endl ;

    int newarr[numofints];
    for ( index = 0 ; index < numofints ; ++index )
    {
        newarr[index] = integers[index];
        cout << newarr [ index ] << " " ;
    }
    cout << endl ; 
    return 0 ; 
}

void deleteduplicates(int arr[], int& size)
{
    int count = 0 ;

    for ( int i = 0 ; i < size ; ++i ) 
    {
        bool seen = false ;
        for ( int j = 0 ; ! seen && j < count ; ++j )
        {
            cout << "checking the " << j << "th element " << arr[j] << " with the " << i << "th element " << arr[i] << endl;
            if ( arr [ j ] == arr [ i ] )
            {
                seen = true ;
            } 
        }
        // if not seen
        if ( ! seen ) 
        {
            cout << "the element we are setting equal to is: " << arr[i] << endl;
            arr [count++ ] = arr [ i ] ;

            cout << "the count is: " << count << endl;
        }
    }

    size = count;
}
