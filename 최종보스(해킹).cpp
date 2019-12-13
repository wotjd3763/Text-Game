#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Professor
{
public:
	Professor() {};
	void villain()
	{
		int myHp = 600, myAttack = 30, myMp = 10; //�÷��̾��� ü��, ���ݷ�, ������
		int bossHp = 500, bossAttack = 60, bossMp = 5; //���� ü��, ����, ������
		int myTurn = 0, bossTurn = 0, gameRandom = 0; //������, ������, ���� �� ������� ����
		srand(time(NULL));
		while (myHp > 0 && bossHp > 0) //�÷��̾�� ���� ü���� 0���� Ŭ ���� �ݺ�
		{
			system("cls");
			cout << "*******************************************************" << endl;
			cout << "����������� ��ǻ�͸� ��ŷ�Ͽ� ������ �����϶�!" << endl;
			cout << endl;
			cout << "<���� ������ �������� �������?>" << endl;
			cout << endl;
			cout << endl;
			cout << "�츮�� ü�� : " << myHp << "                " << "�������� ü�� : " << bossHp << endl;
			cout << "�츮�� ���ݷ� : " << myAttack << "               " << "�������� ���ݷ� : " << bossAttack << endl;
			cout << "�츮�� ������ : " << myMp << "               " << "�������� ������ : " << bossMp << endl;
			cout << "1. ����" << endl;
			cout << "2. ȸ��" << endl;
			cout << "3. ��ȭ" << endl;
			cout << "4. ȸ��" << endl;
			cout << "5. �ʻ��" << endl;
			cout << endl;
			cout << "�� �ʻ��� �������� 50�̻� �𿩾� ��밡���ϸ� ȸ�ǰ� �Ұ����մϴ�." << endl;
			cout << "�� ����, ��ȭ, �������� 50�Ʒ��� ���� �ʻ�⸦ ����ϸ� �������� 10�� �����˴ϴ�." << endl;
			cout << "�� ���ݽ� 20%�� Ȯ���� �߰��� �������� �� �� �ֽ��ϴ�.." << endl;
			system("pause");
			cout << endl;
			cout << "�ϳ��� �����ϼ��� : ";
			cin >> myTurn; //�޴� ����
			cout << endl;
			bossTurn = rand() % 3 + 1; //�� ������ 3���� 1 ����
			gameRandom = rand() % 5; //�߰����� Ȯ�� ����
			if (myTurn > 5)
			{
				cout << "�Է� ����" << endl;
				system("pause");
			}
			else
			{
				switch (myTurn) //�÷��̾� ����
				{
				case 1: //����
					if (gameRandom != 1) //gameRandom�� ������ 1�� �ƴ� ��
					{
						cout << "[����] �赿���� ��ŷ�� �õ��մϴ�." << endl;
						if (bossTurn == 2) //���� ȸ�Ǹ� �������� ��
						{
							break; //���ʳѱ�
						}
						else
						{
							bossHp -= myAttack; //�� ü�� ����
						}
						cout << endl;
						cout << endl;
						myMp += 10; //������ ����
						break;
					}
					else //gameRandom�� ������ 1�� �� �� 20%Ȯ���� �߰�����
					{
						cout << "[Ư������] �赿���� ��ϸӽ��� ������ ��û�մϴ�." << endl;
						if (bossTurn == 2)
						{
							break;
						}
						else
						{
							bossHp -= (myAttack + 10); //�� ü�� ���ݷ¿��� 10���� �� ����
						}
						cout << endl;
						cout << endl;
						myMp += 10; //����������
						break;
					}
				case 2: //ȸ��
					cout << "[ȸ��] ���缺�� ��ȭ���� �Ǽ��մϴ�." << endl;
					cout << endl;
					cout << endl;
					break;
				case 3: //��ȭ
					cout << "[��ȭ] �հ���� ������ �ڵ��Ƿ��� 10 ����մϴ�." << endl;
					myAttack += 10; //���ݷ� ���
					cout << endl;
					cout << endl;
					myMp += 10; //������ ����
					break;
				case 4: //ȸ��
					cout << "[ȸ��] ���ÿ��� ������ �ҽ��ڵ带 �����մϴ�." << endl;
					myHp += 30; //ü�� ���
					cout << endl;
					cout << endl;
					break;
				case 5: //�ʻ��
					cout << "[�ʻ��] ��μ��� ���̷��� ���α׷��� �غ��մϴ�." << endl;
					if (myMp >= 50) //�������� 50�̻� �� ���� ��밡��
					{
						cout << "<����> ��������������������������" << endl;
						myMp -= 50; //������ 50 ����
						bossHp -= (myAttack * 3); //���� ���ݷ��� 3���� ���� �� ü�¿��� ����
					}
					else
					{
						cout << "[������ ����] ���̷����� �� �ϼ��Ǿ� ������ ����մϴ�." << endl;
						myMp += 5; //������ ����
					}
					cout << endl;
					cout << endl;
					break;
				}
				cout << "===============================================" << endl;
				system("pause");
				cout << endl;
				cout << endl;
				switch (bossTurn) //�� ����
				{
				case 1: //����
					cout << "[����] �������� ��ŷ�� �õ��մϴ�." << endl;
					if (myTurn == 2) //�÷��̾ ȸ�Ǹ� ���� ���� ��
					{
						cout << endl;
						cout << "<��? �̰� ����?>" << endl;
						myHp -= 0;
						cout << endl;
						cout << endl;
						break;
					}
					else //�÷��̾ ȸ�Ǹ� ������ �ٸ� �޴��� �������� ��
					{
						cout << endl;
						cout << "<������!!>" << endl;
						myHp -= bossAttack; //�÷��̾� ü�� ����
						bossMp += 5; //���� ������ ����
						cout << endl;
						cout << endl;
						break;
					}
				case 2: //ȸ��
					cout << "[ȸ��] �������� ��ŷ�� ���ҽ��ϴ�." << endl;
					cout << endl;
					cout << "<�ϵ� �Ƿ����� ������ �̱� �� ����?>" << endl;
					cout << endl;
					cout << endl;
					break;
				case 3: //�ʻ��
					cout << "[�ʻ��] �������� ��� ���α׷��� �غ��մϴ�." << endl;
					if (bossMp >= 50) //�������� 50�̻� �� ���� ��밡��
					{
						cout << "<����> Door�� ���� ������ ��ź�� �ɾ����." << endl;
						cout << endl;
						cout << endl;
						bossMp -= 50; //�� ������ 50����
						myHp -= (bossAttack * 3); //�÷��̾��� ü�¿��� ���� ���� ���ݷ��� 3���� ���� ����
					}
					else //�������� 50���� ���� ��
					{
						cout << "[������ ����] ����� �� �ϼ��Ǿ� ������ ����մϴ�." << endl;
						cout << endl;
						cout << "<��ٷ��� ������ �� ���� �� �����Ұž�.>" << endl;
						bossMp += 5; //������ ����
						cout << endl;
						cout << endl;
					}
					break;
				}
				system("pause");
				if (bossHp <= 0) //���� ü���� 0���� �� ��
				{
					cout << "�١١١١� ��μ� ���� ������ ������ �����߽��ϴ�. �١١١١�" << endl;
					cout << endl;
					break;
				}
				else if (myHp <= 0) //�÷��̾��� ü���� 0���� �� ��
				{
					cout << "�ӢӢӢӢ� �ǹ����� �������� ������ ��? ����� ���� �� ���� �����Ƿ� �� �ӢӢӢӢ�" << endl;
					cout << endl;
					break;
				}
			}
		}
	}
};
int main()
{
	Professor professor;
	professor.villain();
}