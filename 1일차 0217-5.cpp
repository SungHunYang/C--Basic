#include<stdio.h>
#include<stdlib.h>
void main() {

	int n;
	printf("����� �л� : ");
	scanf("%d", &n);
	int* arr = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		printf("%d ��° �л� ���� �Է� : ",i+1);
		scanf("%d", &arr[i]);
		if (arr[i] < 0 || arr[i]>100) {
			i--;
			continue;
		}
	}
	for (int i = 0; i < n; i++) {
		if (arr[i] >= 50) {
			printf("%d ��° �л��� %d�� [P] \n", i + 1,arr[i]);
		}
		else {
			printf("%d ��° �л��� %d�� [F] \n", i + 1,arr[i]);
		}
	}
	
	free(arr);

}/*
	�̷��Ե� �Ҽ��ִ�.
	int N;
   printf("����� �л��� �ֽ��ϱ�?  ");
   scanf("%d", &N);

   double* stu=(double*)malloc(N * sizeof(double));
   for (int i = 0; i < N; i++) {
	  do {
		 printf("%d��° �л������Է�: ", i + 1);
		 scanf("%lf", &stu[i]);
	  } while (stu[i] < 0.0 || 100.0 < stu[i]);
   }
   printf("\n");
   for (int i = 0; i < N; i++) {
	  printf("%d��° �л��� [%c]�Դϴ�.\n", i + 1,stu[i]>=50.0?'P':'F');
   }

   free(stu);

}
 */