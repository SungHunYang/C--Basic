#include<iostream>
using namespace std;
class Point {
	int x;
	int y;
	string color;
public:
	Point() {
		cout << "기본생성자 호출됨 : " << this << endl;
	}
	Point(int x,int y,string color="검정") {
		cout << "생성자 호출됨 : " << this << endl;
		this->x = x;
		this->y = y;
		this->color = color;
	}
	void show() {
		cout << this->color << "(" << this->x << "," << this->y << ")" << endl;
	}
	~Point() {
		cout << "소멸자 호출됨 : " << this << endl;
	}
};
void main() {
	/*
	Point p1 = Point(10, 20);
	Point p2 = Point(11, 12, "빨강");
	p1.show(); p2.show();
	*/

	Point p[3]; 
	for (int i = 0; i < 3; i++) {
		p[i] = Point(11,12,"파랑");
	}
	// 객체 배열을 생성할때
	// 1) 기본생성자를 배열의 요소개수만큼 호출 -> 디폴트 생성자가 필요함
	// 2) 요소개수만큼 객체 초기화 진행
	for (int i = 0; i < 3; i++) {
		p[i].show();
	}
	//1. 31번라인 : 기본생성자 호출하여 객체를 저장할수있는 메모리공간을 확보
	//2. 33번라인 : 나중에 생성된 객체의 값을 기존의 객체에 복사하고, 나중에 생성된 객체를 소멸 
	// --> 디폴트 생성자로 p[3]를 선언하고 for 안에 Poiner(11,12,"파랑")으로 생성자를 2번 불러서 그렇다
	// --> 따라서 한공간에 생성자가 2개 생기기 때문에 나중에 생성자가 디폴트 생성자에 복사하고 소멸
	//3. 마지막라인 : 프로그램이 종료되면, 만들어졌던 객체 역순으로 소멸자 호출됨
}