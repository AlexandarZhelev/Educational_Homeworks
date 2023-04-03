//INSERTION SORT

#include <iostream>

int main() {
	int j;
	int num;
	int temp;

	int arr[30]; //define max length 30
	std::cout << "Pleace enter the number of elements into the array" << "\n";
	std::cin >> num; 
	std::cout << "Enter your elements:" << "\n";

	for (int i = 0; i < num; i++) {
		std::cin >> arr[i];
	}

	for (int i = 1; i <= num - 1; i++) {
		temp = arr[i];
		j = i - 1;

		while ((temp < arr[j]) && (j >= 0)) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}

		arr[j + 1] = temp; 
	}

	std::cout << "Sorted elements: " << "\n";

	for (int i = 0; i < num; i++) {
		std::cout << arr[i] << "\t";
	}

	system("pause");
	return 0;
}