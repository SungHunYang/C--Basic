#include<stdio.h>
struct A {
	int a;
	inline void f() {
		a += 100;
		printf("����ü�� ����Լ� f() ȣ���\n a: %d", a);
	}
};
void main() {
	struct A aaa;
	struct A bbb;
	aaa.a = 123; 
	bbb.a = 123;
	aaa.f(); // �Լ����� �־�(��ü)�� ���� 
	printf("main()���� ��� : a=%d\n", aaa.a);
	printf("main() b���� ��� : a=%d\n", bbb.a);
}