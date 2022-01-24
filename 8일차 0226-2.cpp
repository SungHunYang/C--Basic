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
        this->color = "검정";
    }
    void show() {
        cout << this->color << "(" << this->x << "," << this->y << ")" << endl;
    }
};
void main() {

    int n = 3;
    //cout << "요소의 개수입력: ";
    //cin >> n;

    ColorPoint** data = new ColorPoint * [n];
    data[0] = new ColorPoint("빨강", 10, 20);
    data[1] = new ColorPoint("파랑");
    data[2] = new ColorPoint(11, 12);

    int act;
    while (true) {
        cout << "\n1.출력 2.점이동 3.종료" << endl;
        cout << "입력: ";
        cin >> act;
        if (act == 1) {
            cout << "\n===점 목록===" << endl;
            for (int i = 0; i < n; i++) {
                cout << i + 1 << ". ";
                data[i]->show();
            }
        }
        else if (act == 2) {
            int num;
            do {
                cout << "점번호: ";
                cin >> num;
            } while (num < 1 || n < num);
            data[num - 1]->move();
        }
        else {
            break;
        }
    }

}