#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
/**
 * struct vtype - struct vtype
 * @tp: tp
 * @f: function
 *
 */
typedef struct vtype
{
	char tp;
	void (*f)();
} vtype_t;
int _printf(const char *format, ...);
int _putchar(va_list args, int mode);
int stringiterator(va_list args, int mode);
int ntostring(va_list args, int mode);
int untostring(va_list ap, int base);
int singlewrite(char c);
int revstring(va_list ap, int mode);
char *rot13(char *s);
char *_strdup(char *str);
int strot(va_list ap, int mode);
ftype func_finder(char c);
#endif 
