#include <stdio.h>
#include "strtools.h"

int main(){

#ifdef STRDEFRAG_TEST
    // strdefrag test
    // expected output:
    //  hihru?imfine
    //  [some pointer]
    //  [some pointer] + 12
    do{
	char text[16] = "hi\0\0hru?\0imfine\0";
	char *new = strdefrag(text, 16);
	printf("%s\n%p\n%p\n\n", text, text, new);
    } while(0);
#endif

#ifdef STRREPEAT_TEST
    // strrepeat test
    // expected output:
    //  catcatcatcatcatcat
    do{
	char text[32];
	strrepeat("cat", 6, text);
	printf("%s\n\n", text);
    } while(0);
#endif

}
