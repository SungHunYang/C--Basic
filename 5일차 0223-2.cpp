#include<iostream>
using namespace std;
class C {
	int a;
	int b;
public:
	C() { // ������ -> ����Ʈ������, �⺻ ������
		cout << "������ ȣ���" << endl;
		this->a = 10;  // setxx()�� �����ߴ� ������ ó��, �ʱ�ȭ
		this->b = 20;
	}
	C(int num) { //������ �����ε�
		this->a = num;
		this->b = num;
	}
	void show() {
		cout << this->a << " " << this->b << endl;
	}
	~C() { //�Ҹ���
		cout << "�Ҹ��� ȣ���!" << endl;
	}
};
void main() {
	C c1; // Ŭ�������� ��ü�� �����Ҷ�, �⺻�����ڰ� �ڵ�ȣ��!
	C c2 = C(); // ���������� �̷��� �̷����� �ִ°Ŵ� ����Ʈ��
	C c3(10);
	C c4 = C(11);
	c1.show();
	c3.show();
	c4.show();


	//������ : Ŭ������ �̸��� ������ �Լ� . ����Ÿ�� ��� xx
	//�ڱ��ڽŰ�ü�� ���鶧�� ���Ǵ� �Լ�
	//setPoint(),setStudent() -> �ڱ� �ڽŰ�ü�� �ʱ�ȭ
}