#include "sort.h"
/**
 * quick_sort - takes an array and applies
 * quick sort
 * @array: a pointer to the array
 * @size: the size of the array
 * Return: return void
 */
void quick_sort(int *array, size_t size)
{
	int val, pos, mtr, master = 0, to_right = 1;
	size_t i = 1, index, j;
	int s = size;

	if (array == NULL || size < 2)
		return;

	index = s - 1;

	while (i)
	{
		pos = array[master];
		for (j = 0; j < size; j++)
		{
			if (to_right)
			{
				if (pos > array[index])
				{
					val = array[index];
					array[index] = pos;
					array[master] = val;
					mtr = master;
					master = index;
					to_right = 0;
					index = mtr + 1;
					if (mtr + 1 == master)
						break;
					print_array(array, size);
				}
				else
					index--;
			}
			else
			{
				if (pos < array[index])
				{
					val = array[index];
					array[index] = pos;
					array[master] = val;
					mtr = master;
					master = index;
					to_right = 1;
					index = mtr - 1;
					if (mtr - 1 == master)
						break;
					print_array(array, size);
				}
				else
					index++;
			}
		}
		if (master > 1)
		{
			quick_sort(array, master);
			if (master < s - 2)
				quick_sort(array + (master + 1), s - (master + 1));
		}
		i = 0;
	}
}
