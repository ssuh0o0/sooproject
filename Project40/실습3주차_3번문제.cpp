#include <iostream>
using namespace std;

float Haeri = 0;
float Meter = 0;
int Feet = 0;
int Mile = 0;
int Knot = 0;
float Kilo = 0;

int HtoM() {
	cout << "몇 해리인지 입력하세요 : ";
	cin >> Haeri;
	Meter = Haeri * 1852;
	cout << Haeri << "해리는 " << Meter << "미터 입니다.";
	return 0;
}

int MtoH() {
	cout << fixed;
	cout.precision(7);

	cout << "몇 미터인지 입력하세요 : ";
	cin >> Meter;
	Haeri = Meter * 0.5399568;
	cout << Meter << "미터는 " << Haeri << "해리 입니다.";
	return 0;
}

int FtoM() {
	cout << fixed;
	cout.precision(4);

	cout << "몇 피트인지 입력하세요 : ";
	cin >> Feet;
	Meter = Feet * 0.3048;
	cout << Feet << "피트는 " << Meter << "미터 입니다.";
	return 0;
}

int MtoM() {
	cout << "몇 마일인지 입력하세요 : ";
	cin >> Mile;
	Meter = Mile * 1852;
	cout << Mile << "마일은 " << Meter << "미터 입니다.";
	return 0;
}

int KtoK() {
	cout << fixed;
	cout.precision(4);

	cout << "몇 노트인지 입력하세요 : ";
	cin >> Knot;
	Kilo = Knot * 0.0006;
	cout << Knot << "노트은 " << Kilo << "킬로 입니다.";
	return 0;
}

int main() {
	cout << "원하는 연산을 선택하세요" << endl;
	cout << "1. 해리를 미터로 변환" << endl;
	cout << "2. 미터를 해리로 변환" << endl;
	cout << "3. 피트를 미터로 변환" << endl;
	cout << "4. 마일을 미터로 변환" << endl;
	cout << "5. 노트를 킬로미터퍼시로 변환" << endl;
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



