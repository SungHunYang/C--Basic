#include<iostream>
using namespace std;
class Shape {
public:
    virtual void getArea() = 0; // 순수가상함수
    // 1) 멤버로 순수가상함수를 가지는 클래스==추상클래스
    //    : 객체를 생성xxx
    // 2) 추상클래스를 상속받는 자식클래스에서 반드시 재정의(==오버라이딩)해야만함
    /*
    1) 상위클래스의 객체가 만들어지는가? xxx
    2) 상위클래스가 하위클래스의 멤버함수를 강제해야하는가? o
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
        cout << "원 그리기" << endl;
    }
    void getArea() {
        double area = this->radius * this->radius * this->PI;
        cout << "원 넓이: " << area << endl;
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
        cout << "사각형 그리기" << endl;
    }
    void getArea() {
        int area = this->x * this->y;
        cout << "사각형 넓이: " << area << endl;
    }
};
class Tri :public Shape {
public:
    void draw() {
        cout << "삼각형 그리기" << endl;
    }
};

class Person {
public:
    void action(Shape* s) {
        cout << "그림을 그립니다... ";
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