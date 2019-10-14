#include <iostream>
#include <string>
using namespace std;

class Accumulator {
	int num; //���� ����
public:
	Accumulator& add(int num); //���� ������ �Լ� ����.
	Accumulator(int num); 
	int get() { //���� ����� ������ �Լ� ����.
		return this->num;
	}
};
Accumulator::Accumulator(int num) {//���� ���� ȣ��
	this->num = num;
}
Accumulator& Accumulator::add(int num) { //������ ���� ȣ��
	this->num += num;
	return *this; //������ ����
}

int main() {
	Accumulator acc(10); //10�� �Ű������� �� ������ ����
	acc.add(5).add(6).add(7); //add�Լ� (���� ����)
	cout << acc.get() << endl; //����� ���
}