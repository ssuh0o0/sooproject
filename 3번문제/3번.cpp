#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

class Game { //게임 클래스 생성

	int random[3]; //3개의 랜덤수를 받을 배열 생성
	bool isTrue = true; //true일때 계속 시작.
	int isEnter = 0; //엔터칠때를 감지하는 변수
public:
	void game(string* player) { //게임 함수 생성
		while (isTrue) { //isTrue==true일 경우
			for (int i = 0; i < 2; i++) { //player 2명 
				cout << "\n";
				cout << player[i] << ":  <Enter>" << endl; //엔터 칠 플레이어 출력
				isEnter = getch(); //엔터 칠 경우
				cout << "                    ";
				for (int i = 0; i < 3; i++) {
					random[i] = rand() % 3; //랜덤으로 세개의 수 입력됨 0-2
					cout << random[i] << "    "; //랜덤 수 출력
				}
				if (random[0] == random[1] && random[1] == random[2]) { //세개의 수가 모두 같다면
					cout << player[i] << "님 승리!"; //player 1 or 2 승리
					isTrue = false; //while문 종료
				}
				else cout << "아쉽군요!"; //세 수가 같지 않을 경우 출력
				isEnter = getch(); //엔터치면 다음 턴으로 넘어감
			}

		}
	}
};

int main() {
	string player[2]; //플레이어 2명 받을 배열 생성
	Game G; //게임클래스 생성자

	cout << "****** 갬블링 게임을 시작합니다. ******" << endl;
	cout << "첫번째 선수 이름 >> "; //선수 정보 입력
	cin >> player[0];
	cout << "두번째 선수 이름 >> ";
	cin >> player[1];
	G.game(player); //game함수 실행.
}