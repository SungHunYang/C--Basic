#include<iostream>
using namespace std;
class Student {
	string name;
	int score;
public:
	/*
	Student() {
		this->name = "무명";
		this->score = 50;
	}
	Student(string name) {
		this->name = name;
		this->score = 50;
	}
	*/
	Student(string name="무명",int score=50) {
		this->name = name;
		this->score = score;
	}
	void show() {
		cout << this->name << " " << this->score << "점" << endl;
	}
};
void main() {
	Student s1;// 생성자를 1개 이상 정의한 순간 디폴트생성자 더이상 기본제공 x
	Student s2 = Student("홍길동");
	Student s3 = Student("아무무", 80);
	s1.show();
	s2.show();
	s3.show();

}