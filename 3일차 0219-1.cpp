#include<iostream> //--> stdio 도 들어있고 추가로 다양한것들이 많이 들어있다.
using namespace std; // --> std 스코프 미리 해주는 방법
#include<string>
void main() {
	/*
	std::cout << "안녕하세요.\n";// std 헤더의 cout을 사용하겠다. (cout== 콘솔 out)
	std::cout << "반갑습니다." << std::endl; // 이거 띄어쓰기
	
	// 연산자 재정의 -> ! = << >> 이런 연산자들을 상황에 맞게 다시 정의하는것.(이미 내부적으로 구현됨)

	int i;
	double d;
	char c;
	char str[10];
	std::cout << "정수입력 : ";
	std::cin >> i; 
	std::cout << "i= " << i << "입니다" << std::endl; // 원래라면 std 있어야 되지만
	cout << "실수입력 : ";
	cin >> d;
	cout << "d= " << d << "입니다" << endl; //using namespace std 쓰면 지워도 된다.
	cout << "문자입력 : ";
	cin >> c;
	cout << "c= " << c << "입니다" << endl;
	cout << "문자열입력 : ";
	cin >> str;   // --> 띄어쓰기를 포함한 입력 xx
	cout << "str= " << str << "입니다" << endl;

	bool b = true; // 진위 판단
	string s; //문자열 
	cout << "문자열입력 : ";
	cin >> s; // 얘도 띄어쓰기 인식 x
	cout << "s= " << s << "입니다" << endl;
	*/


	string str;
	cout << "문자열 입력 : ";
	getline(cin, str); //cin >> str; 이거랑 똑같은거다
	// 얘는 띄어쓰기 입력 가능
	cout << "입력된 문자열 : " << str << endl;
	cout << "문자열 크기는 " << str.size() << "입니다." << endl;
	
	str.insert(0, "aa"); // (인덱스 위치, 넣을 단어)
	cout << "변경된 문자열 : " << str << endl;
	cout << "문자열 크기는 " << str.size() << "입니다." << endl;

	str.append("bb"); //얘는 그냥 맨뒤에 들어감
	cout << "변경된 문자열 : " << str << endl;
	cout << "문자열 크기는 " << str.size() << "입니다." << endl;

	string str2 = "apple";
	str += str2;
	cout << "str: " << str << ", str2: " << str2 << endl;

	string id;
	cout << "아이디입력 : ";
	cin >> id;
	//id.insert(0, "소환사"); --> 이렇게 추가 가능
	id.append("님");
	cout << "소환사 " << id << " , 환영합니다." << endl;



}