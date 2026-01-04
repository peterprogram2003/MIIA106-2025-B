#include <iostream>
#include <string>
using namespace std;

struct Student {
    string studentID;
    string nickname;
    string lineID;
	string phoneNumber;
};
// TODO: swap เขียนเอง
void swapStudent(Student& a, Student& b) {
	string temp = a.studentID;
	a.studentID = b.studentID;
	b.studentID = temp;
}
// TODO: sort เขียนเอง (Bubble sort)
void sortByID(Student students[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (students[j].studentID > students[j + 1].studentID) 
            {
                swapStudent(students[j], students[j + 1]);

            }
        }
    }   
}
void printStudents(Student students[], int size) 
{
    for (int i = 0; i < size; i++) {
		cout << "Student ID: " << students[i].studentID << endl;
		cout << "Nickname: " << students[i].nickname << endl;
		cout << "Line ID: " << students[i].lineID << endl;
		cout << "Phone Number: " << students[i].phoneNumber << endl;
        cout << "----------------------\n";
    }
}
int main() {
    const int SIZE = 5;
    Student students[SIZE];
    // INPUT
    for (int i = 0; i < SIZE; i++) {
        cout << "=== Input Student " << (i + 1) << " ===\n";
        cout << "Enter Student ID: ";
        getline(cin, students[i].studentID);
        cout << "Enter Nickname: ";
        getline(cin, students[i].nickname);
        cout << "Enter Line ID: ";
        getline(cin, students[i].lineID);
        cout << "Enter Phone Number: ";
        getline(cin, students[i].phoneNumber);
        cout << endl;
    }
    sortByID(students, SIZE);
    cout << "\n===== Student List (Sorted by ID) =====\n";
    printStudents(students, SIZE);

    return 0;
}
