#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct point { // ����ü�� �ڷ������� ���� �Ѵ� 'typedef'
	char color[20];
	int x;
	int y;
}P; // �ڷ��� �̸�
void showP(P p) { // P p �� ����Ҽ��� �ִµ� �̰� int a �� �Ȱ���. "�ڷ��� �ڷ��"
	printf("%s(%d,%d)\n", p.color, p.x, p.y);
}
P setP() { // ���� ������ �����ϱ�
	P p;
	printf("���� ���� �Է� : ");
	scanf("%s", p.color);
	printf("x ��ǥ �Է� : ");
	scanf("%d", &p.x);
	printf("y ��ǥ �Է� : ");
	scanf("%d", &p.y);	
	return p;
}
void setP2(P* p) {  // �����ͷ� �� �ٲٱ�
	printf("���� ���� �Է� : "); // �켱������ 
	scanf("%s", (*p).color);   // ������� �����ڰ� ������ ���� �� ���� ��ȣ�� �ʿ��ϴ�
	printf("x ��ǥ �Է� : ");	//  �׸��� �����غ��� ���� *p.color �̷��� �Ǹ�
	scanf("%d", &(*p).x);		// p.color�� ã�� �ű��� �ּҸ� ã�µ� ���ʿ� P* p ���� �ּҸ�
	printf("y ��ǥ �Է� : ");    // �Ա� ������ p.color�� ã���� ���� ����.
	scanf("%d", &(*p).y);		// ���� (*p).color �ϸ� *p�ּҿ��� .��� ���� �����ڸ� ����
}								// ��� color�� ã�Ƽ� �ٲ۴ٴ� �Ŵ�.

void main() {
	/*
	//struct point p1 = { "����",10,20 };
	//struct point p2;
	P p1= { "����",10,20 };
	P p2;   // ����ü �����Ѱ� ����.
	p2.x = 22;
	p2.y = 33;
	strcpy(p2.color, "�Ķ�");

	p2 = setP();
	setP2(&p1);

	//printf("%s(%d,%d)\n", p1.color, p1.x, p1.y);
	//printf("%s(%d,%d)\n", p2.color, p2.x, p2.y);
	showP(p1);
	showP(p2);
	*/

	/*P a1;
	P a2;
	P a3;
	*/
	/*
	P a[3]; // ����ü �迭

	for (int i = 0; i < 3; i++) {
		// a[i] = setP(); --> �̰͵�����
		setP2(&a[i]);
	}
	for (int i = 0; i < 3; i++) {
		showP(a[i]);
	}
	*/
	int n;
	printf("���ϴ� ����ü ���� : ");
	scanf("%d", &n);
	P* p = (P*)malloc(n * sizeof(P));
	for(int i=0; i<n;i++){
		setP2(&p[i]);
	}

	for (int i = 0; i < n; i++) {
		showP(p[i]);
	}



}