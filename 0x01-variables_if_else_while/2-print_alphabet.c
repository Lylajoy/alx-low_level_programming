#include <stdio.h>
#include <stdlib.h>
/*
* main - print alphabetsusing putchar
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
