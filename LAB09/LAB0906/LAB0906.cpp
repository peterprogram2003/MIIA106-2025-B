// TODO 1) เติม field ใน class Student: id, nickname
 // TODO 2) ใช้ pointer p ชี้ไปที่ s1 
// TODO 3) กำหนดค่าโดยใช้ p-> 
// TODO 4) แสดงผลโดยใช้ p->
#include <iostream> 
#include <string> 
using namespace std;
class Student
{
public: 
	int id;
	string nickname;
};
int main()
{
	Student s1;
	Student* p = nullptr;
	p = &s1;
	p->id = 685;
	p->nickname = "Peter";

	cout << "ID: " << p->id << endl;
	cout << "Nickname: " << p->nickname << endl;

	return 0;
}
