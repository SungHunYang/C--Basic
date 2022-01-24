#include<iostream>
using namespace std;
class Shape {
public:
    virtual void getArea() = 0; // ���������Լ�
    // 1) ����� ���������Լ��� ������ Ŭ����==�߻�Ŭ����
    //    : ��ü�� ����xxx
    // 2) �߻�Ŭ������ ��ӹ޴� �ڽ�Ŭ�������� �ݵ�� ������(==�������̵�)�ؾ߸���
    /*
    1) ����Ŭ������ ��ü�� ��������°�? xxx
    2) ����Ŭ������ ����Ŭ������ ����Լ��� �����ؾ��ϴ°�? o
    */
    virtual void draw() = 0;
};
class Circle :public Shape {
    int radius;
    double PI;
public:
    Circle(int radius) {
        this->radius = radius;
        this->PI = 3.141592;
    }
    void draw() {
        cout << "�� �׸���" << endl;
    }
    void getArea() {
        double area = this->radius * this->radius * this->PI;
        cout << "�� ����: " << area << endl;
    }
};
class Rect :public Shape {
    int x;
    int y;
public:
    Rect(int x, int y) {
        this->x = x;
        this->y = y;
    }
    Rect(int x) {
        this->x = x;
        this->y = x;
    }
    void draw() {
        cout << "�簢�� �׸���" << endl;
    }
    void getArea() {
        int area = this->x * this->y;
        cout << "�簢�� ����: " << area << endl;
    }
};
class Tri :public Shape {
public:
    void draw() {
        cout << "�ﰢ�� �׸���" << endl;
    }
};

class Person {
public:
    void action(Shape* s) {
        cout << "�׸��� �׸��ϴ�... ";
        s->getArea();
    }
};
void main() {

    Shape** data = new Shape * [3];
    data[0] = new Circle(10);
    data[1] = new Rect(5);
    // data[2] = new Shape(); xxx

    Person p;
    for (int i = 0; i < 2; i++) {
        p.action(data[i]);
    }

}