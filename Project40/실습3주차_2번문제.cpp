#include <iostream>
using namespace std;

int Mscore(int *score) {
	int tmp = 0;

	for (int i = 0; i < 5; i++) {
		for (int j = i + 1; j < 5; j++) {
			if (*(score + i) < *(score + j)) {
				tmp = *(score + i);
				*(score + i) = *(score + j);
				*(score + j) = tmp;
			}
		}
	}
	return *score;
}
int main() {
	cout << "������ �Է¹޽��ϴ�." << endl;
	
	int score[5][5];
	for (int i = 0; i < 5; i++) {
		cout << i+1 << "��° ������ �Է����ּ��� : ";
		cin >> score[i][0];
	}
	for (int i = 0; i < 5; i++) {
		score[0][i] = i + 1;
	}

	Mscore(*score);
	
	for (int i = 0; i < 5; i++) {
		cout << score[i][0] << "�� " << score[0][i] << "��" << endl;
	}
}
