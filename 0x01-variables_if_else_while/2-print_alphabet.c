#include <stdio.h>
#include <stdlib.h>
/*
* main - putchar (ch) to print alphabets
*
* Return: Always 0.
*/
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
