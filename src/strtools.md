## strtools

> Additional tools for working with strings.

I plan on adding a more generalized version later, but for now this is what you'll get.

### `strdefrag()`

> Moves all empty space in str to the back, returns a pointer to the first free character

**`str`:** Pointer to the string that will get defragmented  
**`length`:** The length of the string pointed to by `str` in bytes  

**`return`:** Pointer to the first `\0` character in the defragmented string  

### `strrepeat()`

> Repeats str_in length times and writes the result to str_out

**`str_in`:** String to be repeated `length` times  
**`length`:** Number of times `str_in` is repeated  
**`str_out`:** Output buffer to copy `str_in` `length` times to  
