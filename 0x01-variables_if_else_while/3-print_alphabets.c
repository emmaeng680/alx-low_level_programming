#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print smallcase and capital letters'
 * Return: Always 0 (Success)
 */
int main(void)
{
int alphabet, capitals;

for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
{
putchar(alphabet);

}

for (capitals = 'A' ; capitals <= 'Z' ; capitals++)
{
putchar(capitals);

}
putchar(10);


return (0);
}
