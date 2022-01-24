#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//#define MAX 10 //--> 기호상수 전처리기 타입명시 x

void showArr(int *arr, int size) { 
	// 여기서 *arr는 main 배열의 첫번째 주소만 가져오는데
	// 나머지는 함수에서 한칸씩 넘기면서 계속 확인한다.
	// 그러나 함수가 이 배열이 몇개인지는 알 수 없으므로(첫번째 주소만 아니까)
	// size를 같이 넣어 준다.
	printf("[");
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("]\n");
}
void main() {

	int arr[5];
	int size= sizeof(arr) / sizeof(arr[0]);
	srand(time(NULL)); //--> 매번 다른 랜덤수를 할수 있게 해준다 이게 없으면 한번 랜덤수 정해지면 안변함
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 10 + 1;
	}

	showArr(arr, size); // 배열명 == &배열[0] 
						// 이 배열이 주소를 가지고 있으니까 위에 함수에서 주소를 받는 포인터를 사용
						

	char str[10];
	scanf("%s", str); // 배열명 == &배열[0]
	
}