#include<iostream>
using namespace std;
void main() {

	// 학생 1: _ _ _
	// 학생 2: _ _ _
	// 학생 3: _ _ _

	//int test = 3;
	//int* stu1 = new int[test];
	int su = 4;
	int**stu= new int* [su];
	for (int i = 0; i < su; i++) {
		cout << i + 1 << "번 학생의 정보입력중..." << endl;
		stu[i] = new int[3];
		for (int j = 0; j < 3; j++) {
			cout << j + 1 << "번째 시험성적입력: ";
			cin >> stu[i][j];
		}
		cout << endl;
	}
	for (int i = 0; i < su; i++) {
		cout << i + 1 << "번학생 성적 : ";
		for (int j = 0; j < 3; j++) {
			cout << stu[i][j] << "점 ";
		}
		cout << endl;
	}



}