/*
    This code prints out 0 and 1 depending its expression is false or true.
    Actually in C, there is no basic type Boolean, unlike other familiar modern languages.
    Instead of Boolean, C uses (int)1 as true and (int)0 as false.
    So, if you print out result of expression, you can see 1 or 0 in terminal.

    For someone who wants to use Boolean type, there are various ways below.

    1. use <stdbool.h>
    #include <stdbool.h>

    2. use enum
    enum bool
    {
        false,
        true
    };

    3. use preprocessor directive 'define'
    #define FALSE 0
    #define TRUE (!0) // or more simply '#define TRUE 1'
*/

#include <stdio.h>

int main( void )
{
    char a = 'a';

    printf( "%d", a == 'b' ); // false, print 0
    printf( "\n" );
    printf( "%d", a == 'a' ); // true, print 1

    return 0;
}