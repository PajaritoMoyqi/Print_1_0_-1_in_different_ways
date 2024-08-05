/*
    This code prints out 0 and 1 using 'ASCII code'.
    ASCII code is 7-bit code which represents printable text or control character.
    If we print a ASCII character as digit("%d" in printf function), we can check its 7-bit number.

    You can see a list of all ASCII characters at 'ASCII.md' in same folder.
*/

#include <stdio.h>

int main( void )
{
    printf( "%d", NULL ); // NULL character, print 0
    printf( "\n" );
    printf( "%d", '' ); // SOH(Start Of Header), print 1

    return 0;
}