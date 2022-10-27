#include <stdio.h>
#include <stdlib.h>

/**
* main - print alphabets using putchar
*
* Return: Always 0.
*/
int main(void)

{
	char ch;
	/* print lowercase alphabets*/

	for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);

	/* print uppercase alphabets*/

	for (ch = 'A'; ch <= 'Z'; ch++)
	putchar(ch);

	putchar('\n');

	return (0);

}
