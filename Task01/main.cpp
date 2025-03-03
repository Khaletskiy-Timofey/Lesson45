#include "main.h"
#include "logic.h"
#include "utils.h"

int main()
{
	int* array;
	int size;

	cout << "Enter size of array: " << endl;
	cin >> size;

	array = new int[size];

	init_array(array, size, 0, 9);

	cout << "Array: " << array_to_string(array, size) << endl;

	cout << "Array " << (is_local_min(array, size) ? "has" : "hasn't") << " local min" << endl;
	cout << "Array " << (is_local_max(array, size) ? "has" : "hasn't") << " local max" << endl;

	delete[] array;

	return 0;
}