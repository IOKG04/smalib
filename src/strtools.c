#include <stddef.h>
#include <string.h>
#include "strtools.h"

// moves all empty space in str to the back, returns pointer to the first free character
char *strdefrag(char *str, size_t length){
    char *insert = str, *end = str + length;

    --str;
    while(++str != end){
	if(*str != 0) *(insert++) = *str;
    }
    str = insert;
    while(str != end){
	*(str++) = 0;
    }

    return insert;
}

// repeats str_in length times and writes the result to str_out
void strrepeat(const char *str_in, unsigned int length, char *str_out){
    unsigned long len = strlen(str_in);
    for(unsigned int i = 0; i < length; ++i){
	memcpy(str_out, str_in, len);
	str_out += len;
    }
}
