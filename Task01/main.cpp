#include "main.h"
#include "logic.h"
#include "utils.h"

int main()
{
	int* array;
	int size;

	cout << "Enter size of array: ";
	cin >> size;

	array = new int[size];

	init_array(array, size, 0, 9);

	cout << "Array: " << array_to_string(array, size) << endl;

	int count;
	int* indices = find_local_min_indices(array, size, &count);

	cout << "Count of local min's: " << count << endl;
	cout << "Local min's: " << array_to_string(indices, count) << endl;

	delete[] indices;
	delete[] array;

	return 0;
}