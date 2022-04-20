## START OF THE PRINTF PROJECT
### _PRINTF PROJECT FOR ALX
<img src = "data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAOEAAADhCAMAAAAJbSJIAAAAgVBMVEUbIibv7+8AAADh4eLb3NwAAATy8vL39/f5+fnQ0NH19fUXHyMADBMAAAycnp8SGh8KFRqoqqu/wMGAg4S0tbYABQ6Rk5TFxsYeJSkzODttcHFXWlzn5+eXmZoFEhiMjo9qbW48QENFSkwtMzZ3entNUVNESEu3uLnV1daEhohfYmQrwsdTAAADEUlEQVR4nO3Y63KiMABAYYhCNKgg3tpqsa3ay77/A24QAsGCnf7YMbjnm+lMsdrJmSAkeB4AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAD+I1Fy6xH8W9HU+7rnxFg8zsOduPUw/plEnFKpwsHdForj5yj0faswar4huvxEz4hzn12YPU7sN8TNw/4Rw3NgXbh6GS2sEzZ5DZf9Pn8vC6cv0rcSk1c/lP1OvCicPkl9UCXmgb7f78RmYRFYJRaBvUmM4mSSJbG+lEwKWf5qo3DyNPL9OtEE9iMxEd52sd4f31ZiPSus81WMXRifTOA5sQ7Uh7Ps1gXXxeK4UVIq/bOb79SZHATexRyunq3EoxWoxonbt8VgO5TVaM0v4fBboSesxNAOnLodqMddDbbWVthIrKhx4HjgsmXUHYVtic4HBm3T0ln4PdH5UzTeytbArsLLROcDq4R8sHqT9HOhTlTWuzbC8cDkxcyI2s0XX2nd2FmYvdpTuHD9Xh+kZlkyF6ssE4fhtbtFLntrXHhHe8cTJ2YuynVXnOzCq4U6sHlrcTwxejcnaVZ+nbJycd1RmJ3Cy3un24lJ2RN+BOUrUXbtLG0J1IlrhxOTY1GoZtWzCDEIOwvtwFD1ItHMoZqvzEti1zmHiRWo0r21DH92NjHejsocM8T41Pk9jN7rxYHaCGEnrl3dPUVRea7JYzmJYtN9LZ18yDow8urEcHBw9r4vPk3QVsRRlIi5iWjdPZWJqljJmMRw8BDfuKNbtjcXDLk8eYenz+pEbN89LfO/S7NUE1+j8988dwO9yNzy9UDlSNYb4a7dk06UabUWzROdnkFtsv/d3kLvJlNrsa0THQ/UYxyr3xR6Yr2yryrB4uB4oL6cDlqeYVzbWzQ/7/gzqFzsDdtO1M7CHoqCecujqHsq1F+mt1TJMKfkwA8L5fNSVR71u9CLxcNxuRmP09kfkY4Lab4Yn5qjzerHf+K4KFkFQkwnsTcVhen59eYRAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA7ttfZSMn3zBBthcAAAAASUVORK5CYII=" alt = "alx image" width = "200" height = "100">

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
