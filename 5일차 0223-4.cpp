#include<iostream>
using namespace std;
class Point {
	int x;
	int y;
	string color;
public:
	Point() {
		cout << "�⺻������ ȣ��� : " << this << endl;
	}
	Point(int x,int y,string color="����") {
		cout << "������ ȣ��� : " << this << endl;
		this->x = x;
		this->y = y;
		this->color = color;
	}
	void show() {
		cout << this->color << "(" << this->x << "," << this->y << ")" << endl;
	}
	~Point() {
		cout << "�Ҹ��� ȣ��� : " << this << endl;
	}
};
void main() {
	/*
	Point p1 = Point(10, 20);
	Point p2 = Point(11, 12, "����");
	p1.show(); p2.show();
	*/

	Point p[3]; 
	for (int i = 0; i < 3; i++) {
		p[i] = Point(11,12,"�Ķ�");
	}
	// ��ü �迭�� �����Ҷ�
	// 1) �⺻�����ڸ� �迭�� ��Ұ�����ŭ ȣ�� -> ����Ʈ �����ڰ� �ʿ���
	// 2) ��Ұ�����ŭ ��ü �ʱ�ȭ ����
	for (int i = 0; i < 3; i++) {
		p[i].show();
	}
	//1. 31������ : �⺻������ ȣ���Ͽ� ��ü�� �����Ҽ��ִ� �޸𸮰����� Ȯ��
	//2. 33������ : ���߿� ������ ��ü�� ���� ������ ��ü�� �����ϰ�, ���߿� ������ ��ü�� �Ҹ� 
	// --> ����Ʈ �����ڷ� p[3]�� �����ϰ� for �ȿ� Poiner(11,12,"�Ķ�")���� �����ڸ� 2�� �ҷ��� �׷���
	// --> ���� �Ѱ����� �����ڰ� 2�� ����� ������ ���߿� �����ڰ� ����Ʈ �����ڿ� �����ϰ� �Ҹ�
	//3. ���������� : ���α׷��� ����Ǹ�, ��������� ��ü �������� �Ҹ��� ȣ���
}