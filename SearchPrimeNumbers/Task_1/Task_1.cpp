#include <iostream>

// this function check if given number is prime or not
bool isPrime(int N) {
	// we isolate all numbers less than 2 because we know they are not prime
	if (N <= 1) {
		std::cout << N << " is not a prime number!" << "\n";
		return false;
	}

	else {
		for (int i = 2; i < N; ++i) {
			if (N % i == 0) {
				return false;
			}
		}

		return true;
	}
}

// this function print all prime numbers below N\
	if N is a also prime number, print N together with other prime numbers
void printPrime(int N) {
	std::cout << "\n";
	std::cout << "All prime numbers up to " << N << " are:" << "\n";

	for (int i = 2; i <= N; i++) {
		if (isPrime(i)) {
			std::cout << i << " " << "\n";
		}
	}
}

int main() {
	int N;
	std::cout << "Enter integer number" << "\n";
	std::cin >> N;

	system("cls"); //clear screen after input

	std::cout << "Your number is " << N << ":" << "\n";
	
	if (N % 2 == 0) {
		std::cout << N << " is not a prime number!" << "\n";
	}

	else {
		std::cout << N << " is a prime number" << "\n";
	}

	printPrime(N);

	return 0;
}