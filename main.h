#ifndef PRINT_F
#define PRINT_F
#include <stdarg.h>
#include <unistd.h>
int _printf(const char *format, ...);
int print_int(int a);
int print_char(int a);
int print_str(char *a);
#endif
