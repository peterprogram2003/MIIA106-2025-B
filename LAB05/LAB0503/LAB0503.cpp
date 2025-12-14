#include <iostream>
using namespace std;

void Swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
int main()
{
	int a, b;
	cout << "Enter A: ";
	cin >> a;
	cout << "Enter B: ";
	cin >> b;
	cout << "Before swapping, A = " << a << ", B = " << b << endl;
	Swap(a, b);
	cout << "After swapping, A = " << a << ", B = " << b << endl;
	return 0;
}