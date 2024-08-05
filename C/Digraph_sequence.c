/*
    This is a code which prints out 0 using 'digraph sequence'.
    Trigraph sequence was made for the environment where programmer can't use some special characters(^, {, }, etc), for example, ISO-646.
    And later, for some reason, digraph sequence was invented which works in similar way.

    But be careful.
    Trigraph and digraph are looked like they are working in same way, but the truth is not.
    The C preprocessor replaces every same patterns with trigraph sequence in code, in 'initial processing'.
    And after 'initial processing', there comes 'tokenization' process.
    In 'tokenization', digraphs are gonna be handled.
    Any digraph that represents full token by itself(and also %:%:) is replaced.
    So, if the pattern is inside of the other token, like code below("%:"), it is not gonna be replaced.
    
    You don't need any specific command to get expected result, unlike trigraph sequence.

    You can see a list of all digraph sequence at 'Digraph_sequence.md' in same folder.
*/

%:include <stdio.h> // replaced

int main( void )
<%  // replaced

    // print 0 because "%:" is not gonna be replaced to "#" because this pattern is inside of the other token.
    printf( "%d", "%:" == "#" );

    return 0;
%>  // replaced

/*
    References:
    https://en.wikibooks.org/wiki/C_Programming/C_trigraph
    https://en.wikipedia.org/wiki/Digraphs_and_trigraphs_(programming)
    https://gcc.gnu.org/onlinedocs/cpp/Initial-processing.html
    https://gcc.gnu.org/onlinedocs/cpp/Tokenization.html
*/