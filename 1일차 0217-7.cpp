#include<stdio.h>
#include<string.h>
struct student { // 다른타입을 배열처럼 사용하기위해
	char name[20]; // 멤버, 속성, 필드
	int score;

}; // 구조체
void main() {
	//[구조체]

	struct student s1 = {"홍길동",80}; // 이것은 int i1=10;이라고 선언한거와 같다.
	struct student s2;
	//s2.name = "임꺽정"; xxx // . <-- 멤버접근 연산자 
	strcpy(s2.name, "임꺽정");
	s2.score = 85;

	printf("%s 학생의 성적은 %d 점 입니다. \n", s1.name, s1.score);
	printf("%s 학생의 성적은 %d 점 입니다. \n", s2.name, s2.score);

	// 구조체 배열 가능
	// 함수의 인자로써 사용 가능
	// 포인터 사용 가능

}