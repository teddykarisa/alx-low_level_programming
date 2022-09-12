#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{

char a;
int b;
long int c;
long long int d;
float e;

printf("Size of a char is: %d byte(s)\n", sizeof(a));
printf("Size of an int is: %d byte(s)\n", sizeof(b));
printf("Size of a long int is: %d byte(s)\n", sizeof(c));
printf("Size of a long long int is: %d byte(s)\n", sizeof(d));
printf("Size of a float is: %d byte(s)\n", sizeof(e));
return (0);
}
