#include "main.h"
/**
 * main - Entry Block
  *Description: prints _putchar followed by a new line
 * Return: 0
 */
int main(void)
{
	char c[8] = "_putchar";

	int i = 0;

	for (i; i < 8; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
