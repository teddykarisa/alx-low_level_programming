#include <stdio.h>



/**

 * main - prins all arguments recieved

 * @argc: argument counter

 * @argv: pointer to array of arguments

 * Return: 0

 */



int main(int argc, char *argv[])

{

	int i = 0;



	while (i < argc)

		printf("%s\n", argv[i++]);



	return (0);

}
