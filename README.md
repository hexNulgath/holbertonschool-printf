# ![Custom__printf()](https://github.com/user-attachments/assets/cea156c8-71b8-401b-b8f2-577293e972c8)

![Static Badge](https://img.shields.io/badge/language-C-%23778da9) ![Static Badge](https://img.shields.io/badge/Holberton-%23c1121f) ![Static Badge](https://img.shields.io/badge/Ignacio_Machado-%234a4e69) ![Static Badge](https://img.shields.io/badge/Kevin_Acosta-%23778da9)

This project is a custom version of the standard `printf` function. It displays a formatted input string to the standard output stream. This custom implementation supports a subset of the format specifiers in the standard `printf` function. And was created as a project for Holberton School.

## Supported format specifiers
- `%c`: Character
- `%s`: String
- `%d`/`%i`: Signed integer
- `%%`: Literal `%` character

## Installation

1. add to your directory:
- `main.h` 
- `type_formaters.c`
- `print_f.c`
2. add to your file
```
#include "main.h"

```
3. Call the `print_f` function in your program
````
int main() 
{
    _printf("Hello, %s!\n", "world");
    return 0;
}
````
## Project restrictions
1. Code should use the `Betty` style. It was checked using `betty-style.pl` and `betty-doc.pl`.
2. Global variables are not allowed to be used.
3. No more than 5 functions per file.
4. All files compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
5. The prototypes of all functions should be included in a header file called `main.h`.
6. All header files should be included guarded.
7. Authorized functions and macros while doing this project:
- ![Static Badge](https://img.shields.io/badge/man%202-write-%23778da9)
- ![Static Badge](https://img.shields.io/badge/man%203-malloc%20-%23778da9)
- ![Static Badge](https://img.shields.io/badge/man%203-free%20-%23778da9)
- ![Static Badge](https://img.shields.io/badge/man%203-va_start-%23778da9)
- ![Static Badge](https://img.shields.io/badge/man%203-va_end-%23778da9)
- ![Static Badge](https://img.shields.io/badge/man%203-va_copy-%23778da9)
- ![Static Badge](https://img.shields.io/badge/man%203-va_arg-%23778da9)
8. allowed editors:
- ![Static Badge](https://img.shields.io/badge/vi-%234a4e69)
- ![Static Badge](https://img.shields.io/badge/vim-%234a4e69)
- ![Static Badge](https://img.shields.io/badge/emacs-%234a4e69)
 

## Compilation
````
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
````

## workflow 
![Untitled Diagram](https://github.com/user-attachments/assets/0558ffbb-31b1-41ff-862a-fdecf7ea850c)

## Use example
Input:
![carbon (1)](https://github.com/user-attachments/assets/b63714e6-f45b-4e2e-92b6-1b00c87cd4e1)

Output:
![carbon](https://github.com/user-attachments/assets/e59f9010-6361-444d-b539-7d64a041fd60)
