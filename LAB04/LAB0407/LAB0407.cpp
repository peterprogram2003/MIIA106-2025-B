#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
	if (n <= 1) {
		return false;// 0 and 1 are not prime numbers
	}
	// Check for factors from 2 to the square root of n
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			return false; // Found a divisor, not prime
		}
		return true; // loop completed, n is prime
	}
}
int main() 
{	
	int num;
	cout << "Enter a number to check if it's prime: ";
	cin >> num;
	if (isPrime(num)) {
		cout << num << " is a prime number." << endl;
	}
	else {
		cout << num << " is not a prime number." << endl;
	}
	return 0;
}