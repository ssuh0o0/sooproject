#include <iostream>
using namespace std;

char &find(char a[], char c, bool&success) { 
	for (int i = 0; i < sizeof(a); i++) { //a�迭 ������ ��ŭ �ݺ�.
		if (a[i] == c) { //c�� ��.
			success = true; //success�� true�� ����.
			return a[i]; //���ϰ� (����)
		}
	}
	return *a;
}

int main() {
	char s[] = "Mike"; 
	bool b = false; 
	char& loc = find(s, 'M', b);
	if (b == false) { //ã�� ���Ұ��
		cout << "M�� �߰��� �� ����" << endl;
		return 0;
	}
	loc = 'm'; //ã�� �κп� m���� ��ü
	cout << s << endl;
}