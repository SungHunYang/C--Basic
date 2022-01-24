#include"cafe.h"

void main() {
	int index=0;
	int N;
	
	cout << "메뉴 목록 최대 저장 개수 입력: " << endl;
	cin >> N;
	c* data=(c*)malloc(N * sizeof(c)); // string 을 인자로 받을수 없음

	cout << "어서오세요 스타벅스 입니다." << endl;

	cout << "메뉴 목록 최대 저장 개수 입력: ";


	while (true) {
		int act;
		cout << "\n1. 메뉴 추가 2. 메뉴 변경 3. 가격 변경 4.목록 출력 5. 종료" << endl;
		cout << " 입력 : ";
		cin >> act;
		if (act == 1) {
			if (index == N) {
				cout << "더이상 메뉴를 추가 할수 없습니다." << endl;
				continue;
			}
			data[index++].func1();
		}
		else if (act == 2) {
			int in;
			char name[20];
			cout << "메뉴 바꿀 번호 입력 : ";
			cin >> in;
			func2(data[in - 1]);

		}
		else if (act == 3) {
			int in;
			int price;
			cout << "가격을 바꿀 메뉴 번호 : ";
			cin >> in;
			cout << "바꿀 가격 : ";
			cin >> price;
			func3(price, &data[in - 1]);

		}
		else if (act == 4) {
			if (index == 0) {
				cout << "등록된 메뉴가 없습니다." << endl;
				continue;
			}
			cout << "\n==== 메뉴 출력 ===" << endl;
			for (int i = 0; i < index; i++) {
				cout << i + 1 << ". ";
				data[i].func4();
			}

		}
		else if (act == 5) {
			cout << "[ 종료 ]";
			break;
		}
		else {
			cout << "잘못된 입력"<<endl;
			continue;
		}
	}

	free(data);
}