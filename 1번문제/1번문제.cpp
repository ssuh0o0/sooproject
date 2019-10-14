#include <iostream>
#include <string>
using namespace std;

string str;//이 객체에서 전체적으로 사용해야 하는 변수
class Buffer { //Buffer 클래스 

public:
	void print() {// 함수print 생성
		cout << str << endl; //저장된 str 출력
	}
	Buffer(string st1) { //매개변수로 받은 string을 str에 저장.
		str = st1;
	}
};

Buffer& append(Buffer& buf, string st2) { 
	str += st2; //기존에 저장된 string에 매개변수로 받은 st2추가 저장.
	return buf; //참조를 리턴하는 함수
}

int main() {
	Buffer buf("Hello"); //생성자 실행
	Buffer& temp = append(buf, "Guys"); //참조하는 생성자에 append함수 실행
	temp.print(); //참조된 값 출력
	buf.print(); //출력
}