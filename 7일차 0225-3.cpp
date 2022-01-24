#include<iostream>
using namespace std;
class Point {
protected:
	int x;
	int y;
public:
	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}
	void show() {
		cout << "(" << this->x << "," << this->y << ")" << endl;
	}
	void move(int a = 1) {
		this->x += a;
		this->y += a;
	}
};
class ColorPoint : public Point {

public:
	string color;
	ColorPoint(string color="°ËÁ¤", int x=0, int y=0):Point(x,y) {
		this->color = color;
	}
	void show() {
		cout<<this->color << "(" << this->x << "," << this->y << ")" << endl;
	}
};
void main() {

	ColorPoint p1 = ColorPoint("»¡°­");
	ColorPoint p2 = ColorPoint("ÆÄ¶û",10,20);
	p1.show(); p2.show();
	p1.move();
	p1.move(10);
	p1.show();
}