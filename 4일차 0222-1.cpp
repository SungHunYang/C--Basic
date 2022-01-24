#include<iostream>
using namespace std;
// 클래스 -> 멤버로 함수를 가질수 있게됨
// 클래스 : 객체 지향 코딩의 단위
// 폐쇄성 -> 감춰진 멤버변수들에 접근할수있는 메서드(함수)를 작성하게 되고, 이는 "캡슐화"를 구현
class Car {
	string name;
	int speed;
public: // 접근자
	void setCar() {
		cout << "이름 입력 : " << endl;
		cin >> this->name;
		this->speed = 0;
	}
	void show() {
		cout << this->name << "님 자동차 속력 : " << this->speed << endl;
	}
	void speedUp(int speed);
	void speedDown(int speed);
	void speedDown();
	void speedUp();
	int b;
	int c;
};
void Car::speedUp(int speed) {
	// this포인터 == 자기자신을 가리키기 위한 포인터
	// 포인터는 멤버접근연산자와 함께 사용하기 까다로움 (*this).speed += speed;
	// ->멤버접근연산자. 주체가 포인터일때 사용 this->speed += speed;
	this->speed += speed;

}
void Car::speedDown(int speed) {
	this->speed -= speed;

}
void Car::speedDown() {
	this->speed -= 10;
}
void speedUp() {
	this->speed += 10;
}
void main() {
	Car c1;
	c1.setCar();
	c1.show();
	c1.speedUp(120);
	c1.speedDown(20);
	c1.show();
	
}