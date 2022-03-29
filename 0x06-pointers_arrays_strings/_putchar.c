#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * Return 0
 * on error, -1 is returned , and error is set
 */
 int _putchar(int n)
 {
 return (write(1, &n, 1));
 }

