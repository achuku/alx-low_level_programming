#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 * Return - Always 0 (Success)
 */
int main(void)
{
int n, last_digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
printf("Last digit of %d is %d", n, last_digit);
if (last_digit > 5)
	printf("and is greater than 5\n");
else if (last_digit == 0)
	printf("and is 0\n");
else (last_digit < 6)
	printf("and is less than 6 and not 0\n");
return(0);
}
