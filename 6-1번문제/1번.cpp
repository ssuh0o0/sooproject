#include <iostream>
#include <string>

using namespace std;

class str {
private: 
	string a; //��Ʈ�� ������� ���� ����.
	bool isExit = true; //�� or ���� ���� ����.
public:
	void reverse() { //�ٲٴ� �Լ� ����.
		while (isExit) { //isExit�� true�� ���
			cout << " >>";
			getline(cin, a); //a�� ��Ʈ���� �Է¹ޱ�
			if (a == "exit") { //exit�� ������
				isExit = false; //while�� ����������
				break; 
			}
			int size = a.length(); //a�� ���� �Ҵ�ޱ�
			int half = size / 2; //a�� ���� �� �Ҵ� (���� �������� ������ ������
			for (int i = 0; i < half; i++) {
				char tmp = a[size - 1 - i]; //tmp���� ������ �� �� ���� �ٲ��ֱ�
				a[size - 1 - i] = a[i];
				a[i] = tmp;
			}
			cout << a << endl; //��Ʈ�� ���
		}
	}
};

int main() {
	str s; //Ŭ���� ȣ��

	cout << "�Ʒ��� �� ���� �Է��ϼ���. (exit�� �Է��ϸ� �����մϴ�.)" << endl;
	s.reverse(); //Ŭ���� �Լ� ȣ��
}