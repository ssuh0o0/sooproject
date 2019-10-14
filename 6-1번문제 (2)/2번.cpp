#include <iostream>
#include <string>
using namespace std;

class Person {
	string name; //이름 스트링 변수 생성
	string tel;  //번호 변수 생성
public:
	string getName() { return name; } //이름 함수 생성
	string getTel() { return tel; } //번호 함수 생성
	void set(string name, string tel) { //이름과 전화번호 매개변수로 받아옴.
		this->name = name;        //이 객체 속 name과 tel에 저장
		this->tel = tel;
	}
};


int main() {
	Person *p = new Person[3]; //포인터 클래스 생성.
	char name[50]; //이름 배열 생성
	char tel[50];  //번호 배열 생성
	char searchN[50]; //찾는 사람 이름 생성
	cout << "이름과 전화 번호를 입력해주세요" << endl;
	for (int i = 0; i < 3; i++) { //사람3명의 이름과 번호 입력받기
		cout << "사람 " << i+1<<">>"; 
		cin >> name>>tel;
		p[i].set(name,tel);
	}
	cout << "모든 사람의 이름은 "; 
	for (int i = 0; i < 3; i++) { //3명의 이름 출력.
		cout<< p[i].getName()<<" ";
	}
	cout << "\n";
	cout << "전화번호를 검색합니다. 이름을 입력하세요>>"; 
	cin >> searchN; //이름을 검색

	for (int i = 0; i < 3; i++) { //이름에 맞는 전화번호 출력
		if (searchN == p[i].getName())
			cout << p[i].getTel()<< endl;
	}
}