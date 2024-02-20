#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		putchar(num);	
		if (num == 57)
			continue;
		putchar(44);
		putchar(32);
	}
	putchar('\n');
	return (0);
}
