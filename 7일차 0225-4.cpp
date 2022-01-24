#include<iostream>
using namespace std;
class Card {
protected:
	string user;
	int passwd;
	int bal;
public:
	Card(string user,int passwd=1111, int bal=0) {
		this->user = user;
		this->passwd = passwd;
		this->bal = bal;
	}
	void pay(int money) {
		if (this->bal < money) {
			cout << "�ܾ׺������� ���� ����!" << endl;
			return;
		}
		if (money >= 10000) {
			if (this->check()) {
				cout << "���� ����!" << endl;
				return;
			}
			this->bal -= money;
			cout << "���� ����!" << endl;
		}
	}
	void show() {
		cout << this->user << "���� �ܾ��� " << this->bal << "�� �Դϴ�." << endl;
	}
	bool check() {
		int passwd;
		cout << this->user << "��, ��й�ȣ �Է� : ";
		cin >> passwd;
		if (this->passwd == passwd) {
			cout << "��й�ȣ �Է� [����] " << endl;
			return false;
		}
		cout << "��й�ȣ �Է� [����]" << endl;
		return true;
	}
};
class checkCard : public Card{
public:
	int maxbal;
	checkCard(string user, int passwd = 1111, int bal = 0, int maxbal = 10000) :Card(user,passwd,bal) {
		//Card(user, passwd, bal);
		this->maxbal = maxbal;
	}
	void pay(int money) {
		if (this->bal < money) {
			cout << "�ܾ׺������� ���� ����!" << endl;
			return;
		}
		if (money >= this->maxbal) {
			if (this->check()) {
				cout << "���� ����!" << endl;
				return;
			}
			this->bal -= money;
			cout << "���� ����!" << endl;
		}
	}

};
class busCard : public Card {
public:
	int age;
	int price;
	busCard(string user, int passwd = 1111, int bal = 0, int age=20): Card(user, passwd, bal) {
		this->age = age;
		if (9 <= this->age && this->age <= 19) {
			this->price = 800;
		}
		else if (20 <= this->age && this->age <= 64) {
			this->price = 1300;
		}
		else {
			this->price = 0;
		}
	}
	void pay() {
		if (this->bal < this->price) {
			cout << "�ܾ׺������� ���� ����!" << endl;
			return;
		}
			this->bal -= this->price;
			cout << "���� ����![ž��]" << endl;
		}
	void show() {
		cout << this->user << "���� ���� :" <<this->age<<" �ܾ��� " << this->bal << "�� �Դϴ�." << endl;
	}
};
void main() {
	checkCard c1 = checkCard("ȫ�浿", 1234, 30000, 5000);
	c1.pay(10000);
	c1.show();
	busCard b1= busCard("ȫ�浿", 1234, 30000, 24);
	b1.pay();
	b1.show();
}