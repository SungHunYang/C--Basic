#include<iostream>
using namespace std;
void main() {
	int N;
	int sum = int();
	int cnt = int();
	double avg = double();
	cout << "�迭 ���� : ";
	cin >> N;
	int* ip = new int[N];

	for (int i = 0; i < N; i++) {
		cout << "���� �Է� : ";
		cin >> ip[i];
		sum += ip[i];
	}
	for (int i = 0; i < N; i++) {
		if (ip[i] % 2 == 0) {
			continue;
		}
		cnt++;
	}
	avg = sum * 1.0 / N;

	cout << "���� : " << sum << " Ȧ���� ���� : " << cnt << " ��� : " << avg << endl;

}