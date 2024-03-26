## strtools

> Additional tools for working with strings.

I plan on adding a more generalized version later, but for now this is what you'll get.

### strdefrag()

> Moves all empty space in str to the back, returns a pointer to the first free character

#### Arguments and return value

**str:** Pointer to the string that will get defragmented  
**length:** The length of the string pointed to by **str** in bytes  

**return:** pointer to the first `\0` character in the defragmented string  
