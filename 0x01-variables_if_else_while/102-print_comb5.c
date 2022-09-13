#include <stdio.h>
#include <stdlib.h>
/**
* main - print if the number is postive, zero, or negative
*
* Description: using the main function
* this program prints "Programming is positive, zero, or negative
* Return: 0
*/
int main(void)
{
int n1 = 0, n2;
while (n1 <= 99)
{
	n2 = n1;
	while(n2 <= 99)
	{
		if (n2 != n1)
		{
			putchar((n1 / 10) + 48);
			putchar((n1 % 10) + 48);
			putchar(' ');
			putchar((n2 / 10) + 48);
			putchar((n2 % 10) + 48);
			
			if(n1 != 98 || n2 != 99)
			{
				putchar(',');
				putchar(' '); 
			} 
		}
		++n2;
	}
	++n1;
}
putchar('\n');
return (0);
}
