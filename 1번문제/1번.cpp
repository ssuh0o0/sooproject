#include <iostream>
#include <string>

using namespace std;

class str {
private: 
	string a; //스트링 저장받을 변수 생성.
	bool isExit = true; //참 or 거짓 변수 생성.
public:
	void reverse() { //바꾸는 함수 생성.
		while (isExit) { //isExit이 true일 경우
			cout << " >>";
			getline(cin, a); //a의 스트링에 입력받기
			if (a == "exit") { //exit과 같으면
				isExit = false; //while을 빠져나가기
				break; 
			}
			int size = a.length(); //a의 길이 할당받기
			int half = size / 2; //a의 길이 반 할당 (반을 기준으로 돌리기 때문에
			for (int i = 0; i < half; i++) {
				char tmp = a[size - 1 - i]; //tmp변수 생성후 앞 뒤 순서 바꿔주기
				a[size - 1 - i] = a[i];
				a[i] = tmp;
			}
			cout << a << endl; //스트링 출력
		}
	}
};

int main() {
	str s; //클래스 호출

	cout << "아래에 한 줄을 입력하세요. (exit을 입력하면 종료합니다.)" << endl;
	s.reverse(); //클래스 함수 호출
}