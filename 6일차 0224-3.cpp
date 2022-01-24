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
			cout << "[����]�� " << this->coupon << "�� �ֽ��ϴ� [����]���� �Ͻðڽ��ϱ�? Y/N ";
			cin >> a;
			if(a=='Y' || a=='y'){
				cout << "[����]���� �Ϸ�!" << endl;
				coupon--;
				return;
			}
		}
		this->point += price/10;
		cout << "[����]���� �Ϸ�!" << endl;
		
		while(this->point >= 2000) {
			this->point -= 2000;
			this->coupon++;
			cout << "[����] 1�� ���� �Ϸ�!" << endl;
		}
	}
	void show() {
		cout << this->name << "�� �� ID= " << this->id << endl;
	}
	void show2() {
		cout << this->name << "�� �� ���� : " << this->coupon << " ����Ʈ : " << this->point << endl;
	}
	int getId() {
		return this->id;
	}
};
void main() {

	srand(time(NULL));
	int N;
	string name;
	cout << "����� ȸ���� �����մϱ�? :";
	cin >> N;
	Person** arr = new Person*[N];
	for (int i = 0; i < N; i++) {
		cout << "ȸ�� ��� -> �̸� �Է� : ";
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

		cout << "���� �ݾ� �Է� : ";
		cin >> price;

		cout << "ID �Է� : ";
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
		cout << "ID�� �����ϴ�! " << endl;
		cout << "ID�� ����մϴ�!  " << endl;
		cout << "ȸ�� ��� -> �̸� �Է� : " << endl;
		cin >> name;
		arr[N] = new Person(name,id);
		cout << "��� �Ϸ� " << endl;
		arr[N]->show();
		N ++;
		cout << endl;
			}

	} while (price >= 0);


}