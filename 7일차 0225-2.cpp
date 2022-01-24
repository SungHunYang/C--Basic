#include<iostream>
using namespace std;
class A {
protected:
	int a;
public:
	A() {
		cout << "얘는 나오나요?" << endl;
	}
	A(int a) {
		this->a = a;
		cout << "A클래스 기본생성자 " << endl;
	}
};
class B :public A {
public:
	B() : A(a) {
		// 자식클래스의 생성자에서는
		// ★★★가장먼저 부모클래스의 기본생성자를 호출★★★

		//=> 부모의 다른생성자를 이용해 볼수는 없을까?
		// ---> B():A(a) 이렇게
		cout << "B클래스 기본생성자 " << endl;
	}
};
class C {
protected:
	int a;
public:
	C(int a) {
		this->a = a;
	}
};
class D : public C {
	int b;
public:
	D(int a, int b) : C(a) { // 더이상 부모클래스의 기본생성자를 호출 xx
		//대신, 작성한 생성자를 호출함
		this->b = b;

	}
	void show() {
		cout << this->a << " " << this->b << endl;
	}
};
void main() {
	A a = A(15);

	cout << endl;
	B b = B();

	D d = D(10, 20);

}