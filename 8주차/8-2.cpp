#include <iostream>
using namespace std;

int big(int a,int b,int c=100) {
	int max = a; //가장 큰 수를 a라고 하자.
	if (max < b) { //max와 b를 비교.
		max = b;
	}
	if (max > c) { //max와 최댓값 c 비교
		return c;
	}
	return max;
}
int main() {
	int x = big(3, 5); 
	int y = big(300, 60);
	int z = big(30, 60, 50);

	cout << x << ' ' << y << ' ' << z << endl;

}