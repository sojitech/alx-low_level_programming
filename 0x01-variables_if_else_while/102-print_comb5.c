#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - print if the number is postive, zero, or negative
*
* Description: using the main function
* this program prints "Programming is positive, zero, or negative
* Return: 0
*/
int main(void)
{

int num1, num2;

for(num1 = 0; num1 <= 98; num1++)

{

for(num2 = num1 + 1; num2 <= 99; num2++)
		
{

putchar((num1 / 10) + 0);
putchar((num1 % 10) + 0);
putchar(' ');
putchar((n2 / 10) + 0);
putchar((n2 % 10) + 0);

if(num1 != 98 && num2 == 99)
		
continue;

putchar(',');
putchar(' '); 

} 

}

putchar('\n');

return (0);
}
