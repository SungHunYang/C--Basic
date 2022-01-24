#include<iostream>
using namespace std;
class Car {
	string user;
	int speed;
	//int a[3];
public:
	Car() {

	}
	/*Car(int* a) {
		for (int i = 0; i < 3 i++) {
			this->a[i] = a[i];
		}
	} --> 이건 그냥 내가 해본건데 배열을 인자로 받는법 
	*/ 
	Car(string user) {
		this->user = user;
		this->speed = 0;
	}
	void speedUp(int speed = 10) {
		this->speed += speed;
	}
	void getter() {
		cout << this->user << " 현재 속도 : " << this->speed <<"km/s"<< endl;
	}
};
void main() {
	Car c[2];
	
	for (int i = 0; i < 2; i++) {
		cout << "유저이름 입력 : ";
		string user;
		cin >> user;
		c[i] = Car(user);
	}
	c[0].speedUp(50);
	c[0].speedUp();
	c[1].speedUp();
	c[1].speedUp(30);
	c[0].getter();
	c[1].getter();
}