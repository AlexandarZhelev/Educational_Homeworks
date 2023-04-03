//QUICK SORT

#include <iostream>

int divide(int arr[], int start, int end) {
	int pivot = arr[end];
	int index = start;
	
	for (int i = start; i < end; i++) {
		if()
	}
}

void Quick(int arr[], int start, int end) {
	if (start < end) {
		int d = divide(arr, start, end);
		Quick(arr, start, (d - 1));
		Quick(arr, (d + 1), end);
	}
}

int main() {
	int num;
	int i;
	int arr[10];

	std::cout << "Enter the number of elements: " << "\n";
	std::cin >> num;
	std::cout << "Enter the elements: " << "\n";

	for (i = 0; i < num; i++) {
		std::cin >> arr[i];
	}

	Quick(arr, 0, (num - 1));
	std::cout << "After sorting, the elements are: " << "\n";
	for (int i = 0; i < num; i++) {
		std::cout << arr[i] << " " << "\n";
	}
	system("pause");
	return 0;
}