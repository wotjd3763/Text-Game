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
		char random; //����
		int chance; //��ȸ
		char alpha; //���ĺ�
		char first; //���� ���� (�ּ�)
		char last; //���� ���� (�ִ�)

		srand(time(NULL));
		chance = 5; //��ȸ�� �ټ���
		first = 'A';
		last = 'Z';
		random = rand() % 26 + 65; //���ĺ� A���� Z���� ���� ����
		cout << "<<<<<<<<<<< ��/�ٿ� ���� >>>>>>>>>>" << endl;
		cout << first << "���� " << last << "������ ������ ���ĺ� �� �ϳ��� �������� �������ϴ�." << endl;
		cout << "�� " << chance << "���� ��ȸ�� ������ �� �ȿ� ���ĺ��� ���߽ʽÿ�." << endl;
		cout << "����! ���ĺ��� ������ �빮�ڷ� �Է��ؾ� �������� �����˴ϴ�." << endl;
		cout << "�ҹ��� a�� �Է��ϸ� ������ �����մϴ�." << endl;
		while (chance < 6 && chance > 0) //��ȸ�� 0���� ũ�� 6���� ���� ���ȸ� �ݺ�
		{
			cout << "���ĺ��� �Է��ϼ��� : ";
			cin >> alpha; //���ĺ� �빮�� �Է�
			cout << endl;
			cout << endl;
			if (alpha == 'a') //�ҹ��� a�Է½� ����
			{
				cout << "������ �����մϴ�." << endl;
				exit(1);
			}
			else if (alpha<first || alpha>last) //�Է��� ���ĺ��� ������ �Ѿ�� ��
				cout << "�Է��Ͻ� ���ĺ��� �����ȿ� ���ԵǾ� ���� �ʽ��ϴ�." << endl;
			else
			{
				if (alpha == random) //�Է��� ���ĺ��� ������ ��ġ�� ��
				{
					cout << "�¸��߽��ϴ�!!! ������ : " << random << " �Դϴ�." << endl;
					cout << endl;
					exit(1);
				}
				else if (alpha > random) //�Է��� ���ĺ��� �������� Ŭ ��
				{
					chance--;
					cout << "�ٿ�! ���� �Ʒ��� ���ĺ��Դϴ�." << endl;
					cout << "���� Ƚ���� : " << chance << "��" << endl;
					cout << endl;
					cout << endl;
				}
				else if (alpha < random) //�Է��� ���ĺ��� �������� ���� ��
				{
					chance--;
					cout << "��! ���� ���� ���ĺ��Դϴ�." << endl;
					cout << "���� Ƚ���� : " << chance << "��" << endl;
					cout << endl;
					cout << endl;
				}
				else
					cout << endl;
			}
		}
		cout << "�й��߽��ϴ�... ������ : " << random << " �Դϴ�." << endl;
		cout << endl;
		exit(1);
	}
};
int main()
{
	English english;
	english.that();
}