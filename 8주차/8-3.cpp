#include <iostream>
using namespace std;

char &find(char a[], char c, bool&success) { 
	for (int i = 0; i < sizeof(a); i++) { //a배열 사이즈 만큼 반복.
		if (a[i] == c) { //c랑 비교.
			success = true; //success에 true값 대입.
			return a[i]; //리턴값 (글자)
		}
	}
	return *a;
}

int main() {
	char s[] = "Mike"; 
	bool b = false; 
	char& loc = find(s, 'M', b);
	if (b == false) { //찾지 못할경우
		cout << "M을 발견할 수 없다" << endl;
		return 0;
	}
	loc = 'm'; //찾은 부분에 m으로 대체
	cout << s << endl;
}