#include<stdio.h>
void swap(int *a, int *b) { // ������ : �ּҸ� �޴� �ڷ���(data type)
	int tmp = *a; // *�� OO�� ����Ű�� '�ּ��� ��'
	*a = *b;
	*b = tmp;
}
void main() {
	//call by value(���� ���� ȣ��) -> �����Ϳ� ���� ȣ��
	int a = 10, b = 20;
	printf("��ȯ�� : a=%d b=%d \n", a, b);
	swap(&a, &b);
	printf("��ȯ�� : a=%d b=%d \n", a, b);

	//�����͸� ����ϴ� ���� -1
	// main()�� ���� �޸𸮰����� �ܺ��Լ����� �����ϱ�����
}