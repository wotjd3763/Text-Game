#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Check
{
public:
	Check() {}
	void it()
	{
		int random; //����
		int chance; //��ȸ
		int num; //�Է��� ����
		int first; //���� ���� (�ּ�)
		int last; //���� ���� (�ִ�)

		srand(time(NULL)); //����
		chance = 5;
		first = 1;
		last = 100;
		random = rand() % last + first; //1���� 100���� ���� ����
		cout << "<<<<<<<<<<< ��/�ٿ� ���� >>>>>>>>>>" << endl;
		cout << first << "���� " << last << "������ ������ ���� �� �ϳ��� �������� �������ϴ�." << endl;
		cout << "�� " << chance << "���� ��ȸ�� ������ �� �ȿ� ���ڸ� ���߽ʽÿ�." << endl;
		cout << "0�� �Է��ϸ� ������ �����մϴ�." << endl;
		while ( chance < 6 && chance > 0 ) //��ȸ�� 0���� ũ�� 6���� ���� ���ȸ� �ݺ�
		{
			cout << "���ڸ� �Է��ϼ��� : ";
			cin >> num; //���� �Է�
			cout << endl;
			cout << endl;
			if (num == 0)
			{
				cout << "������ �����մϴ�." << endl;
				exit(1);
			}
			else if (num<first || num>last) //�Է��� ���ڰ� ������ ��� ��
				cout << "�Է��Ͻ� ���ڰ� �����ȿ� ���ԵǾ� ���� �ʽ��ϴ�." << endl;
			else
			{
				if (num == random) //�Է��� ���ڿ� ������ ��ġ�� ��
				{
					cout << "�¸��߽��ϴ�!!! ������ : "<< random << " �Դϴ�." << endl;
					cout << endl;
					exit(1);
				}
				else if (num > random) //�Է��� ���ڰ� �������� Ŭ ��
				{
					chance--; //Ʋ�� �� ���� ��ȸ�� 1�� ����
					cout << "�ٿ�! ���� �Ʒ��� �����Դϴ�." << endl;
					cout << "���� Ƚ���� : " << chance << "��" << endl;
					cout << endl;
					cout << endl;
				}
				else if (num < random) //�Է��� ���ڰ� �������� ���� ��
				{
					chance--;
					cout << "��! ���� ���� �����Դϴ�." << endl;
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
	Check check;
	check.it();
}