#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
	int randomNumber = rand() % 100 + 1; // Random number between
	int guess;
	int tries = 0;
	cout << "Welcome to the Number Guessing Game 1 - 100!" << endl;
	do {
		cout << "Enter your guess: ";
		cin >> guess;
		tries++;
		if (guess < randomNumber) {
			cout << "Too low! Try again." << endl;
		}
		else if (guess > randomNumber) {
			cout << "Too high! Try again." << endl;
		}
		else {
			cout << "Congratulations! You've guessed the number " << randomNumber << " in " << tries << " tries." << endl;
		}
	} while (guess != randomNumber);
}
