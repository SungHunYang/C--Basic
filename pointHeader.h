#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct point { 
	char color[20];
	int x;
	int y; // ����ü �ȿ� �Լ��� �־�� --> inline ��ġ Ŭ���� �ȿ� �Լ� ����ǵ�
	inline void showP(); // �ȿ� ���ڸ� ����� ���� ���ڴٰ� �ϸ� �Ǽ� ���� �ʿ䰡 ����.
	inline P setP(); // ���� ���� �̷��� �ص� �� // ���ο� ���⸸ �ϰ� �ٱ��� ����
	inline void setP2();  
	inline void midP(P p1, P p2);
	inline void moveP(int x, int y);

}P; 
void point::showP() { 
	printf("%s(%d,%d)\n", color, x, y);
}
P point::setP() {  // :: ������ ������(scope) --> ���� ������ ����� ��°� �����ִ�
	P p;
	printf("���� ���� �Է� : ");
	scanf("%s", p.color);
	printf("x ��ǥ �Է� : ");
	scanf("%d", &p.x);
	printf("y ��ǥ �Է� : ");
	scanf("%d", &p.y);
	return p;
}
void point::setP2() {  // �����ͷ� �� �ٲٱ�
	printf("���� ���� �Է� : "); 
	scanf("%s", color);   
	printf("x ��ǥ �Է� : ");	
	scanf("%d", &x);		
	printf("y ��ǥ �Է� : ");    
	scanf("%d", &y);		
}
void point::midP(P p1, P p2) {
	printf("�߰��� : (%.2lf,%.2lf)\n", (p1.x + p2.x) / 2.0, (p1.y + p2.y) / 2.0);
}
P midP2(P p1, P p2) {
	P p;
	strcpy(p.color, "����");
	p.x = (p1.x + p2.x) / 2;
	p.y = (p1.y + p2.y) / 2;
	return p;
}
void point::moveP(int xx, int yy) {
	x += xx;
	y += yy;
	printf("�� �̵��Ϸ�!\n");
}
