#include<iostream>
#include<string>
using namespace std;
class Student {
	string name;
	int score[3];
	double avg;
	char grade;
public:
	char getGrade() {
		return grade;
	}
	Student() {

	}
	Student(string name) {
		this->name = name;
		this->avg = 0.0;
		for (int i = 0; i < 3; i++) {
			do {
				cout << i + 1 << "번째 성적입력 : ";
				cin >> score[i];
			} while (score[i] < 0 || score[i]>100);
			this->avg += this->score[i];
		}
		this->avg /= 3.0;
		this->grade = 'F';
		if (this->avg >= 50.0) {
			this->grade = 'P';
		}
	}
	void show() {
		cout << this->name << " [" << this->grade << "]" << endl;
	}
};
void main() {
	Student s[3];
	string name;
	int score;
	for (int i = 0; i < 3; i++) {
		cout << "학생 이름 입력 : "<<endl;
		cin >> name;
		s[i] = Student(name);
	}
	for (int i = 0; i < 3; i++) {
		s[i].show();
	}
	for (int i = 0; i < 3; i++) {
		cout << "[" << s[i].getGrade() << "]" << endl;
	}
}