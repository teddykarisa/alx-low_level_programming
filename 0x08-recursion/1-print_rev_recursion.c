#include "main.h"

/**

 *print_rev_recursion - print stirng in reverse

 *

 *@s: String to reverse

 */

void _print_rev_recursion(char *s)

{

	if ( *s != '\0')

	{

		_print_rev_recursion(s + 1);

		_putchar(*s);

	}

}
