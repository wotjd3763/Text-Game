#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Cplusplus
{
public:
	Cplusplus() {};
	void help()
	{
		string a[] = { "vector, deque, set, list 중 시퀀스 컨테이너가 아닌것은?", "모든 곳에서 접근이 가능한 접근 지정자는?", 
			"가상함수를 구현할 때 사용되는 키워드는?", "참 혹은 거짓만을 반환하는 자료형은?", "private나 protected에 접근할 수 있는 권한을 주는 것은?" }; //문제 배열
		string b[] = { "set", "public", "virtual", "bool", "friend" }; //키워드 배열
		string answer;
		int r;
		int num;
		int correct = 0;
		srand(time(NULL));
		cout << "=======교수가 오늘 퀴즈 본다고 했지? 세 문제 이상 맞춰야 통과야.=======" << endl;
		cout << endl;
		cout << endl;
		for (;;)
		{
			cout << "퀴즈 : 1, 종료 : 2 >>";
			cout << " ";
			cin >> num; //숫자 입력
			if (num == 1)
			{
				for (;;)
				{
					int r = rand() % 5; //다섯 문제중 랜덤으로 출력
					cout << endl;
					cout << a[r];
					cout << " ";
					cin >> answer; //답안 입력
					if (answer == "다시") //"다시" 입력 시 퀴즈, 종료 선택가능
						break;
					if (b[r] == answer) //답안이 맞을 때
					{
						cout << endl;
						cout << endl;
						cout << "정답 !!" << endl;
						correct++; //정답일 때 마다 증가
						if (correct > 2)
						{
							cout << endl;
							cout << endl;
							cout << "공부를 많이 해왔나 보네?" << endl;
							exit(1);
						}
					}
					else //답안이 틀릴 때
					{
						cout << endl;
						cout << endl;
						cout << "교수가 퀴즈 본다고 했는데도 공부를 안해왔어? 나온 문제로 프로그램 3개씩 만들어와." << endl;
						exit(1);
					}
				}
			}
			else if (num == 2)
			{
				break;
			}
			else
			{
				cout << endl;
				cout << endl;
				cout << "입력 오류" << endl;
				break;
			}
		}
	}
};
int main()
{
	Cplusplus cplusplus;
	cplusplus.help();
}