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
	ColorPoint(string color = "검정", int x = 0, int y = 0) :Point(x, y) {
		this->color = color;
	}
	void show() {
		cout << this->color << "(" << this->x << "," << this->y << ")" << endl;
	}
};
void main() {
	int N;
	string color;
	int x;
	int y;
	cout << "원하는 배열 개수 입력 : ";
	cin >> N;
	ColorPoint** p = new ColorPoint*[N];
	for (int i = 0; i < N; i++) {
		cout << "색 입력: ";
		cin >> color;
		cout << "x 좌표 입력 : ";
		cin >> x;
		cout << "y 좌표 입력 : ";
		cin >> y;
		p[i] = new ColorPoint(color,x,y);
	}
	for (int i = 0; i < N; i++) {
		p[i]->show();
	}
	int index;
	int a;
	cout << "몇번 점? : ";
	cin >> index;
	cout << "얼마나? : ";
	cin >> a;
	p[index - 1]->move(a);
	p[index - 1]->show();


}