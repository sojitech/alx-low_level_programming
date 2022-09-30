#include "main.h"

/**
* _puts_reursion - prints's a string followed by  new line
* @s: string to be printed
* 
* Return: void                                     
*/
void _puts_recursion(char *s)
{	
	if (*s == 0)
	{
		_putchar('\n');
		return;		
	}
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}                                                  
