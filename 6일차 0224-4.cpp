#include<iostream>
using namespace std;
void main() {

	// �л� 1: _ _ _
	// �л� 2: _ _ _
	// �л� 3: _ _ _

	//int test = 3;
	//int* stu1 = new int[test];
	int su = 4;
	int**stu= new int* [su];
	for (int i = 0; i < su; i++) {
		cout << i + 1 << "�� �л��� �����Է���..." << endl;
		stu[i] = new int[3];
		for (int j = 0; j < 3; j++) {
			cout << j + 1 << "��° ���輺���Է�: ";
			cin >> stu[i][j];
		}
		cout << endl;
	}
	for (int i = 0; i < su; i++) {
		cout << i + 1 << "���л� ���� : ";
		for (int j = 0; j < 3; j++) {
			cout << stu[i][j] << "�� ";
		}
		cout << endl;
	}



}