#include<iostream>
using namespace std;
void main() {

	int* i = new int(10); 
	// 얘는 값을 i 에 집어 넣는거고 
	int** arr = new int*[3];  //그때 그때 값을 집어넣는법
	// 얘는 주소를 arr안에 넣고

	// 이번에는 int 라는 공간에도 값이 있는 곳의 주소를 넣는거다
	// 그 주소가 있는 int 공간을 저장하는게 arr

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
			cout << "정수 입력 : ";
			cin >> N;
		} while (N % 2 == 0);
		arr2[i] = new int(N);
	}
	for (int i = 0; i < 3; i++) {
		cout << *arr2[i] << endl;
	}


	
}