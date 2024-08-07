#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name using a given function
 * @name: The name to print
 * @f: Pointer to the function that prints the name
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
