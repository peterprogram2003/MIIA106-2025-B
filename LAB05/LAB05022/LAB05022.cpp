#include <iostream>
using namespace std;
int MaxOfThree(int a, int b, int c)
{
    int max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    return max;
}
int MinOfThree(int a, int b, int c)
{
    int min = a;
    if (b < min)
        min = b;
    if (c < min)
        min = c;
    return min;
}
int main()
{
    
	int a, b, c;
	cout << "Enter three integers: ";
	cin >> a >> b >> c;
	cout << "The maximum value is: " << MaxOfThree(a, b, c) << endl;
    cout << "Enter three integers: ";
    cin >> a >> b >> c;


	cout << "The minimum value is: " << MinOfThree(a, b, c) << endl;
}
