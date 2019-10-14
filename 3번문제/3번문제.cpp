#include <iostream>
using namespace std;

class Dept {
	int size; //���� ����
	int* scores; //���� �迭 ������ ����
public:
	Dept(int size) { //���� ȣ���ϴ� �Լ�.
		this->size = size; //�Ű������� �޾ƿ� size�� �� ��ü �� ������ ����.
		scores = new int[size]; //scores �迭�� size��ŭ ����.
	}
	Dept(Dept& dept); //������ ȣ���ϴ� �Լ�.
	~Dept();//�Ҹ��� 
	int getSize() { return size; } //size�� ������.
	void read(); 
	bool isOver60(int index); 
};
Dept::Dept(Dept& dept) { //���� ������
	this->size = dept.size; //dept�� size�� �� ��ü�� size�� ����.
	this->scores = new int[dept.size]; //scores�迭 �� ����.
	for (int i = 0; i < this->size; i++) { //dept�� ��ü ���ҵ� �ű�.
		this->scores[i] = dept.scores[i]; //���� ����.
	}
}
Dept::~Dept(){}

void Dept::read() { //�Է��Լ� ����.
	cout << size << "�� ���� �Է�>> "; //size��ŭ �Է¹ޱ�
	for (int i = 0; i < this->size; i++) { 
		cin >> scores[i];
	}
}

bool Dept::isOver60(int index) {//60�̻��� ��� true�� ����
		if (scores[index] > 60) { return true; }
		else { return false; }
}

int countPass(Dept dept) { //60�̻��� ��� true -> count ����
	int count = 0;
	for (int i = 0; i < dept.getSize(); i++) {
		if (dept.isOver60(i)) count++;
	}
	return count;
}

int main() {
	Dept com(10); //������ ȣ��
	com.read(); //size��ŭ �Է� (���⼭�� 10)
	int n = countPass(com); //call by reference
	cout << "60�� �̻���" << n << "��" << endl;
}