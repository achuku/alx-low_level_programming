#include<stdio.h>
/**
 *main -This is the main function be executed
 *Return: Always 0 (Success)
 */
int main(void)
{
char chartype;
int inttype;
long int longinttype;
long long int llonginttype;
float floattype;
printf("Size of a char: %u byte(s)\n", sizeof(chartype));
printf("Size of an int: %u byte(s)\n", sizeof(inttype));
printf("Size of a long int: %u byte(s)\n", sizeof(longinttype));
printf("Size of a long long int: %u byte(s)\n", sizeof(llonginttype));
printf("Size of a float: %u byte(s)\n", sizeof(floattype));
return (0);
}
