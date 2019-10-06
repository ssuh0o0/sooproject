#include <iostream>
using namespace std;

int Dorder(int *num) {
	int tmp = 0;
	for (int i = 0; i < 10; i++) {
		for (int j = i+1; j < 10; j++) {
			if (*(num + i) < *(num + j)) {
				tmp = *(num + i);
				*(num + i) = *(num + j);
				*(num + j) = tmp;
			}
		}
	}
	return num[10];
}

int main() {
	int num[10] = {};
	for (int i = 0; i < 10; i++) {
		cin >> num[i];
	}
	Dorder(num);

	for(int i = 0; i < 10; i++) {
		cout << num[i]<<" ";
	}
}


