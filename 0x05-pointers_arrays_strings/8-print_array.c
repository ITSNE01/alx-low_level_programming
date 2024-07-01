#include <stdio.h>

/**
 * print_array - prints array of integers
 * followed by a new line
 * @n: number of array elements to be printed
 * @a: Pointer to the array of elements
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
