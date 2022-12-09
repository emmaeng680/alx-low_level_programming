* main - Entry point
 * Description: 'double combinations of 0 to 9'
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, m, c;

for (i = '0' ; i <= '9' ; i++)
{

for (m = i + 1 ; m <= '9' ; m++)
{

for (c = m + 1 ; c <= '9' ; c++)
{
putchar(i);
putchar(m);
putchar(c);

if (i != '7' || m != '8' || c != '9')
{
putchar(',');
putchar(' ');
}
}
}
}
putchar(10);
return (0);
}

