#include <iostream>
#include <string>
using namespace std;

class Person {
	string name; //�̸� ��Ʈ�� ���� ����
	string tel;  //��ȣ ���� ����
public:
	string getName() { return name; } //�̸� �Լ� ����
	string getTel() { return tel; } //��ȣ �Լ� ����
	void set(string name, string tel) { //�̸��� ��ȭ��ȣ �Ű������� �޾ƿ�.
		this->name = name;        //�� ��ü �� name�� tel�� ����
		this->tel = tel;
	}
};


int main() {
	Person *p = new Person[3]; //������ Ŭ���� ����.
	char name[50]; //�̸� �迭 ����
	char tel[50];  //��ȣ �迭 ����
	char searchN[50]; //ã�� ��� �̸� ����
	cout << "�̸��� ��ȭ ��ȣ�� �Է����ּ���" << endl;
	for (int i = 0; i < 3; i++) { //���3���� �̸��� ��ȣ �Է¹ޱ�
		cout << "��� " << i+1<<">>"; 
		cin >> name>>tel;
		p[i].set(name,tel);
	}
	cout << "��� ����� �̸��� "; 
	for (int i = 0; i < 3; i++) { //3���� �̸� ���.
		cout<< p[i].getName()<<" ";
	}
	cout << "\n";
	cout << "��ȭ��ȣ�� �˻��մϴ�. �̸��� �Է��ϼ���>>"; 
	cin >> searchN; //�̸��� �˻�

	for (int i = 0; i < 3; i++) { //�̸��� �´� ��ȭ��ȣ ���
		if (searchN == p[i].getName())
			cout << p[i].getTel()<< endl;
	}
}