#include<stdio.h>
#include<string.h>
struct student { // �ٸ�Ÿ���� �迭ó�� ����ϱ�����
	char name[20]; // ���, �Ӽ�, �ʵ�
	int score;

}; // ����ü
void main() {
	//[����ü]

	struct student s1 = {"ȫ�浿",80}; // �̰��� int i1=10;�̶�� �����Ѱſ� ����.
	struct student s2;
	//s2.name = "�Ӳ���"; xxx // . <-- ������� ������ 
	strcpy(s2.name, "�Ӳ���");
	s2.score = 85;

	printf("%s �л��� ������ %d �� �Դϴ�. \n", s1.name, s1.score);
	printf("%s �л��� ������ %d �� �Դϴ�. \n", s2.name, s2.score);

	// ����ü �迭 ����
	// �Լ��� ���ڷν� ��� ����
	// ������ ��� ����

}