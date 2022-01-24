#include<iostream>
using namespace std;
class Point {
	string color;
	int x;
	int y;
public:
	// 멤버변수에 접근할수 있도록 하는 메서드가 필요 --> getter,setter 라고 함
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
		this->setPoint(x, y, "검정");
	}
	void setPoint(int x, int y,string color) {
		this->x = x;
		this->y = y;
		this->color = color;
	}
	void setPoint() {
		this->setPoint(0, 0, "검정");
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
	p1.setPoint(); // 검정(0,0) 
	p2.setPoint("빨강");
	p3.setPoint(10, 20);
	p4.setPoint(12, -12, "파랑");
	p1.show();
	p2.show();
	p3.show();
	p4.show();

	cout << endl;
	p3.show();
	p4.show();
	int x = (p3.getX() + p4.getX()) / 2;
	int y = (p3.getY() + p4.getY()) / 2;
	cout << "p3점과 p4점 사이의 좌표는 (" << x << "," << y << ") 입니다." << endl;

	cout << "p3점은 [" << p3.dimention() << "]사분면에 있다." << endl;
	cout << "p4점은 [" << p4.dimention() << "]사분면에 있다." << endl;

}