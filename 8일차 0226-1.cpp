// �������̵� -> �������ε�, �����Լ�
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
    virtual void f2() { // �����Լ� -> �������ε� �����ϰ��� => ������ ����,����
        cout << "�Լ�ȣ���" << endl;
    }
};
class B :public A {
public:
    B() {
        this->a = 20;
    }
    void f2() {
        cout << "�Լ�������.�������̵�-1" << endl;
    }
};
class C :public A {
public:
    C() {
        this->a = 30;
    }
    void f2() {
        cout << "�Լ�������.�������̵�-2" << endl;
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