// 오버라이딩 -> 동적바인딩, 가상함수
#include<iostream>
using namespace std;
class A {
protected:
    int a;
public:
    A() {
        this->a = 10;
    }
    void f1() {
        cout << this->a << endl;
    }
    virtual void f2() { // 가상함수 -> 동적바인딩 가능하게함 => 다형성 실현,구현
        cout << "함수호출됨" << endl;
    }
};
class B :public A {
public:
    B() {
        this->a = 20;
    }
    void f2() {
        cout << "함수재정의.오버라이딩-1" << endl;
    }
};
class C :public A {
public:
    C() {
        this->a = 30;
    }
    void f2() {
        cout << "함수재정의.오버라이딩-2" << endl;
    }
};
void main() {

    int N = 3;

    A** data = new A * [N];
    data[0] = new A();
    data[1] = new B();
    data[2] = new C();

    for (int i = 0; i < 3; i++) {
        data[i]->f1();
        data[i]->f2();
    }

}