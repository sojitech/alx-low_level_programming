#include <stdio.h>
/**
*main - prints out first 98
*fibonacci suit numbers
*Return: return 0
*/
int main(void)
{
long inc;
int n1 = 0, n2 = 1, n3;
for (inc = 0; inc < 98; inc++)
{
n3 = n1 + n2;
printf("%li", n3);
n1 = n2;
n2 = n3;

if (inc == 97)
printf("\n");
else
printf(", ");

}

return (0);
}
