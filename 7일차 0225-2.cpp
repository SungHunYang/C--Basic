#include<iostream>
using namespace std;
class A {
protected:
	int a;
public:
	A() {
		cout << "��� ��������?" << endl;
	}
	A(int a) {
		this->a = a;
		cout << "AŬ���� �⺻������ " << endl;
	}
};
class B :public A {
public:
	B() : A(a) {
		// �ڽ�Ŭ������ �����ڿ�����
		// �ڡڡڰ������ �θ�Ŭ������ �⺻�����ڸ� ȣ��ڡڡ�

		//=> �θ��� �ٸ������ڸ� �̿��� ������ ������?
		// ---> B():A(a) �̷���
		cout << "BŬ���� �⺻������ " << endl;
	}
};
class C {
protected:
	int a;
public:
	C(int a) {
		this->a = a;
	}
};
class D : public C {
	int b;
public:
	D(int a, int b) : C(a) { // ���̻� �θ�Ŭ������ �⺻�����ڸ� ȣ�� xx
		//���, �ۼ��� �����ڸ� ȣ����
		this->b = b;

	}
	void show() {
		cout << this->a << " " << this->b << endl;
	}
};
void main() {
	A a = A(15);

	cout << endl;
	B b = B();

	D d = D(10, 20);

}