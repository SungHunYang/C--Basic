#include<iostream>
using namespace std;
void main() {

	int* i = new int(10); 
	// ��� ���� i �� ���� �ִ°Ű� 
	int** arr = new int*[3];  //�׶� �׶� ���� ����ִ¹�
	// ��� �ּҸ� arr�ȿ� �ְ�

	// �̹����� int ��� �������� ���� �ִ� ���� �ּҸ� �ִ°Ŵ�
	// �� �ּҰ� �ִ� int ������ �����ϴ°� arr

	for (int i = 0; i < 3; i++) {
		arr[i] = new int(i + 1);
	}
	for (int i = 0; i < 3; i++) {
		cout << *arr[i] << endl; 
	}

	int** arr2 = new int* [3];
	int N;
	for (int i = 0; i < 3; i++) {
		do{
			cout << "���� �Է� : ";
			cin >> N;
		} while (N % 2 == 0);
		arr2[i] = new int(N);
	}
	for (int i = 0; i < 3; i++) {
		cout << *arr2[i] << endl;
	}


	
}