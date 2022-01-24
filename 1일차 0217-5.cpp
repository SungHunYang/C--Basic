#include<stdio.h>
#include<stdlib.h>
void main() {

	int n;
	printf("몇명의 학생 : ");
	scanf("%d", &n);
	int* arr = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		printf("%d 번째 학생 점수 입력 : ",i+1);
		scanf("%d", &arr[i]);
		if (arr[i] < 0 || arr[i]>100) {
			i--;
			continue;
		}
	}
	for (int i = 0; i < n; i++) {
		if (arr[i] >= 50) {
			printf("%d 번째 학생은 %d점 [P] \n", i + 1,arr[i]);
		}
		else {
			printf("%d 번째 학생은 %d점 [F] \n", i + 1,arr[i]);
		}
	}
	
	free(arr);

}/*
	이렇게도 할수있다.
	int N;
   printf("몇명의 학생이 있습니까?  ");
   scanf("%d", &N);

   double* stu=(double*)malloc(N * sizeof(double));
   for (int i = 0; i < N; i++) {
	  do {
		 printf("%d번째 학생점수입력: ", i + 1);
		 scanf("%lf", &stu[i]);
	  } while (stu[i] < 0.0 || 100.0 < stu[i]);
   }
   printf("\n");
   for (int i = 0; i < N; i++) {
	  printf("%d번째 학생은 [%c]입니다.\n", i + 1,stu[i]>=50.0?'P':'F');
   }

   free(stu);

}
 */