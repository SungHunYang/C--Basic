#include<iostream>
using namespace std;
#include<string>
#define MAX 10 // ����� ���� ���, ��ȣ ���
void showArr(const int* arr, int len) {
	// arr[0] = -100;
	cout << "[";
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	cout << "]" << endl;

}
void main() {

	//const�� ���� call by reference(������ ���� ȣ��)
	
	const int i = 10; // ���ȭ, �ɺ��� ���
	int num1 = 10;
	int num2 = 20;
	
	int* ip1 = &num1;
	*ip1 = 100;
	//num1 = 100;
	//cout << ip1 << " " << &num1 << endl;
	cout << *ip1 << " " << num1 << endl;

	const int* ip2=&num1;
	// ����� �Ǵ� Ÿ���� const ��Ű�°� �� num1�� const�ȴ�.
	ip2 = &num2;
	cout << *ip2<< endl;
	// *ip2 = 200; --> �����ϰ��ִ� num1�� �ٲܼ��� ������
	// �����Ͱ� �ٷκ��� ������ ��(vaule)�� ���� xx
	cout << endl;
	cout << endl;

	int arr[] = { 12,11,90,17,56 };
	showArr(arr, 5);
	char str[] = "apple"; // ��� a p p l e �ϳ��ϳ� ���� ����
	const char* cp = "apple"; // �̷��� ����Ǹ� ����Ǹ� �ȵű� ������ const �ʿ�
							  // ��� apple �̶�� ���� �����  ������ �ּҸ� ����ϰڴ�
	cp = "banana"; // �̰� banana�� �ּҸ� �����´ٴ� �� ���� *cp�̸� apple �� banana�� �Ǵϱ� �Ұ���







	
	



}