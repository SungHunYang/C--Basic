#include<iostream>
// 이번 예제 시간나면 다시 만들어볼것
using namespace std;
class Pocket { // 추상클래스
protected:
    string name;
    int level;
    string type;
public:
    virtual void speak() = 0;
    virtual void levelUp() = 0;
    void show() {
        cout << this->name << " 타입[" << this->type << "] Lv." << this->level << endl;
    }
};
class Elec :public Pocket { // 추상클래스
public:
    Elec() {
        this->type = "전기";
    }
    void levelUp() {
        cout << "백만볼트!!!" << endl;
        int r = rand() % 2; // 0 or 1
        if (r == 1) {
            this->level++;
            cout << this->name << ", 레벨업!" << endl;
        }
    }
};
class Water :public Pocket {
public:
    Water() {
        this->type = "물";
    }
    void levelUp() {
        cout << "물대포~~~~~" << endl;
        int r = rand() % 2; // 0 or 1
        if (r == 1) {
            this->level++;
            cout << this->name << ", 레벨업!" << endl;
        }
    }
};
class Pika :public Elec {
public:
    Pika(int level = 5) {
        this->name = "피카츄";
        this->level = level;
    }
    void speak() {
        cout << "피카피카!" << endl;
    }
};
class Ggobuk : public Water {
public:
    Ggobuk(int level = 5) {
        this->name = "꼬부기";
        this->level = level;
    }
    void speak() {
        cout << "꼬북꼬북!" << endl;
    }
};
class Gora : public Water {
public:
    Gora(int level = 5) {
        this->name = "고라파덕";
        this->level = level;
    }
    void speak() {
        cout << "파~덕~~" << endl;
    }
};
void main() {

    Pocket** book = new Pocket * [3];

    book[0] = new Pika();
    book[1] = new Ggobuk(7);
    book[2] = new Gora();


    // 1. 생성자
    // 2. speak()
    // 3. levelUp()

    for (int i = 0; i < 3; i++) {
        book[i]->speak();
        book[i]->levelUp();
        cout << endl;
        book[i]->show();
    }

}