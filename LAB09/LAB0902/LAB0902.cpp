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
	const int SIZE = 5;
	Student students[SIZE];
	// INPUT
	for (int i = 0; i < SIZE; i++)
	{
		cout << "=== Input Student " << (i + 1) << " ===\n";
		students[i].input();
		cout << endl;
	}

	// OUTPUT
	cout << "\n===== Student List =====\n";
	for (int i = 0; i < SIZE; i++)
	{
		students[i].print();
		cout << "----------------------\n";
	}

	return 0;

}