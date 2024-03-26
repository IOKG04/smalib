#ifndef STRTOOLS__H
#define STRTOOLS__H

#include <stddef.h>

// moves all empty space in str to the back
// returns pointer to the first free character
char *strdefrag(char *str, size_t length);

// repeats str_in length times and writes the result to str_out
void strrepeat(const char *str_in, unsigned int length, char *str_out);

#endif
