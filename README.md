## START OF THE PRINTF PROJECT
### _PRINTF PROJECT FOR ALX

  [![alx logo](alx.png)](https://www.alxafrica.com/)

This recreates the printf function in the standard input and output library.
_printf displays characters to the standard output and returns the length of the characters, we're not to handle flag
characters, field width, precision or length.

We used our knowledge from previous tasks to ***replicate the printf function*** we reproduced the format specifiers which are defined below:

| **Format Specifiers** | **Description** |
| ------------------ | ---------------- |
| **s** | This prints out the string gotten from the argument |
| **c** | This prints out the character gotten from the argument |
| **%** | This prints out % when used like this: **%%** |
| **d** | This prints out the positive and negative integer values gotten from the argument |
| **i** | This also prints out the positive and negative integer values gotten from the argument |
| **b** | This gets only positive arguments, changes it from base 10 to base 2 and prints it out |
| **u** | This prints out only positive integer values gotten from the argument |
| **o** | This gets only positive arguments, changes it from base 10 to base 8 and prints it out |
| **x** | This gets only positive arguments, changes it from base 10 to base 16 ***(alphabets are in lowercase)*** and prints it out |
| **X** | This gets only positive arguments, changes it from base 10 to base 16 ***(alphabets are in uppercase)*** and prints it out |
| **S** | This prints out the string gotten from the argument and changes particular characters to base 16 |
| **p** | This prints out the pointer address gotten from the argument |
| **r** | This prints out the string gotten from the argument in reverse |
| **R** | This encrpyts and decrypts string gotten from the argument |

**USAGE** <br>
We preceded the above specifiers with a ***%*** character before it can be used to get arguments

**FUNCTIONS USED**
- ***write (man 2 write)***
- ***malloc (man 3 malloc)***
- ***free (man 3 free)***
- ***va_start (man 3 va_start)***
- ***va_end (man 3 va_end)***
- ***va_arg (man 3 va_arg)***

**COMPILATION** <br>
Use this format below to compile the .c files above <br>
`gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c`

**Examples** <br>
`_printf("%c", 'A');`
This prints out the char: A.

`_printf("%s", "simba);`
This prints out the string: simba.

`_printf("%d", 10);`
This prints out the integer 10.

### Contributors: Adebisi Oluwatomiwa, Azolike Tochi
