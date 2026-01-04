#include <iostream>
#include <string>
using namespace std;

struct Student {
	string studentID;
	string nickname;
	string lineID;
	string phoneNumber;
};
void printStudent(Student s) {
	cout << "Student ID: " << s.studentID << endl;
	cout << "Nickname: " << s.nickname << endl;
	cout << "Line ID: " << s.lineID << endl;
	cout << "Phone Number: " << s.phoneNumber << endl;
}
int main() {
	Student s1; // ตัวแปรเดี่ยวของ struct

	cout << "=== Input Student 1 ===\n";
	cout << "Enter Student ID: ";
	getline(cin, s1.studentID);
	cout << "Enter Nickname: ";
	getline(cin, s1.nickname);
	cout << "Enter Line ID: ";
	getline(cin, s1.lineID);
	cout << "Enter Phone Number: ";
	getline(cin, s1.phoneNumber);

	cout << "\n=== Output (from function) ===\n";
	printStudent(s1);


	return 0;
}
