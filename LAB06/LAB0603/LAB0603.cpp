#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void displayStudentInfo(string name, string id, double score, char grade)
{
    cout << "Student Name: " << name << "\n";
    cout << "Student ID  : " << id << "\n";
    cout << "Score       : " << fixed << setprecision(2) << score << "\n";
    cout << "Grade       : " << grade << "\n";
}

void calculateGrade(double score, char& grade)
{
    if (score >= 90) grade = 'A';
    else if (score >= 80) grade = 'B';
    else if (score >= 70) grade = 'C';
    else if (score >= 60) grade = 'D';
    else grade = 'F';
}


int main()
{   
    const int N = 3; 
    const int M = 4; 

    string name[N], id[N];
    double score[N][M];
    double total[N];
    char grade[N];
    for (int i = 0; i < N; ++i) {
        total[i] = 0;
        cout << "Enter student name: ";
        cin.ignore();
        getline(cin, name[i]);
        cout << "Enter student ID: ";
        cin >> id[i];
        for (int j = 0; j < M; ++j) {
            cout << "Enter score for subject " << (j + 1) << ": ";
            cin >> score[i][j];
            total[i] += score[i][j];
        }
        double averageScore = total[i] / M;
        calculateGrade(averageScore, grade[i]);
        displayStudentInfo(name[i], id[i], averageScore, grade[i]);
	}




    return 0;
}