#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Landmark
{
public:
	Landmark() {};
	void quiz()
	{
		string a[] = { "��ȭ��", "�����ǿ��Ż�", "�����强", "�ƻ����", "��", "����ž", "�ݷμ���", "Ÿ������", "����ũ��" }; //���帶ũ �迭
		string b[] = { "�ѱ�", "�̱�", "�߱�", "�Ϻ�", "����", "������", "��Ż����", "�ε�", "����Ʈ" }; //����迭
		string answer; //��� ���ڿ�
		int r; //���� ����
		int num; //�����Է� ����
		int correct = 0; //���� Ƚ��
		srand(time(NULL));
		cout<<"=======������ ������ ���帶ũ�� �ִ� ���� �̸��� ������.======="<<endl;
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
					int r = rand() % 9; //��ȩ���� ���ڿ� �� �������� ���
					cout << endl;
					cout << a[r] << "��(��) �ִ� �����?";
					cout << " ";
					cin >> answer; //��� �Է�
					if (answer == "�ٽ�")
						break;
					if (b[r] == answer)
					{
						cout << endl;
						cout << endl;
						cout << "���� !!" << endl;
						correct++; //������ �� ���� ����
						if (correct > 2) //correct�� 2���� Ŭ �� �� ���� �̻� ������ ���
						{
							cout << endl;
							cout << endl;
							cout << "�����մϴ�. ��������� ���� ����߽��ϴ�." << endl;
							exit(1); //���
						}
					}
					else
					{
						cout << endl;
						cout << endl;
						cout << "����!! ��ŵ� ������ ?! ...(�̹� ������ �������Դϴ�.)" << endl;
						exit(1); //����
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
	Landmark landmark;
	landmark.quiz();
}