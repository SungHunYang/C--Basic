#include<iostream>
using namespace std;
class A {
private:
	int x;
	void f1() {
		cout << "f1()ȣ���" << endl;
	}
protected:  
// ��Ӱ��迡�� �̿� -> �ڱ��ڽ� + �ڽ��� ��ӹ��� �ڽ�Ŭ�������� ������ ���ٰ����ϰ� ���ִ� ������
	int y;
	void f2() {
		cout << "f2()ȣ���" << endl;
	}
public:
	int z;
	void f3() {
		cout << "f3()ȣ���" << endl;
	}
};
class B : public A { // Ŭ���� ����� �̷������, 
	//�ڽ�Ŭ����(B)���� �θ�Ŭ���� (A)�� ������� ��� �̿��Ҽ��ְ� ��
	//��ӽÿ� �ۼ��ϴ� ���������� : 
	//�θ�Ŭ������ �����ϴ� �ش� ���������ں��� �� ���� ����� ����, �ش� ���������� �ްڴ�.
public:
	void f4() {
		cout<<"f4()ȣ���" << endl;
	}


};
class Person {
protected:
	string name;
public:
	Person(){
	}
	Person(string name) {
		this->name = name;
	}
	void hello() {
		cout << "�ȳ��ϼ���!" << endl;

	}
	void show() {
		cout << "�̸� : " << this->name << endl;
	}
};
class Student : public Person {
	int score;
public:
	Student(string name, int score) {
		this->name = name;
		this->score = score;
	}
	void show() { // �Լ��� ���� + �Լ�����, ����Ÿ�� ����
		// -> �Լ� ������.[�������̵�]
		cout << this->name << "�л��� " << this->score << "�� �Դϴ�." << endl;
	}
};
// �����ε� vs �������̵�
// ��Ӱ��� xx vs ���
// �Լ����ڿ� ���̰� ����(����, Ÿ��) vs �Լ� ���ڿ� ���� x
void main() {

	//[���]
	// ���߽ð� ,��� ����
	// �˻�������
	// ������ �ı�ȿ�� �پ��
	// �ڵ��� ���뼺 ����

	// �� �Ϲ����� ������ ���� ������ Ŭ����
	// : �θ� Ŭ����, ���̽� Ŭ���� , ���� Ŭ����

	// ����� �޴� Ŭ����
	// : �ڽ� Ŭ����, �Ļ� Ŭ����, ���� Ŭ����

	A a;
	B b;
	b.f4();
	Person p=Person("ȫ�浿");
	p.hello();
	p.show();
	//Student s;
	// 1.Student() �⺻�����ڸ� ȣ��
	// 2.Student() �⺻�����ڴ� �ڽ�Ŭ������ ������-> �θ�Ŭ������ �⺻�����ڸ� ���� ȣ��
	Student s=Student("�ƹ���",80);
	s.hello();
	s.show();
	
	
	
}