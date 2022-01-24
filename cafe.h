#pragma once
#include<iostream>
using namespace std;
typedef struct cafe {
	char name[20];
	int price;
	inline void func1();
	inline void func4();
}c;
inline void cafe::func1() {
	cout << "메뉴 이름 입력 : ";
	cin >> name;
	cout << "메뉴 가격 입력 : ";
	cin >> price;
	cout << "메뉴 추가 완료" << endl;


}
inline void cafe::func4() {
	cout << name << " " << price << "원" << endl;
}
void func3(int a, c* data) {
	(*data).price = a;
	cout << (*data).name << "의 가격 변경 완료" << endl;
}
void func3_2(int a, c& data) {  // 참조에 의한 호출
	data.price = a;
	cout << data.name << " 의 가격 변경 완료" << endl;
}
void func2(c& data) {
	cout << "변경할 메뉴 이름을 입력 : ";
	cin >> data.name;
	cout << data.name << " (으)로 변경 완료" << endl;
}