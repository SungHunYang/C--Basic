//#include<stdio.h>       // 모듈화 프로그래밍 "헤더파일 사용"
#include"pointHeader.h" // --> 여기안에 stdio.h stdlib.h string.h 다 있어서 사실 위에 
						// stdio.h 안해도 됨

void moveP(P* p,int x, int y) {
	(*p).x += x;
	(*p).y += y;
	printf("점 이동 완료 \n");
}
void midP(P p1,P p2 ) {
	printf("중간점 : (%.2lf,%.2lf)\n", (p1.x + p2.x) / 2.0, (p1.y + p2.y) / 2.0);
}

void main() {			
	
	int N;
	do {
		printf("저장 가능한 점 개수 입력 : ");
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
			printf("1. 점이동 2. 중간점 생성 3. 저장목록출력 4. 프로그램 종료\n");
			scanf("%d", &a);
		} while (a<1 || a>4);
		if (a == 1) {
			int c;
			int x;
			int y;
			do {
				printf("원하는 점 : ");
				scanf("%d", &c);
			} while (c < 1 || N < c);
			printf("이동할 x좌표 y좌표 : ");
			scanf("%d%d", &x, &y);
			p[c - 1].moveP(x, y);
		}
		else if (a == 2) {
			int c;
			int x;
			do{
				printf("원하는 점 2개 : ");
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
			printf("종료");
			break;
		}
	}
	free(p);
}