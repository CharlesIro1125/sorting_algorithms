#include "sort.h"
/**
 * bubble_sort - takes an array and applies
 * bubble sort
 * @array: a pointer to the array
 * @size: the size of the array
 * Return: return void
 */
void bubble_sort(int *array, size_t size)
{
	int val;
	size_t i, s;

	if (array == NULL && size < 2)
		return;
	i = 0;
	s = size;
	while (s)
	{
		if (array[i] > array[i + 1])
		{
			val = array[i];
			array[i] = array[i + 1];
			array[i + 1] = val;
			print_array(array, size);
		}
		if (i < s - 1)
			i++;
		if (i == s - 1)
		{
			s--;
			i = 0;
		}
	}
}
