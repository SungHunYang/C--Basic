#include<iostream>
using namespace std;
class A {
private:
	int x;
	void f1() {
		cout << "f1()호출됨" << endl;
	}
protected:  
// 상속관계에서 이용 -> 자기자신 + 자신을 상속받은 자식클래스에서 까지만 접근가능하게 해주는 제어자
	int y;
	void f2() {
		cout << "f2()호출됨" << endl;
	}
public:
	int z;
	void f3() {
		cout << "f3()호출됨" << endl;
	}
};
class B : public A { // 클래스 상속이 이루어지면, 
	//자식클래스(B)에서 부모클래스 (A)의 멤버들을 모두 이용할수있게 됨
	//상속시에 작성하는 접근제어자 : 
	//부모클래스에 존재하는 해당 접근제어자보다 더 넓은 멤버에 대해, 해당 공개범위로 받겠다.
public:
	void f4() {
		cout<<"f4()호출됨" << endl;
	}


};
class Person {
protected:
	string name;
public:
	Person(){
	}
	Person(string name) {
		this->name = name;
	}
	void hello() {
		cout << "안녕하세요!" << endl;

	}
	void show() {
		cout << "이름 : " << this->name << endl;
	}
};
class Student : public Person {
	int score;
public:
	Student(string name, int score) {
		this->name = name;
		this->score = score;
	}
	void show() { // 함수명 동일 + 함수인자, 리턴타입 동일
		// -> 함수 재정의.[오버라이딩]
		cout << this->name << "학생은 " << this->score << "점 입니다." << endl;
	}
};
// 오버로딩 vs 오버라이딩
// 상속관계 xx vs 상속
// 함수인자에 차이가 있음(개수, 타입) vs 함수 인자에 차이 x
void main() {

	//[상속]
	// 개발시간 ,비용 단축
	// 검사비용절감
	// 오류의 파급효과 줄어듦
	// 코드의 재사용성 증가

	// 더 일반적인 개념을 가진 기존의 클래스
	// : 부모 클래스, 베이스 클래스 , 상위 클래스

	// 상속을 받는 클래스
	// : 자식 클래스, 파생 클래스, 하위 클래스

	A a;
	B b;
	b.f4();
	Person p=Person("홍길동");
	p.hello();
	p.show();
	//Student s;
	// 1.Student() 기본생성자를 호출
	// 2.Student() 기본생성자는 자식클래스의 생성자-> 부모클래스의 기본생성자를 먼저 호출
	Student s=Student("아무무",80);
	s.hello();
	s.show();
	
	
	
}