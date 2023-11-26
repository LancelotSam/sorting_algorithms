#include "sort.h"
/**
 * bubble_sort-this is the main function
 * it sorts an array of integers using bubble algorithm
 * @array: an array of integers
 * @size: the size of the array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t i, j;

	i = 0;
	j = 0;

	if (!array || !size)
		return;
	while (i < size)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
		i++;
	}
}
