/*
    This code prints out some 0 using 'unsigned max values'.
    If you import <limits.h>, there are many limit values.
    Especially, the value only one bigger than some of unsigned max value is 0 because of overflow.

    If you're not familiar with C, then you also first meet some of printf formats for unsigned value.

    You can see more limit values defined in <limits.h> at 'limits_h.md' in same folder.
*/

#include <stdio.h>
#include <limits.h>

int main( void )
{
    printf( "%u\n", UINT_MAX + 1 ); // 4294967296, print 0
    printf( "%hhu\n", UCHAR_MAX + 1 ); // 256, print 0
    printf( "%hu\n", USHRT_MAX + 1 ); // 65536, print 0
    printf( "%lu\n", ULONG_MAX + 1 ); // 4294967296, print 0
    printf( "%llu\n", ULLONG_MAX + 1 ); // 18446744073709551616, print 0

    return 0;
}