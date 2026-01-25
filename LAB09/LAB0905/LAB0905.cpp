// TODO 1) เติม field: id, nickname, height, weight 
// TODO 2) เขียน method input(), print(), calcBMI()
#include  <iostream>
#include  <string>
using namespace std;
class Student
{
public: 
	int id;
	string nickname;
	double height;
	double weight;
	void input() {
		cout << "Enter ID: ";
		cin >> id;
		cout << "Enter Nickname: ";
		cin >> nickname;
		cout << "Enter Height: ";
		cin >> height;
		cout << "Enter Weight: ";
		cin >> weight;
	}
	void print()
	{
		cout << "\n----- Student Info -----" << endl;
		cout << "ID : " << id << endl;
		cout << "Nickname : " << nickname << endl;
		cout << "Height : " << height << endl;
		cout << "Weight : " << weight << endl;
	}
	double calcBMI() {
		double h = height / 100.0; // convert cm to m
		return weight / h * h;
	}
};
int main()
{
	Student s1;
	cout << "=== Input Student ===\n";
	s1.input();

	cout << "\n=== Student Info ===\n";
	s1.print();

	cout << "BMI : " << s1.calcBMI () << endl;

	return 0;
}
