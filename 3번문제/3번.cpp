#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

class Game { //���� Ŭ���� ����

	int random[3]; //3���� �������� ���� �迭 ����
	bool isTrue = true; //true�϶� ��� ����.
	int isEnter = 0; //����ĥ���� �����ϴ� ����
public:
	void game(string* player) { //���� �Լ� ����
		while (isTrue) { //isTrue==true�� ���
			for (int i = 0; i < 2; i++) { //player 2�� 
				cout << "\n";
				cout << player[i] << ":  <Enter>" << endl; //���� ĥ �÷��̾� ���
				isEnter = getch(); //���� ĥ ���
				cout << "                    ";
				for (int i = 0; i < 3; i++) {
					random[i] = rand() % 3; //�������� ������ �� �Էµ� 0-2
					cout << random[i] << "    "; //���� �� ���
				}
				if (random[0] == random[1] && random[1] == random[2]) { //������ ���� ��� ���ٸ�
					cout << player[i] << "�� �¸�!"; //player 1 or 2 �¸�
					isTrue = false; //while�� ����
				}
				else cout << "�ƽ�����!"; //�� ���� ���� ���� ��� ���
				isEnter = getch(); //����ġ�� ���� ������ �Ѿ
			}

		}
	}
};

int main() {
	string player[2]; //�÷��̾� 2�� ���� �迭 ����
	Game G; //����Ŭ���� ������

	cout << "****** ���� ������ �����մϴ�. ******" << endl;
	cout << "ù��° ���� �̸� >> "; //���� ���� �Է�
	cin >> player[0];
	cout << "�ι�° ���� �̸� >> ";
	cin >> player[1];
	G.game(player); //game�Լ� ����.
}