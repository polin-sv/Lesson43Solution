#include "util.h"

int main() {
	int array[DEFAULT_SIZE];

	int length;
	int a = -20, b = 20;

	do {
		cout << "input size of array: ";
		cin >> length;
	} while (length <= 0);

	init_random(array, length, a, b);

	print("result array:\n");
	print(convert(array, length) + "\n");

	return 0;
}