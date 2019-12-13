#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class English
{
public:
	English() {}
	void that()
	{
		char random; //난수
		int chance; //기회
		char alpha; //알파벳
		char first; //난수 범위 (최소)
		char last; //난수 범위 (최대)

		srand(time(NULL));
		chance = 5; //기회는 다섯번
		first = 'A';
		last = 'Z';
		random = rand() % 26 + 65; //알파벳 A부터 Z까지 난수 설정
		cout << "<<<<<<<<<<< 업/다운 게임 >>>>>>>>>>" << endl;
		cout << first << "부터 " << last << "까지의 범위의 알파벳 중 하나가 랜덤으로 정해집니다." << endl;
		cout << "총 " << chance << "번의 기회가 있으니 그 안에 알파벳을 맞추십시오." << endl;
		cout << "주의! 알파벳은 무조건 대문자로 입력해야 정답으로 인정됩니다." << endl;
		cout << "소문자 a를 입력하면 게임을 종료합니다." << endl;
		while (chance < 6 && chance > 0) //기회가 0보다 크고 6보다 작을 동안만 반복
		{
			cout << "알파벳을 입력하세요 : ";
			cin >> alpha; //알파벳 대문자 입력
			cout << endl;
			cout << endl;
			if (alpha == 'a') //소문자 a입력시 종료
			{
				cout << "게임을 종료합니다." << endl;
				exit(1);
			}
			else if (alpha<first || alpha>last) //입력한 알파벳이 범위를 넘어갔을 때
				cout << "입력하신 알파벳이 범위안에 포함되어 있지 않습니다." << endl;
			else
			{
				if (alpha == random) //입력한 알파벳이 난수와 일치할 때
				{
					cout << "승리했습니다!!! 정답은 : " << random << " 입니다." << endl;
					cout << endl;
					exit(1);
				}
				else if (alpha > random) //입력한 알파벳이 난수보다 클 때
				{
					chance--;
					cout << "다운! 좀더 아래의 알파벳입니다." << endl;
					cout << "남은 횟수는 : " << chance << "번" << endl;
					cout << endl;
					cout << endl;
				}
				else if (alpha < random) //입력한 알파벳이 난수보다 작을 때
				{
					chance--;
					cout << "업! 좀더 위의 알파벳입니다." << endl;
					cout << "남은 횟수는 : " << chance << "번" << endl;
					cout << endl;
					cout << endl;
				}
				else
					cout << endl;
			}
		}
		cout << "패배했습니다... 정답은 : " << random << " 입니다." << endl;
		cout << endl;
		exit(1);
	}
};
int main()
{
	English english;
	english.that();
}