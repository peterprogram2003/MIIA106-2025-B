// TODO: แสดงค่า score, address และ pointer
#include <iostream>
using namespace std;

int main() {
    int score = 50;
    int* ptr = &score;

	cout << score << endl;
    cout << &score << endl;
    cout << ptr << endl;

    return 0;
}
