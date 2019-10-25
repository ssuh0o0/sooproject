#include <iostream>
using namespace std;
int add(int* num1,int size,int* num2=NULL) { 
	int sum = 0;

	for (int i = 0; i < size; i++) { //size만큼 반복.
		sum += num1[i]; //배열의 원소 다 더하기
		if(num2!=NULL) sum += num2[i]; //디폴트 매개변수 아닐경우
		                               //배열 원소 다 더하기
	}
	return sum; //sum을 리턴
}
int main() {
	int a[] = { 1,2,3,4,5 }; 
	int b[] = { 6,7,8,9,10 };
	int c = add(a, 5); 
	int d = add(a, 5, b);

	cout << c << endl;
	cout << d << endl;
}