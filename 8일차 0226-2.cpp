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
    void move(int x = 1) {
        this->x += x;
        this->y += x;
    }
};
class ColorPoint :public Point {
    string color;
public:
    ColorPoint(string color, int x = 0, int y = 0) :Point(x, y) {
        this->color = color;
    }
    ColorPoint(int x, int y) :Point(x, y) {
        this->color = "����";
    }
    void show() {
        cout << this->color << "(" << this->x << "," << this->y << ")" << endl;
    }
};
void main() {

    int n = 3;
    //cout << "����� �����Է�: ";
    //cin >> n;

    ColorPoint** data = new ColorPoint * [n];
    data[0] = new ColorPoint("����", 10, 20);
    data[1] = new ColorPoint("�Ķ�");
    data[2] = new ColorPoint(11, 12);

    int act;
    while (true) {
        cout << "\n1.��� 2.���̵� 3.����" << endl;
        cout << "�Է�: ";
        cin >> act;
        if (act == 1) {
            cout << "\n===�� ���===" << endl;
            for (int i = 0; i < n; i++) {
                cout << i + 1 << ". ";
                data[i]->show();
            }
        }
        else if (act == 2) {
            int num;
            do {
                cout << "����ȣ: ";
                cin >> num;
            } while (num < 1 || n < num);
            data[num - 1]->move();
        }
        else {
            break;
        }
    }

}