#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct point { // 구조체를 자료형으로 정의 한다 'typedef'
	char color[20];
	int x;
	int y;
}P; // 자료형 이름
void showP(P p) { // P p 가 어색할수도 있는데 이게 int a 랑 똑같다. "자료형 자료명"
	printf("%s(%d,%d)\n", p.color, p.x, p.y);
}
P setP() { // 리턴 값으로 세팅하기
	P p;
	printf("점의 색깔 입력 : ");
	scanf("%s", p.color);
	printf("x 좌표 입력 : ");
	scanf("%d", &p.x);
	printf("y 좌표 입력 : ");
	scanf("%d", &p.y);	
	return p;
}
void setP2(P* p) {  // 포인터로 값 바꾸기
	printf("점의 색깔 입력 : "); // 우선순위가 
	scanf("%s", (*p).color);   // 멤버접근 연산자가 포인터 보다 더 빨라서 괄호가 필요하다
	printf("x 좌표 입력 : ");	//  그리고 생각해보자 만일 *p.color 이렇게 되면
	scanf("%d", &(*p).x);		// p.color를 찾고 거기의 주소를 찾는데 애초에 P* p 에서 주소만
	printf("y 좌표 입력 : ");    // 왔기 때문에 p.color를 찾을수 조차 없다.
	scanf("%d", &(*p).y);		// 따라서 (*p).color 하면 *p주소에서 .멤버 접근 연산자를 통해
}								// 멤버 color를 찾아서 바꾼다는 거다.

void main() {
	/*
	//struct point p1 = { "검정",10,20 };
	//struct point p2;
	P p1= { "검정",10,20 };
	P p2;   // 구조체 정의한거 쓴거.
	p2.x = 22;
	p2.y = 33;
	strcpy(p2.color, "파랑");

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
	P a[3]; // 구조체 배열

	for (int i = 0; i < 3; i++) {
		// a[i] = setP(); --> 이것도가능
		setP2(&a[i]);
	}
	for (int i = 0; i < 3; i++) {
		showP(a[i]);
	}
	*/
	int n;
	printf("원하는 구조체 개수 : ");
	scanf("%d", &n);
	P* p = (P*)malloc(n * sizeof(P));
	for(int i=0; i<n;i++){
		setP2(&p[i]);
	}

	for (int i = 0; i < n; i++) {
		showP(p[i]);
	}



}