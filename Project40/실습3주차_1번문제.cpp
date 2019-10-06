#include <iostream>
using namespace std;

int Min_score(int *score);
int Max_score(int *score);

int main() {
	
	int score[7];
	for (int i = 1; i <= 7; i++) {
		cout << i << "��° ������ ������ �Է��ϼ��� : ";
		cin >> score[i - 1]; 
		cout << "\n";
	}
	int max = Max_score(score);
	int min = Min_score(score);

	int tot = 0;
	for (int i = 0; i < 7; i++) {
		tot += score[i];
	}
	cout << fixed;
	cout.precision(2);
	float aver = 0;
	aver = (tot - max - min) / 5.00;
	cout << "���� ������ �ְ��� " << max << "���� ������ " << min << "���� �� ����" << tot << "���� ����� " << aver << "�� �Դϴ�.";
}

int Min_score(int *score) {
	int min = score[0];
	for (int i = 0; i < 7; i++) {
		if (min > score[i]) {
			min = score[i];
		}
	}
	return min;
}

int Max_score(int *score) {
	int max = score[0];
	for (int i = 0; i < 7; i++) {
		if (max < score[i]) {
			max = score[i];
		}
	}
	return max;
}