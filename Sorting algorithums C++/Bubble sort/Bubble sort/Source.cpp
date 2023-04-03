//BUBBLE SORT

#include <iostream>

int main() {
	int i;
	int j;
	int temp;

	int arr[8] = { 15, 7, 22, 45, 14, 2, 36, 10 };
	std::cout << "Unsorted array: " << "\n"; 

	for (int i = 0; i < 8; ++i) {
		std::cout << arr[i] << "\t"; //horizontal space between each element
	}

	std::cout << "\n" << "\n"; //next line

	for (int i = 0; i < 8; ++i) {
		for (int j = i + 1; j < 8; ++j) {
			if (arr[j] < arr[i]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	std::cout << "Sorted array: " << "\n";

	for (int i = 0; i < 8; ++i) {
		std::cout << arr[i] << "\t"; //horizontal space between each element
	}

	std::cout << "\n"; //next line
	
	system("pause");
	return 0;
}