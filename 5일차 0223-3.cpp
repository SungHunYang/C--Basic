#include<iostream>
using namespace std;
class Student {
	string name;
	int score;
public:
	/*
	Student() {
		this->name = "����";
		this->score = 50;
	}
	Student(string name) {
		this->name = name;
		this->score = 50;
	}
	*/
	Student(string name="����",int score=50) {
		this->name = name;
		this->score = score;
	}
	void show() {
		cout << this->name << " " << this->score << "��" << endl;
	}
};
void main() {
	Student s1;// �����ڸ� 1�� �̻� ������ ���� ����Ʈ������ ���̻� �⺻���� x
	Student s2 = Student("ȫ�浿");
	Student s3 = Student("�ƹ���", 80);
	s1.show();
	s2.show();
	s3.show();

}