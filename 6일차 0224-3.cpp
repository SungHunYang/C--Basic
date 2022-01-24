#include<iostream>
#include<time.h>
using namespace std;
class Person {
	string name;
	int id;
	int point;
	int coupon;
public:
	Person() {

	}
	Person(string name) {
		this->name = name;
		this->point = 0;
		this->coupon = 0;
		this->id = rand() % 1000 + 1;
	}
	Person(string name, int id) {
		this->name = name;
		this->point = 0;
		this->coupon = 0;
		this->id = id;
	}
	void pay(int price) {
		if (coupon >= 1) {
			char a;
			cout << "[쿠폰]이 " << this->coupon << "장 있습니다 [쿠폰]결제 하시겠습니까? Y/N ";
			cin >> a;
			if(a=='Y' || a=='y'){
				cout << "[쿠폰]결제 완료!" << endl;
				coupon--;
				return;
			}
		}
		this->point += price/10;
		cout << "[현금]결제 완료!" << endl;
		
		while(this->point >= 2000) {
			this->point -= 2000;
			this->coupon++;
			cout << "[쿠폰] 1장 지급 완료!" << endl;
		}
	}
	void show() {
		cout << this->name << "님 의 ID= " << this->id << endl;
	}
	void show2() {
		cout << this->name << "님 의 쿠폰 : " << this->coupon << " 포인트 : " << this->point << endl;
	}
	int getId() {
		return this->id;
	}
};
void main() {

	srand(time(NULL));
	int N;
	string name;
	cout << "몇명의 회원이 존재합니까? :";
	cin >> N;
	Person** arr = new Person*[N];
	for (int i = 0; i < N; i++) {
		cout << "회원 등록 -> 이름 입력 : ";
		cin >> name;
		arr[i] = new Person(name);
	}
	for (int i = 0; i < N; i++) {
		arr[i]->show();
	}
	cout << endl;
	int price;
	int id;
	do{
		bool check = true;

		cout << "결제 금액 입력 : ";
		cin >> price;

		cout << "ID 입력 : ";
		cin >> id;

		for (int i = 0; i < N; i++) {
			if (arr[i]->getId() == id) {
				arr[i]->pay(price);
				arr[i]->show2();
				check = false;
				break;
			}
		}
		if(check) {
		cout << "ID가 없습니다! " << endl;
		cout << "ID를 등록합니다!  " << endl;
		cout << "회원 등록 -> 이름 입력 : " << endl;
		cin >> name;
		arr[N] = new Person(name,id);
		cout << "등록 완료 " << endl;
		arr[N]->show();
		N ++;
		cout << endl;
			}

	} while (price >= 0);


}