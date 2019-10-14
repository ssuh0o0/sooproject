#include <iostream>
#include <string>
using namespace std;

class Accumulator {
	int num; //변수 생성
public:
	Accumulator& add(int num); //참조 리턴할 함수 생성.
	Accumulator(int num); 
	int get() { //최종 결과값 리턴할 함수 생성.
		return this->num;
	}
};
Accumulator::Accumulator(int num) {//값에 의한 호출
	this->num = num;
}
Accumulator& Accumulator::add(int num) { //참조에 의한 호출
	this->num += num;
	return *this; //참조를 리턴
}

int main() {
	Accumulator acc(10); //10을 매개변수로 한 생성자 실행
	acc.add(5).add(6).add(7); //add함수 (참조 리턴)
	cout << acc.get() << endl; //결과값 출력
}