#include <iostream>
#include <string>
using namespace std;

int main() 
{   
	for (int i = 1; i < 11; i++)
	{
		cout << "" << i << endl;
	}
	
	cout << endl;

	int w = 1;
	while (w < 11)
	{
		cout << "" << w << endl;
		w++;
	}
	cout << endl;


	int x = 1;
	do {
		cout << "" << x << endl;
		x++;
	} while (x < 11);


	return 0;
}