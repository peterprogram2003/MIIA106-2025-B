#include <iostream>
#include <string>
#include <cmath>
using namespace std;
double circleArea(double radius)
{	
	const double Pi = 3.141592;
	return Pi * radius * radius;
}
double rect(double length, double width)
{
	return length * width;
}
int main()
{
	// Cricle area calculation
	double radius;
	cout << "Enter the radius of the circle: ";
	cin >> radius;
	cout << "The area of the circle is: " << circleArea(radius) << endl;
	
	// Rectangle area calculation
	double length, width;
	cout << "Enter the length ";
	cin >> length;
	cout << "Enter the width ";
	cin >> width;
	cout << "The area of the rectangle is: " << rect(length, width) << endl;

}