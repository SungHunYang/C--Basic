#include<iostream>
using namespace std;
void func(int v,int* p,int& ref) {
	//	(값에의한, 주소(포인터), 레퍼런스) 에 의한 호출
	v += 10;
	*p += 20; //main()에서는 얘랑
	ref += 30; // 얘만 적용됨
}	
void main() {
	/*
	int num1 = 10;
	int num2 = 20;
	int* const ip = &num1; // 이번에는 const를 뒤쪽에 배치
	// 이렇게 하면 포인터 그 자체가 const 즉 주소 못바꾼다 이거지
	*ip = 100; // 뒤에 const 하면 이게 가능
	// 대신 주소 바뀌는 ip=&num2는 안됨 포인터 안의 주소값변경이 불가능
	// 포인터의 위치변경을 방지
	cout << *ip << " " << num1 << endl;

	//const는 값변경에 대한 실수를 예방
	*/
	int num1 = 10;
	int num2 = 20;
	
	int& ref = num1; //레퍼런스.직접참조 <-> 포인터(pointer).간접참조
	// 이 레퍼런스는 num1이라 불리는 공간에 ref라는 별명을 주게 된다. 즉 한 공간에 다른 두개의 이름이 생겼다.
	ref = 100;
	func(num1,&num1,num1);
	cout << ref << " " << num1 << endl;
	// 가독성 증가
	// 연산자 사용 용이



}
