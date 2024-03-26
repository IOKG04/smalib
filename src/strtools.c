#include "strtools.h"

// moves all empty space in str to the back, returns pointer to first free character
char *strdefrag(char *str, int length){
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
