/*
    This code prints out -1 using 'EOF(End Of File)'.
    EOF represents a end of file, not a specific character.
    This value is used with functions that reads input.
    Those functions return EOF, that is -1, when error occurs or reaches end of file.
    Practical examples below.

    while ( scanf( "%d", &n ) != EOF )
    {
        ... code ...
    }

    while ( ( c = getchar() ) != EOF )
    {
        ... code ...
    }

    while ( ( c = getc( file ) ) != EOF )
    {
        ... code ...
    }
*/

#include <stdio.h>

int main( void )
{
    printf( "%d", EOF ); // EOF is defined as -1

    return 0;
}