#include <iostream>
#include <string>
using namespace std;

string str;//�� ��ü���� ��ü������ ����ؾ� �ϴ� ����
class Buffer { //Buffer Ŭ���� 

public:
	void print() {// �Լ�print ����
		cout << str << endl; //����� str ���
	}
	Buffer(string st1) { //�Ű������� ���� string�� str�� ����.
		str = st1;
	}
};

Buffer& append(Buffer& buf, string st2) { 
	str += st2; //������ ����� string�� �Ű������� ���� st2�߰� ����.
	return buf; //������ �����ϴ� �Լ�
}

int main() {
	Buffer buf("Hello"); //������ ����
	Buffer& temp = append(buf, "Guys"); //�����ϴ� �����ڿ� append�Լ� ����
	temp.print(); //������ �� ���
	buf.print(); //���
}