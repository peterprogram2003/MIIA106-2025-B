#include  <iostream>
#include  <string>
using namespace std;
class Student
{
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
};
void printStudent(Student s)
{
	for (int i = 0; i < 1; i++)
	{
		cout << "\n----- Student Info -----" << endl;
		cout << "ID : " << s.id << endl;
		cout << "Nickname : " << s.nickname << endl;
		cout << "Line ID : " << s.lineId << endl;
		cout << "Phone : " << s.phone << endl;
	}
}
int main()
{
	Student s1;
	cout << "=== Input Student 1 ===\n";
	s1.input();

	cout << "\n=== Output (from function) ===\n";
	printStudent(s1);

	return 0;
}
