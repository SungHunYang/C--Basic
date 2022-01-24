#include<stdio.h>
#include<stdlib.h>
#include<time.h>
double avgData(int* arr, int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	return sum*1.0/size;
}
void main() {
	while (1) {
		int N;
		printf("몇개 저장? : ");
		scanf("%d", &N);
		int* arr = (int*)malloc(N * sizeof(int));
		srand(time(NULL));
		for (int i = 0; i < N; i++) {
			arr[i] = rand() % 10 + 1;
		}
		printf("[ ");
		for (int i = 0; i < N; i++) {
			printf("%d ", arr[i]);
		}
		printf(" ]\n");
		if (avgData(arr, N) >  5.0) {
			printf("[ 평균 : %d ] \n", avgData(arr, N));
			printf("종료");
			break;
		}
			printf("[ 평균 : %d ] \n", avgData(arr, N));
			printf("계속\n");
	}

}