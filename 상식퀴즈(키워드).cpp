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
		string a[] = { "vector, deque, set, list �� ������ �����̳ʰ� �ƴѰ���?", "��� ������ ������ ������ ���� �����ڴ�?", 
			"�����Լ��� ������ �� ���Ǵ� Ű�����?", "�� Ȥ�� �������� ��ȯ�ϴ� �ڷ�����?", "private�� protected�� ������ �� �ִ� ������ �ִ� ����?" }; //���� �迭
		string b[] = { "set", "public", "virtual", "bool", "friend" }; //Ű���� �迭
		string answer;
		int r;
		int num;
		int correct = 0;
		srand(time(NULL));
		cout << "=======������ ���� ���� ���ٰ� ����? �� ���� �̻� ����� �����.=======" << endl;
		cout << endl;
		cout << endl;
		for (;;)
		{
			cout << "���� : 1, ���� : 2 >>";
			cout << " ";
			cin >> num; //���� �Է�
			if (num == 1)
			{
				for (;;)
				{
					int r = rand() % 5; //�ټ� ������ �������� ���
					cout << endl;
					cout << a[r];
					cout << " ";
					cin >> answer; //��� �Է�
					if (answer == "�ٽ�") //"�ٽ�" �Է� �� ����, ���� ���ð���
						break;
					if (b[r] == answer) //����� ���� ��
					{
						cout << endl;
						cout << endl;
						cout << "���� !!" << endl;
						correct++; //������ �� ���� ����
						if (correct > 2)
						{
							cout << endl;
							cout << endl;
							cout << "���θ� ���� �ؿԳ� ����?" << endl;
							exit(1);
						}
					}
					else //����� Ʋ�� ��
					{
						cout << endl;
						cout << endl;
						cout << "������ ���� ���ٰ� �ߴµ��� ���θ� ���ؿԾ�? ���� ������ ���α׷� 3���� ������." << endl;
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
				cout << "�Է� ����" << endl;
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