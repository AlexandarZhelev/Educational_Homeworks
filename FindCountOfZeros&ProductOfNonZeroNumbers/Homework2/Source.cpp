#include <iostream>

int countZeros(int k[], int number) //function which calculate the num of zeros in the array
{
	if (number >= 1) 
	{
		if (k[number - 1] == 0) 
		{
			return 1 + countZeros(k, number - 1);
		}

		else
		{
			return 0 + countZeros(k, number - 1);
		}
	}

	else 
	{
		return 0;
	}
}

int getProduct(int arr[], int k) //calculate the sum of numbers
{
	int product = 1;

	for (int i = 0; i < k; i++)
	{
		if (arr[i] != 0)
		{
			product *= arr[i];
		}
	}

	return product;
}

int main()
{
	int k;

	do {
		std::cout << "Enter the number of items!(between 1 and 30)" << "\n";
		std::cin >> k;
	} 

	while (k > 30 || k <= 0);
	system ("cls"); //clear screen

	int arr[30];
	std::cout << "Enter " << k << " items." << "\n";
	
	for (int i = 0; i < k; i++) //use a for loop to create a loop variable i to iterate over the items entered by the user.
	{
		std::cin >> arr[i];
	}

	for (int i = 0; i < k; i++) //display array
	{
		std::cout << arr[i] << " ";
	}

	std::cout << "\n" << "\n";
	std::cout << "The numbers of zeros in the array are: " << countZeros(arr, k) << "\n";
	std::cout << "The product of non zero numbers is: " << getProduct(&arr[0], k) << "\n";

	system ("pause");
	return 0;
}