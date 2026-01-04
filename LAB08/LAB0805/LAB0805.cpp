#include <iostream>
using namespace std;

struct Address {
	int number;
	char road[20];
	char district[20];
	char province[20];
};

struct Phone {
	char home[10];
	char mobile[10];
};

struct Student {
	char id[9];
	char name[20];
	char surname[20];
	Address addr; // struct ซ้อน struct
	Phone tel; // struct ซ้อน struct
};
void inputStudent(Student& student) {
	cout << "Enter Student Information\n";
	cout << "ID: ";
	cin >> student.id;
	cout << "Name: ";
	cin >> student.name;
	cout << "Surname: ";
	cin >> student.surname;
	cout << "Address - House Number: ";
	cin >> student.addr.number;
	cout << "Address - Road: ";
	cin >> student.addr.road;
	cout << "Address - District: ";
	cin >> student.addr.district;
	cout << "Address - Province: ";
	cin >> student.addr.province;
	cout << "Phone - Home: ";
	cin >> student.tel.home;
	cout << "Phone - Mobile: ";
	cin >> student.tel.mobile;
}
void printStudent(const Student& student) {
	cout << "\n===== Student Information =====\n";
	cout << "ID : " << student.id << endl;
	cout << "Name : " << student.name << " " << student.surname << endl;
	cout << "Address : " << student.addr.number << ", "
		<< student.addr.road << ", "
		<< student.addr.district << ", "
		<< student.addr.province << endl;
	cout << "Phone : Home " << student.tel.home
		<< ", Mobile " << student.tel.mobile << endl;

}

int main() 
{
	Student student;
	inputStudent(student);
	printStudent(student);
	return 1;
}