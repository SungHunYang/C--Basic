//#include<stdio.h>       // ���ȭ ���α׷��� "������� ���"
#include"pointHeader.h" // --> ����ȿ� stdio.h stdlib.h string.h �� �־ ��� ���� 
						// stdio.h ���ص� ��

void moveP(P* p,int x, int y) {
	(*p).x += x;
	(*p).y += y;
	printf("�� �̵� �Ϸ� \n");
}
void midP(P p1,P p2 ) {
	printf("�߰��� : (%.2lf,%.2lf)\n", (p1.x + p2.x) / 2.0, (p1.y + p2.y) / 2.0);
}

void main() {			
	
	int N;
	do {
		printf("���� ������ �� ���� �Է� : ");
		scanf("%d", &N);
	} while (N <= 0);
	P* p = (P*)malloc(N * sizeof(P));
	for (int i = 0; i < N; i++) {
		p[i].setP();
	}
	for (int i = 0; i < N; i++) {
		p[i].showP();
	}
	printf("==========\n");
	printf("\n");
	while (true) {
		int a;
		do {
			printf("1. ���̵� 2. �߰��� ���� 3. ��������� 4. ���α׷� ����\n");
			scanf("%d", &a);
		} while (a<1 || a>4);
		if (a == 1) {
			int c;
			int x;
			int y;
			do {
				printf("���ϴ� �� : ");
				scanf("%d", &c);
			} while (c < 1 || N < c);
			printf("�̵��� x��ǥ y��ǥ : ");
			scanf("%d%d", &x, &y);
			p[c - 1].moveP(x, y);
		}
		else if (a == 2) {
			int c;
			int x;
			do{
				printf("���ϴ� �� 2�� : ");
				scanf("%d%d", &c,&x);
			} while (c < 1 || N < c);
			midP(p[c-1],p[x-1]);
		}
		else if (a == 3) {
			for (int i = 0; i < N; i++) {
				p[i].showP();
			}
		}
		else{
			printf("����");
			break;
		}
	}
	free(p);
}