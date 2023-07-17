#include <stdio.h>
/**
*main-Positive anything is better than negative nothing
*
*Description: 0, 1, - 9
*
*Return: (0)
*/

int main(void)
(
int numbers = '0';
while (numbers <= 9)
{
putchar(numbers);
if (numbers != 9)
{
putchar(',');
putchar(' ');
}
numbers++;
}
putchar('\n');
return (0);
)
