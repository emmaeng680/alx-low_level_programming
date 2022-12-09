#include <stdio.h>
/**
 * main - Entry point
 * Description: 'smallcase letters in reverse'
 * Return: Always 0 (Success)
 */
int main(void)
{
int alphabet;

for (alphabet = 'z' ; alphabet >= 'a' ; alphabet--)
{
putchar(alphabet);

}
putchar(10);


return (0);
}
