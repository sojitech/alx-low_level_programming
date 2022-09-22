#include <stdio.h>
#include "main.h"

/**
*more_numbers - prints numbers to 14
*
*Return: returns nothing
*/

void more_numbers(void)
{
	int a1, a2;

	for (a1 = 0; a1 < 10; a1++)
	{
		for (a2 = 0; a2 <= 14; a2++)
		{
			if (a2 > 9)
			{
				putchar((a2 / 10) + '0');
			}
			putchar((a2 % 10) + '0');
		}
		putchar(10);
	}
}
