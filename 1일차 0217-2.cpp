#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//#define MAX 10 //--> ��ȣ��� ��ó���� Ÿ�Ը�� x

void showArr(int *arr, int size) { 
	// ���⼭ *arr�� main �迭�� ù��° �ּҸ� �������µ�
	// �������� �Լ����� ��ĭ�� �ѱ�鼭 ��� Ȯ���Ѵ�.
	// �׷��� �Լ��� �� �迭�� ������� �� �� �����Ƿ�(ù��° �ּҸ� �ƴϱ�)
	// size�� ���� �־� �ش�.
	printf("[");
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("]\n");
}
void main() {

	int arr[5];
	int size= sizeof(arr) / sizeof(arr[0]);
	srand(time(NULL)); //--> �Ź� �ٸ� �������� �Ҽ� �ְ� ���ش� �̰� ������ �ѹ� ������ �������� �Ⱥ���
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 10 + 1;
	}

	showArr(arr, size); // �迭�� == &�迭[0] 
						// �� �迭�� �ּҸ� ������ �����ϱ� ���� �Լ����� �ּҸ� �޴� �����͸� ���
						

	char str[10];
	scanf("%s", str); // �迭�� == &�迭[0]
	
}