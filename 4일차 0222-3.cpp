#include<iostream>
using namespace std;
int add(int a, int b) {
	cout << "확인1" << endl;
	return a + b;
}
int add(int a, int b, int c) {
	cout << "확인2" << endl;
	return a + b + c;
}
double add(double a, double b, double c) {
	cout << "확인3" << endl;
	return a + b + c;
}
void main() {
	//[오버로딩]
	// : 새로 만들어진 함수의 이름이 기존의 정의된 함수와 같아도 오류 발생xx
	// : 기능이 같을때 허용 + 인자의 개수 or 타입(자료형)이 달라야함
	// : 함수호출에 있어, 모호성이 발생하지 않도록 유의!




}