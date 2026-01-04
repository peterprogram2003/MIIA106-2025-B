#include <iostream>
#include <string>
using namespace std;



struct Phone {
	string mobile;
	string home;
};
struct Parent {
	string name;
	string relationship;
	Phone contact;
};

struct Student {
	string id;
	string nickname;
	string lineId;
	Phone myContact;
	Parent myParent;
};
void inputStudent(Student& student) {
	cout << "Enter Student Information\n";
	cout << "ID: ";
	cin >> student.id;
	cout << "Nick Name: ";
	cin >> student.nickname;
	cout << "Line ID: ";
	cin >> student.lineId;
	cout << "Parent - Name: ";
	cin >> student.myParent.name;
	cout << "Parent - Relationship: ";
	cin >> student.myParent.relationship;
	cout << "Parent - Contact Mobile: ";
	cin >> student.myParent.contact.mobile;
	cout << "Parent - Contact Home: ";
	cin >> student.myParent.contact.home;
	cout << "Student - Contact Mobile: ";
	cin >> student.myContact.mobile;
	cout << "Student - Contact Home: ";
	cin >> student.myContact.home;

}
void printStudent(const Student& student) {
	cout << "\n===== Student Information =====\n";
	cout << "ID : " << student.id << endl;
	cout << "Nick Name : " << student.nickname << endl;
	cout << "Line ID : " << student.lineId << endl;
	cout << "Parent Name : " << student.myParent.name << endl;
	cout << "Parent Relationship : " << student.myParent.relationship << endl;
	cout << "Parent Contact : Mobile " << student.myParent.contact.mobile
		<< ", Home " << student.myParent.contact.home << endl;
	cout << "Student Contact : Mobile " << student.myContact.mobile
		<< ", Home " << student.myContact.home << endl;
}
int main()
{
	Student student;
	inputStudent(student);
	printStudent(student);
	return 1;
}