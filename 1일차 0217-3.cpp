#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int sumArr(int *arr, int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	return sum;

}
void findMax(int *arr, int size) {
	int max = arr[0];
	int index;
	for (int i = 0; i < size; i++) {
		if (max < arr[i]) {
			max = arr[i];
			index = i;
		}
	}
	printf("[%d] 최대값 : %d\n",index,max);
}
void main() {

	int arr[5];
	srand(time(NULL));
	for (int i = 0; i < 5; i++) {
		arr[i] = rand() % 20 + 5;
	}
	printf("[");
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	printf("]\n");
	printf("총합: %d , 평균 : %.2lf\n", sumArr(arr, 5), sumArr(arr, 5) / 5.0);
	findMax(arr, 5);
	

}
// 포인터를 사용하는 이유-2
// 함수의 인자로 사용할때 