#pragma once
#include<iostream>
using namespace std;
typedef struct cafe {
	char name[20];
	int price;
	inline void func1();
	inline void func4();
}c;
inline void cafe::func1() {
	cout << "�޴� �̸� �Է� : ";
	cin >> name;
	cout << "�޴� ���� �Է� : ";
	cin >> price;
	cout << "�޴� �߰� �Ϸ�" << endl;


}
inline void cafe::func4() {
	cout << name << " " << price << "��" << endl;
}
void func3(int a, c* data) {
	(*data).price = a;
	cout << (*data).name << "�� ���� ���� �Ϸ�" << endl;
}
void func3_2(int a, c& data) {  // ������ ���� ȣ��
	data.price = a;
	cout << data.name << " �� ���� ���� �Ϸ�" << endl;
}
void func2(c& data) {
	cout << "������ �޴� �̸��� �Է� : ";
	cin >> data.name;
	cout << data.name << " (��)�� ���� �Ϸ�" << endl;
}