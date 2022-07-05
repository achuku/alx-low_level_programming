#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main -This is the main function be executed
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
	
/* your code goes there */
if (n>0)
{
printf(n" is positive\n");
}
if (n==0)
{
printf(n" is zero\n");
}
if (n<0)
{
printf(n "is negative\n");
}

return (0);
}
