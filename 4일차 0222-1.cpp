#include<iostream>
using namespace std;
// Ŭ���� -> ����� �Լ��� ������ �ְԵ�
// Ŭ���� : ��ü ���� �ڵ��� ����
// ��⼺ -> ������ ��������鿡 �����Ҽ��ִ� �޼���(�Լ�)�� �ۼ��ϰ� �ǰ�, �̴� "ĸ��ȭ"�� ����
class Car {
	string name;
	int speed;
public: // ������
	void setCar() {
		cout << "�̸� �Է� : " << endl;
		cin >> this->name;
		this->speed = 0;
	}
	void show() {
		cout << this->name << "�� �ڵ��� �ӷ� : " << this->speed << endl;
	}
	void speedUp(int speed);
	void speedDown(int speed);
	void speedDown();
	void speedUp();
	int b;
	int c;
};
void Car::speedUp(int speed) {
	// this������ == �ڱ��ڽ��� ����Ű�� ���� ������
	// �����ʹ� ������ٿ����ڿ� �Բ� ����ϱ� ��ٷο� (*this).speed += speed;
	// ->������ٿ�����. ��ü�� �������϶� ��� this->speed += speed;
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