#include<iostream> //--> stdio �� ����ְ� �߰��� �پ��Ѱ͵��� ���� ����ִ�.
using namespace std; // --> std ������ �̸� ���ִ� ���
#include<string>
void main() {
	/*
	std::cout << "�ȳ��ϼ���.\n";// std ����� cout�� ����ϰڴ�. (cout== �ܼ� out)
	std::cout << "�ݰ����ϴ�." << std::endl; // �̰� ����
	
	// ������ ������ -> ! = << >> �̷� �����ڵ��� ��Ȳ�� �°� �ٽ� �����ϴ°�.(�̹� ���������� ������)

	int i;
	double d;
	char c;
	char str[10];
	std::cout << "�����Է� : ";
	std::cin >> i; 
	std::cout << "i= " << i << "�Դϴ�" << std::endl; // ������� std �־�� ������
	cout << "�Ǽ��Է� : ";
	cin >> d;
	cout << "d= " << d << "�Դϴ�" << endl; //using namespace std ���� ������ �ȴ�.
	cout << "�����Է� : ";
	cin >> c;
	cout << "c= " << c << "�Դϴ�" << endl;
	cout << "���ڿ��Է� : ";
	cin >> str;   // --> ���⸦ ������ �Է� xx
	cout << "str= " << str << "�Դϴ�" << endl;

	bool b = true; // ���� �Ǵ�
	string s; //���ڿ� 
	cout << "���ڿ��Է� : ";
	cin >> s; // �굵 ���� �ν� x
	cout << "s= " << s << "�Դϴ�" << endl;
	*/


	string str;
	cout << "���ڿ� �Է� : ";
	getline(cin, str); //cin >> str; �̰Ŷ� �Ȱ����Ŵ�
	// ��� ���� �Է� ����
	cout << "�Էµ� ���ڿ� : " << str << endl;
	cout << "���ڿ� ũ��� " << str.size() << "�Դϴ�." << endl;
	
	str.insert(0, "aa"); // (�ε��� ��ġ, ���� �ܾ�)
	cout << "����� ���ڿ� : " << str << endl;
	cout << "���ڿ� ũ��� " << str.size() << "�Դϴ�." << endl;

	str.append("bb"); //��� �׳� �ǵڿ� ��
	cout << "����� ���ڿ� : " << str << endl;
	cout << "���ڿ� ũ��� " << str.size() << "�Դϴ�." << endl;

	string str2 = "apple";
	str += str2;
	cout << "str: " << str << ", str2: " << str2 << endl;

	string id;
	cout << "���̵��Է� : ";
	cin >> id;
	//id.insert(0, "��ȯ��"); --> �̷��� �߰� ����
	id.append("��");
	cout << "��ȯ�� " << id << " , ȯ���մϴ�." << endl;



}