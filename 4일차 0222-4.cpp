#include<iostream>
using namespace std;
class Point {
	string color;
	int x;
	int y;
public:
	// ��������� �����Ҽ� �ֵ��� �ϴ� �޼��尡 �ʿ� --> getter,setter ��� ��
	int getX() {
		return this->x;
	}
	int getY() {
		return this->y;
	}
	void setPoint(string color) {
		this->setPoint(0, 0, color);
	}
	void setPoint(int x, int y) {
		this->setPoint(x, y, "����");
	}
	void setPoint(int x, int y,string color) {
		this->x = x;
		this->y = y;
		this->color = color;
	}
	void setPoint() {
		this->setPoint(0, 0, "����");
	}
	void show() {
		cout << this->color << "(" << this->x << "," << this->y << ")" << endl;

	}
	int dimention() {
		if (this->x < 0 && this->y < 0) {
			return 3;
		}
		else if (this->x > 0 && this->y > 0) {
			return 1;
		}
		else if (this->x < 0 && this->y > 0) {
			return 2;
		}
		else if (this->x > 0 && this->y < 0) {
			return 4;
		}
	}
};
void main() {

	Point p1, p2, p3, p4;
	p1.setPoint(); // ����(0,0) 
	p2.setPoint("����");
	p3.setPoint(10, 20);
	p4.setPoint(12, -12, "�Ķ�");
	p1.show();
	p2.show();
	p3.show();
	p4.show();

	cout << endl;
	p3.show();
	p4.show();
	int x = (p3.getX() + p4.getX()) / 2;
	int y = (p3.getY() + p4.getY()) / 2;
	cout << "p3���� p4�� ������ ��ǥ�� (" << x << "," << y << ") �Դϴ�." << endl;

	cout << "p3���� [" << p3.dimention() << "]��и鿡 �ִ�." << endl;
	cout << "p4���� [" << p4.dimention() << "]��и鿡 �ִ�." << endl;

}