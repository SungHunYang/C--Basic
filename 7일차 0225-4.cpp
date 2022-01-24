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
			cout << "잔액부족으로 결제 실패!" << endl;
			return;
		}
		if (money >= 10000) {
			if (this->check()) {
				cout << "결제 실패!" << endl;
				return;
			}
			this->bal -= money;
			cout << "결제 성공!" << endl;
		}
	}
	void show() {
		cout << this->user << "님의 잔액은 " << this->bal << "원 입니다." << endl;
	}
	bool check() {
		int passwd;
		cout << this->user << "님, 비밀번호 입력 : ";
		cin >> passwd;
		if (this->passwd == passwd) {
			cout << "비밀번호 입력 [성공] " << endl;
			return false;
		}
		cout << "비밀번호 입력 [실패]" << endl;
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
			cout << "잔액부족으로 결제 실패!" << endl;
			return;
		}
		if (money >= this->maxbal) {
			if (this->check()) {
				cout << "결제 실패!" << endl;
				return;
			}
			this->bal -= money;
			cout << "결제 성공!" << endl;
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
			cout << "잔액부족으로 결제 실패!" << endl;
			return;
		}
			this->bal -= this->price;
			cout << "결제 성공![탑승]" << endl;
		}
	void show() {
		cout << this->user << "님의 나이 :" <<this->age<<" 잔액은 " << this->bal << "원 입니다." << endl;
	}
};
void main() {
	checkCard c1 = checkCard("홍길동", 1234, 30000, 5000);
	c1.pay(10000);
	c1.show();
	busCard b1= busCard("홍길동", 1234, 30000, 24);
	b1.pay();
	b1.show();
}