#include<iostream>
// �̹� ���� �ð����� �ٽ� ������
using namespace std;
class Pocket { // �߻�Ŭ����
protected:
    string name;
    int level;
    string type;
public:
    virtual void speak() = 0;
    virtual void levelUp() = 0;
    void show() {
        cout << this->name << " Ÿ��[" << this->type << "] Lv." << this->level << endl;
    }
};
class Elec :public Pocket { // �߻�Ŭ����
public:
    Elec() {
        this->type = "����";
    }
    void levelUp() {
        cout << "�鸸��Ʈ!!!" << endl;
        int r = rand() % 2; // 0 or 1
        if (r == 1) {
            this->level++;
            cout << this->name << ", ������!" << endl;
        }
    }
};
class Water :public Pocket {
public:
    Water() {
        this->type = "��";
    }
    void levelUp() {
        cout << "������~~~~~" << endl;
        int r = rand() % 2; // 0 or 1
        if (r == 1) {
            this->level++;
            cout << this->name << ", ������!" << endl;
        }
    }
};
class Pika :public Elec {
public:
    Pika(int level = 5) {
        this->name = "��ī��";
        this->level = level;
    }
    void speak() {
        cout << "��ī��ī!" << endl;
    }
};
class Ggobuk : public Water {
public:
    Ggobuk(int level = 5) {
        this->name = "���α�";
        this->level = level;
    }
    void speak() {
        cout << "���ϲ���!" << endl;
    }
};
class Gora : public Water {
public:
    Gora(int level = 5) {
        this->name = "����Ĵ�";
        this->level = level;
    }
    void speak() {
        cout << "��~��~~" << endl;
    }
};
void main() {

    Pocket** book = new Pocket * [3];

    book[0] = new Pika();
    book[1] = new Ggobuk(7);
    book[2] = new Gora();


    // 1. ������
    // 2. speak()
    // 3. levelUp()

    for (int i = 0; i < 3; i++) {
        book[i]->speak();
        book[i]->levelUp();
        cout << endl;
        book[i]->show();
    }

}