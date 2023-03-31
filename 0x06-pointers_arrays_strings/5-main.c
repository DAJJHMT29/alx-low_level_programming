#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char str[] = "Look up!\n";
	char *printr;

	printr = string_toupper(str);
	printf("%s", printr);
	printf("%s", str);
	return (0);
}
