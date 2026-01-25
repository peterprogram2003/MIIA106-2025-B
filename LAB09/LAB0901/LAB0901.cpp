#include <iostream>
#include <string>
using namespace std;
class Student {
public:
	int id;
	string nickname;
	string lineId;
	string phone;
    void input() {
		cout << "Enter ID: ";
		cin >> id;
		cout << "Enter Nickname: ";
		cin >> nickname;
		cout << "Enter Line ID: ";
		cin >> lineId;
		cout << "Enter Phone: ";
		cin >> phone;
	}
	void print()
	{
		cout << "\n----- Student Info -----" << endl;
		cout << "ID : " << id << endl;
		cout << "Nickname : " << nickname << endl;
		cout << "Line ID : " << lineId << endl;
		cout << "Phone : " << phone << endl;
	}
};



int main() {
	Student s1;
	cout << "=== Input Student 1 ===\n";
	s1.input();

	cout << "\n=== Output Student 1 ===\n";
	s1.print();
	return 1;
}