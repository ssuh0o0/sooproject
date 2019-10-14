#include <iostream>
using namespace std;

class Dept {
	int size; //변수 생성
	int* scores; //점수 배열 포인터 생성
public:
	Dept(int size) { //값을 호출하는 함수.
		this->size = size; //매개변수로 받아온 size를 이 객체 속 변수에 저장.
		scores = new int[size]; //scores 배열에 size만큼 생성.
	}
	~Dept();//소멸자 
	int getSize() { return size; } //size를 리턴함.
	void read();
	bool isOver60(int index);
};

Dept::~Dept() {}

void Dept::read() { //입력함수 생성.
	cout << size << "개 점수 입력>> "; //size만큼 입력받기
	for (int i = 0; i < this->size; i++) {
		cin >> scores[i];
	}
}

bool Dept::isOver60(int index) {//60이상일 경우 true로 리턴
	if (scores[index] > 60) { return true; }
	else { return false; }
}

int countPass(Dept& dept) { //복사생성자가 사라졌기때문에
							//주소 참조로 바꿔줌 
	int count = 0;
	for (int i = 0; i < dept.getSize(); i++) {
		if (dept.isOver60(i)) count++;
	}
	return count;
}

int main() {
	Dept com(10); //생성자 호출
	com.read(); //size만큼 입력 (여기서는 10)
	int n = countPass(com); //call by reference
	cout << "60점 이상은" << n << "명" << endl;
}