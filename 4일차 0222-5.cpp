#include<iostream>
using namespace std;
void func(int num1=40, int num2=30) {
	//�ڿ� ���ں��� ������Ѿ��� 
	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;
}
void func(int num1) {
	cout << "Ȯ�� !" << endl; 
}
void main() {
	// [����Ʈ �μ�]

	func(10,20);
	// func(22); // �����ε� ������ ��ȣ���� ������ ����� �ִ�
	func();
}