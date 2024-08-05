/*
    This is a code which prints out 1 using 'trigraph sequence'.
    Trigraph sequence was made for the environment where programmer can't use some special characters(^, {, }, etc), for example, ISO-646.
    
    You need to use command below to get expected result.
    "gcc -trigraphs -o Trigraph_sequence Trigraph_sequence.c"

    You can see a list of all trigraph sequence at 'Trigraph_sequence.md' in same folder.
*/

??=include <stdio.h>

int main( void )
??<
    printf( "%d", "??=" == "#" );

    return 0;
??>

/*
    References:
    페터르 판 데르 린던, 2022, 인사이트, 『컴파일러 개발자가 들려주는 C 이야기』
*/