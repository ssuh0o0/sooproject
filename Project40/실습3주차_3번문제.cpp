#include <iostream>
using namespace std;

float Haeri = 0;
float Meter = 0;
int Feet = 0;
int Mile = 0;
int Knot = 0;
float Kilo = 0;

int HtoM() {
	cout << "�� �ظ����� �Է��ϼ��� : ";
	cin >> Haeri;
	Meter = Haeri * 1852;
	cout << Haeri << "�ظ��� " << Meter << "���� �Դϴ�.";
	return 0;
}

int MtoH() {
	cout << fixed;
	cout.precision(7);

	cout << "�� �������� �Է��ϼ��� : ";
	cin >> Meter;
	Haeri = Meter * 0.5399568;
	cout << Meter << "���ʹ� " << Haeri << "�ظ� �Դϴ�.";
	return 0;
}

int FtoM() {
	cout << fixed;
	cout.precision(4);

	cout << "�� ��Ʈ���� �Է��ϼ��� : ";
	cin >> Feet;
	Meter = Feet * 0.3048;
	cout << Feet << "��Ʈ�� " << Meter << "���� �Դϴ�.";
	return 0;
}

int MtoM() {
	cout << "�� �������� �Է��ϼ��� : ";
	cin >> Mile;
	Meter = Mile * 1852;
	cout << Mile << "������ " << Meter << "���� �Դϴ�.";
	return 0;
}

int KtoK() {
	cout << fixed;
	cout.precision(4);

	cout << "�� ��Ʈ���� �Է��ϼ��� : ";
	cin >> Knot;
	Kilo = Knot * 0.0006;
	cout << Knot << "��Ʈ�� " << Kilo << "ų�� �Դϴ�.";
	return 0;
}

int main() {
	cout << "���ϴ� ������ �����ϼ���" << endl;
	cout << "1. �ظ��� ���ͷ� ��ȯ" << endl;
	cout << "2. ���͸� �ظ��� ��ȯ" << endl;
	cout << "3. ��Ʈ�� ���ͷ� ��ȯ" << endl;
	cout << "4. ������ ���ͷ� ��ȯ" << endl;
	cout << "5. ��Ʈ�� ų�ι����۽÷� ��ȯ" << endl;
	int ch;
	cin >> ch;
	switch (ch) {
	case 1: 
		HtoM();
		break;
	case 2:
		MtoH();
		break;
	case 3: 
		FtoM();
		break;
	case 4:
		MtoM();
		break;
	case 5:
		KtoK();
		break;
	}
}



