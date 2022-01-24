#include<iostream>
using namespace std;
class C {
	int a;
	int b;
public:
	C() { // 생성자 -> 디폴트생성자, 기본 생성자
		cout << "생성자 호출됨" << endl;
		this->a = 10;  // setxx()가 수행했던 역할을 처리, 초기화
		this->b = 20;
	}
	C(int num) { //생성자 오버로딩
		this->a = num;
		this->b = num;
	}
	void show() {
		cout << this->a << " " << this->b << endl;
	}
	~C() { //소멸자
		cout << "소멸자 호출됨!" << endl;
	}
};
void main() {
	C c1; // 클래스에서 객체를 생성할때, 기본생성자가 자동호출!
	C c2 = C(); // 내부적으로 이런게 이뤄지고 있는거다 디폴트로
	C c3(10);
	C c4 = C(11);
	c1.show();
	c3.show();
	c4.show();


	//생성자 : 클래스와 이름이 동일한 함수 . 리턴타입 명시 xx
	//자기자신객체를 만들때에 사용되는 함수
	//setPoint(),setStudent() -> 자기 자신객체를 초기화
}