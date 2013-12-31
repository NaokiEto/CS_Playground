#include <stdio.h>
#include <string.h>

void reverseWords( char * str )
{
    int i = 0, j = 0;
    //reverseString( str, strlen(str) ); // tsaf yrev si rac yM
    reverseString(str, sizeof(str)/4);
    while( 1 ) // Loop forever
    {
        if( *(str+j) == ' ' || *(str+j) == '\0') // Found a word or reached the end of sentence
        {
            reverseString( str+i, j-i );
            i = j+1;
        }
        if( *(str+j) == '\0')
        {
            break;
        }
        j++;
    }
} 

void reverseString(char* str, int len)
{
    int i, j;
    char temp;
    i=j=temp=0;

    j=len-1;
    for (i=0; i<j; i++, j--)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
}

int main ( int argc, char *argv[] )
{
    printf(argv[1]);
    printf("\n tada \n");
    int len = sizeof(argv[1])/4;
    char stringToRev[len];
    memcpy(stringToRev, argv[1], len);
    printf(stringToRev);
    reverseWords(stringToRev);
    printf("\nhowdy\n");
    printf(stringToRev);
    return 0;
}
