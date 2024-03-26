#include <stdio.h>
#include "strtools.h"

int main(){

#ifdef STRDEFRAG_TEST
    // strdefrag test
    // expected output:
    //  hihru?imfine
    //  [some pointer]
    //  [some pointer] + 12
    char text[16] = "hi\0\0hru?\0imfine\0";
    char *new = strdefrag(text, 16);
    printf("%s\n%p\n%p\n", text, text, new);
#endif

}
