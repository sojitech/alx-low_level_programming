/* C program to print a int number
* using _putchar() only
*/
#include <stdio.h>
 
void print_number(int n)
{
    if (n < 0) {
        _putchar('-');
        n = -n;
    }
 
    if (n/10)
        print_number(n/10);
 
    _putchar(n%10 + '0');
}
int main()
{
    long int n = 12045;
    print_number(n);
    return 0;
}
