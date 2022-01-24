#include<iostream>
using namespace std;
class Student {
	string name;
	char grade;
	int score;
public:
	void setStu(string name, int score) {
		this->name = name;
		this->score = score;
		if (0 <= this->score && this->score <= 50) {
			this->grade = 'F';
		}
		else if (50 < this->score && this->score <= 70) {
			this->grade = 'B';
		}
		else if (70 < this->score && this->score <= 100) {
			this->grade = 'A';
		}
		cout << this->name << " 학생 " << this->score << " 점, 입력 완료 "<<endl;
	}
	void setStu(string name) {
		srand(time(NULL));
		this->name = name;
		this->score = rand()%100+1;
		if (0 <= this->score && this->score <= 50) {
			this->grade = 'F';
		}
		else if (50 < this->score && this->score <= 70) {
			this->grade = 'B';
		}
		else if (70 < this->score && this->score <= 100) {
			this->grade = 'A';
		}
		cout << this->name << " 학생 " << this->score << " 점, 입력 완료 " << endl;
	}
	void show() {
		cout << this->name << " 학생 , " << this->score << "점 [ " << this->grade << " ] 학점 입니다."<<endl;
	}
};
void main() {
	Student s1;
	s1.setStu("홍길동",63);
	s1.show();
	Student s2;
	s2.setStu("이순신");
	s2.show();

}