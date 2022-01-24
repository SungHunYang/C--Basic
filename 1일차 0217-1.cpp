#include<stdio.h>
void swap(int *a, int *b) { // 포인터 : 주소를 받는 자료형(data type)
	int tmp = *a; // *는 OO가 가리키는 '주소의 값'
	*a = *b;
	*b = tmp;
}
void main() {
	//call by value(값에 의한 호출) -> 포인터에 의한 호출
	int a = 10, b = 20;
	printf("교환전 : a=%d b=%d \n", a, b);
	swap(&a, &b);
	printf("교환후 : a=%d b=%d \n", a, b);

	//포인터를 사용하는 이유 -1
	// main()의 실제 메모리공간에 외부함수에서 접근하기위해
}