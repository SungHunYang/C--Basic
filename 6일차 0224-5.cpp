#include<iostream>
using namespace std;
class Student {
	string name;
	int score[3];
	double avg;
	
public:
	Student(string name, int* score) {
		this->name = name;
		this->avg = 0.0;
		for(int i=0; i<3; i++){
			this->score[i] = score[i];
			this->avg += this->score[i];
		}
		this->avg /= 3.0;
	}
	void show() {
		cout << this->name << "�л��� ��������� " << this->avg << "�� �Դϴ�." << endl;
	}
	double getAvg() {
		return this->avg;
	}
	string getName() {
		return this->name;
	}

};
void main() {

	Student** data = new Student * [3];

	for (int i = 0; i < 3; i++) {
		string name;
		int score[3];
		cout << i + 1 << "��° �л� �̸� �Է� : ";
		cin >> name;
		for (int j = 0; j < 3; j++) {
			cout <<j+1 <<"��° ���� �Է� :";
			cin >> score[j];
		}
		data[i] = new Student(name, score);
	}
	cout << endl;
	for (int i = 0; i < 3; i++) {
		data[i]->show();
	}
	double max = data[0]->getAvg();
	int maxIndex = 0;
	for (int i = 1; i < 3; i++) {
		if (max < data[i]->getAvg()) {
			max = data[i]->getAvg();
			maxIndex = i;
		}
	}
	cout << data[maxIndex]->getName() << endl;
	data[maxIndex]->show();
}