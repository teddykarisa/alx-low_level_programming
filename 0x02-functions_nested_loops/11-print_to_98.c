#include<stdio.h>



/**

 * print_to_98 - last number is 98

 *

 * @n: input  integer

 *

 * Return: 0 (success)

 */

void print_to_98(int n)

{

	if (n < 98)

	{

		for (; n < 98; n++)

		{

			printf("%d, ", n);

		}

	}

	else if (n > 98)

	{

		for (; n > 98; n--)

		{

			printf("%d, ", n);

		}

	}

	printf("%d\n", n);

}
