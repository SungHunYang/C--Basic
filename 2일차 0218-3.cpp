#include<stdio.h>
struct A {
	int a;
	inline void f() {
		a += 100;
		printf("구조체의 멤버함수 f() 호출됨\n a: %d", a);
	}
};
void main() {
	struct A aaa;
	struct A bbb;
	aaa.a = 123; 
	bbb.a = 123;
	aaa.f(); // 함수에게 주어(주체)가 생김 
	printf("main()에서 출력 : a=%d\n", aaa.a);
	printf("main() b에서 출력 : a=%d\n", bbb.a);
}