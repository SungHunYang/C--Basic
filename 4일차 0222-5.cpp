#include<iostream>
using namespace std;
void func(int num1=40, int num2=30) {
	//뒤에 인자부터 적용시켜야함 
	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;
}
void func(int num1) {
	cout << "확인 !" << endl; 
}
void main() {
	// [디폴트 인수]

	func(10,20);
	// func(22); // 오버로딩 때문에 모호성의 문제가 생길수 있다
	func();
}