#include <stdio.h>
#include <stdlib.h>

int main(void)
/* main - putchar alphabets */

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
