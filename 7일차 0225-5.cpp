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
	ColorPoint(string color = "����", int x = 0, int y = 0) :Point(x, y) {
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
	cout << "���ϴ� �迭 ���� �Է� : ";
	cin >> N;
	ColorPoint** p = new ColorPoint*[N];
	for (int i = 0; i < N; i++) {
		cout << "�� �Է�: ";
		cin >> color;
		cout << "x ��ǥ �Է� : ";
		cin >> x;
		cout << "y ��ǥ �Է� : ";
		cin >> y;
		p[i] = new ColorPoint(color,x,y);
	}
	for (int i = 0; i < N; i++) {
		p[i]->show();
	}
	int index;
	int a;
	cout << "��� ��? : ";
	cin >> index;
	cout << "�󸶳�? : ";
	cin >> a;
	p[index - 1]->move(a);
	p[index - 1]->show();


}