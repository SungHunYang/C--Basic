#include"cafe.h"

void main() {
	int index=0;
	int N;
	
	cout << "�޴� ��� �ִ� ���� ���� �Է�: " << endl;
	cin >> N;
	c* data=(c*)malloc(N * sizeof(c)); // string �� ���ڷ� ������ ����

	cout << "������� ��Ÿ���� �Դϴ�." << endl;

	cout << "�޴� ��� �ִ� ���� ���� �Է�: ";


	while (true) {
		int act;
		cout << "\n1. �޴� �߰� 2. �޴� ���� 3. ���� ���� 4.��� ��� 5. ����" << endl;
		cout << " �Է� : ";
		cin >> act;
		if (act == 1) {
			if (index == N) {
				cout << "���̻� �޴��� �߰� �Ҽ� �����ϴ�." << endl;
				continue;
			}
			data[index++].func1();
		}
		else if (act == 2) {
			int in;
			char name[20];
			cout << "�޴� �ٲ� ��ȣ �Է� : ";
			cin >> in;
			func2(data[in - 1]);

		}
		else if (act == 3) {
			int in;
			int price;
			cout << "������ �ٲ� �޴� ��ȣ : ";
			cin >> in;
			cout << "�ٲ� ���� : ";
			cin >> price;
			func3(price, &data[in - 1]);

		}
		else if (act == 4) {
			if (index == 0) {
				cout << "��ϵ� �޴��� �����ϴ�." << endl;
				continue;
			}
			cout << "\n==== �޴� ��� ===" << endl;
			for (int i = 0; i < index; i++) {
				cout << i + 1 << ". ";
				data[i].func4();
			}

		}
		else if (act == 5) {
			cout << "[ ���� ]";
			break;
		}
		else {
			cout << "�߸��� �Է�"<<endl;
			continue;
		}
	}

	free(data);
}