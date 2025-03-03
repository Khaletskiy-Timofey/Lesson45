bool is_local_min(int* array, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (i == 0 && array[0] < array[1] 
			|| i + 1 == size && array[i] < array[i - 1] 
			|| array[i] < array[i - 1] && array[i] < array[i + 1])
		{
			return true;
		}
	}

	return false;
}

bool is_local_max(int* array, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (i == 0 && array[0] > array[1]
			|| i + 1 == size && array[i] > array[i - 1]
			|| array[i] > array[i - 1] && array[i] > array[i + 1])
		{
			return true;
		}
	}

	return false;
}