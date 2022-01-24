#include<iostream>
using namespace std;
#include<string>
#define MAX 10 // 사용자 정의 상수, 기호 상수
void showArr(const int* arr, int len) {
	// arr[0] = -100;
	cout << "[";
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	cout << "]" << endl;

}
void main() {

	//const의 사용과 call by reference(참조에 의한 호출)
	
	const int i = 10; // 상수화, 심볼릭 상수
	int num1 = 10;
	int num2 = 20;
	
	int* ip1 = &num1;
	*ip1 = 100;
	//num1 = 100;
	//cout << ip1 << " " << &num1 << endl;
	cout << *ip1 << " " << num1 << endl;

	const int* ip2=&num1;
	// 대상이 되는 타입을 const 시키는거 즉 num1이 const된다.
	ip2 = &num2;
	cout << *ip2<< endl;
	// *ip2 = 200; --> 저장하고있는 num1을 바꿀수가 없더라
	// 포인터가 바로보는 공간의 값(vaule)을 변경 xx
	cout << endl;
	cout << endl;

	int arr[] = { 12,11,90,17,56 };
	showArr(arr, 5);
	char str[] = "apple"; // 얘는 a p p l e 하나하나 따로 저장
	const char* cp = "apple"; // 이렇게 저장되면 변경되면 안돼기 때문에 const 필요
							  // 얘는 apple 이라는 것이 저장된  공간의 주소를 기억하겠다
	cp = "banana"; // 이건 banana의 주소를 가져온다는 뜻 만일 *cp이면 apple 이 banana가 되니까 불가능







	
	



}