#include<iostream>
using namespace std;
void showNums(int a=10, int b=1) {
	if (a > b) {
		int tmp = a;
		a = b;
		b = tmp;
	}
	for (int i = a; i <= b; i++) {
		cout << i << " ";
	}
	cout << endl;
}
void main() {
	showNums();
	showNums(4);
	showNums(2, 8);
}