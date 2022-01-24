#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct point { 
	char color[20];
	int x;
	int y; // 구조체 안에 함수를 넣어보자 --> inline 마치 클래스 안에 함수 선언되듯
	inline void showP(); // 안에 인자를 지운건 내꺼 쓰겠다고 하면 되서 적을 필요가 없다.
	inline P setP(); // 보기 쉽게 이렇게 해도 됨 // 내부에 적기만 하고 바깥에 구현
	inline void setP2();  
	inline void midP(P p1, P p2);
	inline void moveP(int x, int y);

}P; 
void point::showP() { 
	printf("%s(%d,%d)\n", color, x, y);
}
P point::setP() {  // :: 스코프 연산자(scope) --> 내가 누구의 멤버다 라는걸 보여주는
	P p;
	printf("점의 색깔 입력 : ");
	scanf("%s", p.color);
	printf("x 좌표 입력 : ");
	scanf("%d", &p.x);
	printf("y 좌표 입력 : ");
	scanf("%d", &p.y);
	return p;
}
void point::setP2() {  // 포인터로 값 바꾸기
	printf("점의 색깔 입력 : "); 
	scanf("%s", color);   
	printf("x 좌표 입력 : ");	
	scanf("%d", &x);		
	printf("y 좌표 입력 : ");    
	scanf("%d", &y);		
}
void point::midP(P p1, P p2) {
	printf("중간점 : (%.2lf,%.2lf)\n", (p1.x + p2.x) / 2.0, (p1.y + p2.y) / 2.0);
}
P midP2(P p1, P p2) {
	P p;
	strcpy(p.color, "검정");
	p.x = (p1.x + p2.x) / 2;
	p.y = (p1.y + p2.y) / 2;
	return p;
}
void point::moveP(int xx, int yy) {
	x += xx;
	y += yy;
	printf("점 이동완료!\n");
}
