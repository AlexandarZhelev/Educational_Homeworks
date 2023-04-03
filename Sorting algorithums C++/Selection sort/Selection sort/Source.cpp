//SELECTION SORT

#include <iostream>

int main() {
	int i;
	int j;
	int num;
	int p;
	int temp;
	int min;
	
	int arr[10];

	std::cout << "Enter the number of elements: " << "\n";
	std::cin >> num;
	std::cout << "Enter your elements" << "\n";

	for (int i = 0; i < num; i++) {
		std::cin >> arr[i];
	}

	for (int i = 0; i < num - 1; i++) {
		//store the first element of the value
		min = arr[i];
		p = i;

		for (j = i + 1; j < num; j++) {
			if (min > arr[j]) {
				min = arr[j];
				p = j;
			}
		}

		temp = arr[i];
		arr[i] = arr[p];
		arr[p] = temp;
	}

	std::cout << "Sorted elements are: " << "\n";

	for (int i = 0; i < num; i++) {
		std::cout << arr[i] << " " << "\t";
	}

	system("pause");
	return 0;
}