#include <iostream>
using namespace std;

int main()
{	
	int idSutudent;
	cout << "Enter your student ID: ";
	cin >> idSutudent;
	for (int i = 2; i <= 12; i++) {
		cout  << idSutudent <<  " x " << i << " = " << i*idSutudent << endl;
		
	}

	return 0;
}