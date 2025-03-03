#include "logic.h"

int count_local_min(int* array, int size)
{
	int local_min = 0;

	if (size > 1 && array[0] < array[1])
	{
		local_min++;
	}
	if (size > 1 && array[size - 1] < array[size - 2])
	{
		local_min++;
	}

	for (int i = 0; i < size; i++)
	{
		if (array[i] < array[i - 1] && array[i] < array[i + 1])
		{
			local_min++;
		}
	}

	return local_min;
}

int* find_local_min_indices(int* array, int size, int* count)
{
	*count = count_local_min(array, size);

	int* indices = new int[*count];
	int j = 0;

	if (size > 1 && array[0] < array[1])
	{
		*indices = 0;
		j++;
	}

	for (int i = 1; i < size; i++)
	{
		if (array[i] < array[i - 1] && array[i] < array[i + 1])
		{
			*(indices + j) = i;
			j++;
		}
	}

	if (size > 1 && array[size - 1] < array[size - 2])
	{
		*(indices + j) = size - 1;
	}

	return indices;
}