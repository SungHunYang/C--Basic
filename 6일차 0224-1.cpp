#include<iostream>
using namespace std;
void main() {
	int N;
	int sum = int();
	int cnt = int();
	double avg = double();
	cout << "배열 개수 : ";
	cin >> N;
	int* ip = new int[N];

	for (int i = 0; i < N; i++) {
		cout << "정수 입력 : ";
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

	cout << "총합 : " << sum << " 홀수의 개수 : " << cnt << " 평균 : " << avg << endl;

}