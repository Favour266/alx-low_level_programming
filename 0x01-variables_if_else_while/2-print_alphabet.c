#include <stdio.h>
/**
 * main - Entry point
 * Description: random number in n +ve/-ve 
 * Return: 0 on Success
 */
int main(void)
{
int firstLetter, n;

for (firstLetter = 97, n = 1; n < 27; firstLetter++, n++)
{
putchar(firstLetter);
}
putchar(10);
return (0);
}
