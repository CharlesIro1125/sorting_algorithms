#include "sort.h"
/**
 * selection_sort - takes an array and applies
 * selection sort
 * @array: a pointer to the array
 * @size: the size of the array
 * Return: return void
 */
void selection_sort(int *array, size_t size)
{
	int val, pos;
	size_t i = 1, index = 0, j;

	if (array == NULL && size < 2)
		return;
	while (i)
	{
		pos = array[i - 1];
		for (j = i; j < size; j++)
		{
			if (pos > array[j])
			{
				index = j;
				val = array[j];
				pos = val;
			}
		}
		if (index)
		{
			array[index] = array[i - 1];
			array[i - 1] = pos;
			print_array(array, size);
		}
		index = 0;		i++;
		if (i - 1 == size)
			i = 0;
	}
}
