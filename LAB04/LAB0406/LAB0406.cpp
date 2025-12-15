#include <iostream>
using namespace std;

int main()
{
	int SensorLeft, sensorCenter, sensorRight;
	cout << "Enter left, center, right sensor values: "; // รับค่าจากเซ็นเซอร์ทั้งสาม 1คือเจอ 0คือไม่เจอ
	cin >> SensorLeft >> sensorCenter >> sensorRight;
	//ถ้าเซ็นเซอร์ตรงกลางมีค่าสูงกว่าเซ็นเซอร์ซ้ายและขวา ให้แสดงผล "Move Forward" ตรงไป
	if (sensorCenter > SensorLeft && sensorCenter > sensorRight) {
		cout << "Move Forward" << endl;
	}//ถ้าเซ็นเซอร์ซ้ายมีค่าสูงกว่าเซ็นเซอร์ตรงกลาง ให้แสดงผล "Turn Left" เลี้ยวซ้าย
	else if (SensorLeft > sensorCenter) {
		cout << "Turn Left" << endl;
	}//ถ้าเซ็นเซอร์ขวามีค่าสูงกว่าเซ็นเซอร์ตรงกลาง ให้แสดงผล "Turn Right" เลี้ยวขวา
	else if (sensorRight > sensorCenter) {
		cout << "Turn Right" << endl;
	}
	else {//ถ้าไม่มีเงื่อนไขใดเป็นจริง ให้แสดงผล "Stop" หยุด
		cout << "Stop" << endl;
	}
	return 0;
}
