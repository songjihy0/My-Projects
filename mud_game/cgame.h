#include<iostream>
#include<stdlib.h>
#include "windows.h"
#include <fstream>
using namespace std;

void start()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	cout << endl
		<< "         0                                                                        000000000000 " << endl
		<< "         0                                            0000000000                  0             " << endl
		<< "         0                   00000000000                                          0  000000000   " << endl
		<< "         0                                                                        0               " << endl
		<< " 00000000000000000                                 00000000000000000              0  000000000         " << endl
		<< "         0                                               0   0                   0   0  0           " << endl
		<< "         0                00000000000000000              0   0                  0    0   0   0        " << endl
		<< "         0                                              0    0                 0     0     0        " << endl
		<< "         0                                             0     0                0      0 0     0           " << endl
		<< "         0                                           0        0 0 0 0        0       0         0                  " << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	cout << " ���������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������� " << endl
		<< " �����еĵƻ���������������ڻؼҵ�·�ϣ��ƾ�������Щ��������վ����칦�磬������������������ϲ��|" << endl
		<< " ����ŷ���ƣ�������һ���������ڶ��߻��죬�㻷����Χ��ȴʼ���Ҳ����Ǹ���������ˡ��㲻���Գ�������|" << endl
		<< " ���Ȼ�����˻þ�����ʱ������������������������ǡ����㲻��һ㶣��ʵ�������ô���ת˲�䣬��|" << endl
		<< " ����������ת���� ʧȥ����ʶ.��ӻ������������㷢����ǰ����һ�����ߣ���������ѯ�ʣ��������������|" << endl
		<< " ���������ǰ���������ʿ�ɣ��������ż�����������֪������һ������                              |" << endl
		<< " ���������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������� " << endl;
	system("pause");
	system("cls");
}
void beijing()
{
	cout << "����������˵���ʢ����ʥ�Ի����̻����ˡ�" << endl << endl;
	cout << "��۱������⣬���˵�����ʮ��Ԫ������ʱ��" << endl << endl;
	cout << "����������۶��£�ʱʱ���棬Ȼ������������������а������˻㼯���ճ�һ������������ħ����������ʮ��Ԫ����ӡħ��Է���Σ��������" << endl << endl;
	cout << "����̰���޾�����ħ�������� �ջ�����֮�£�ħ����Ⱦʮ��Ԫ�����ǣ���ӡ�᧿�Σ���콵���Σ���ʿ��ս��ʮ��Ԫ��������ָ����ǣ��������ħ�����������Ǭ����" << endl << endl;
}
void gonglue()
{
	cout << "û�������Ĺٷ���������" << endl << endl;
	cout << "ֱ�Ӹɻ�������" << endl << endl;
	cout << "1.�Ƽ���Ұ�˳����սǰʮ�������䣬������������ߵ�Ȱ��" << endl << endl;
	cout << "2.��ʮ�����������յ�" << endl << endl;
	cout << "3.��ʮ�ĸ�����ʱһ���ʵ����㽫������������������ħ���ĵ��" << endl << endl;
	cout << "4.����û�������������ɻ�òʵ����������ǻ��Ǳ��ٵ�ʮ�ĸ������˷�ʱ����" << endl << endl;
	cout << "5.�򲻹�����ѽ" << endl << endl;
}
void vectory()
{
	cout << "���֮������ħ�ʮ��Ԫ������ħ��" << endl << endl;
	cout << "ʮ��Ԫ������ʮ�����⣬������Ƶ�������ѹ��а�" << endl << endl;
	cout << "ʮ��Ԫ������ֵ�أ���ѹħ����ո�ʮ��Ԫ���������࣬��ʮ��Ԫ�����꣬�Դ�Ϊ��Ф��" << endl << endl;
	cout << "�˺��ഫΪ��Ф�ꡣ" << endl << endl;
	cout << endl << endl;
	cout << "����Խ��Խģ������ƤԽ��Խ�ء�" << endl << endl;
	cout << "������ʱ���Լ�����ɳ���ϣ�ͷ��������Щ���ء�" << endl << endl;
	cout << "ԭ��ֻ������һ���ΰ������Ц��ʲôʱ����Ҳ����������ֵ��Ρ�" << endl << endl;
	cout << "ŷ���ƻص��ң�׼������һ����Ϸ�����ֽ�����ʮ��Ԫ������" << endl << endl;
	cout << "�ս�" << endl << endl;
}
void defeat()
{
	cout << "��ʧ����" << endl << endl;
	cout << "û�д�˵�еĴ��Ѳ���" << endl << endl;
	cout << "û����������" << endl << endl;
	cout << "�����ô������" << endl << endl;
	cout << "����������������" << endl << endl;
	cout << "ƽ��һ������Ҹ��ɡ�������" << endl << endl;
	cout << "�ս�" << endl << endl;
}

void save(ROOM room[])
{
	ofstream file1("room.txt");
	for (int i = 0; i<14; i++)
	{
		file1 << room[i].ifboss;
	}
	file1.close();
}

void read(ROOM room[])
{
	int i, team;
	char a;
	ifstream file1("room.txt");
	for (i = 0; i<14; i++)
	{
		file1 >> a;
		team = a - '0';
		room[i].ifboss = team;
	}
	file1.close();

}
void save2(man &player, ROOM room[], Goods goods[])
{
	ofstream file2("role.txt");
	file2 << player.HP << endl;
	file2 << player.present_HP << endl;
	file2 << player.strength << endl;
	file2 << player.denfence << endl;
	file2 << player.Lv << endl;
	file2 << player.experience[0] << endl;
	file2 << player.experience[1] << endl;
	file2 << player.experience[2] << endl;
	file2 << player.money << endl;
	file2 << player.type << endl;
	file2 << player.killnumber << endl;
	file2 << player.enternumber << endl;
	if (player.item[0] != NULL)
	{
		file2 << player.item[0]->getnumber() << endl;
	}
	else
	{
		file2 << "99" << endl;
	}
	if (player.item[1] != NULL)
	{
		file2 << player.item[1]->getnumber() << endl;
	}
	else
	{
		file2 << "99" << endl;
	}
	if (player.item[2] != NULL)
	{
		file2 << player.item[2]->getnumber() << endl;
	}
	else
	{
		file2 << "99" << endl;
	}
	if (player.item[3] != NULL)
	{
		file2 << player.item[3]->getnumber() << endl;
	}
	else
	{
		file2 << "99" << endl;
	}
	if (player.item[4] != NULL)
	{
		file2 << player.item[4]->getnumber() << endl;
	}
	else
	{
		file2 << "99" << endl;
	}
	if (player.item[5] != NULL)
	{
		file2 << player.item[5]->getnumber() << endl;
	}
	else
	{
		file2 << "99" << endl;
	}
	if (player.item[6] != NULL)
	{
		file2 << player.item[6]->getnumber() << endl;
	}
	else
	{
		file2 << "99" << endl;
	}
	if (player.item[7] != NULL)
	{
		file2 << player.item[7]->getnumber() << endl;
	}
	else
	{
		file2 << "99" << endl;
	}
	if (player.item[8] != NULL)
	{
		file2 << player.item[8]->getnumber() << endl;
	}
	else
	{
		file2 << "99" << endl;
	}
	if (player.item[9] != NULL)
	{
		file2 << player.item[9]->getnumber() << endl;
	}
	else
	{
		file2 << "99" << endl;
	}
	if (player.equip1 != NULL)
	{
		file2 << player.equip1->getnumber() << endl;
	}
	else
	{
		file2 << "99" << endl;
	}
	if (player.equip2 != NULL)
	{
		file2 << player.equip2->getnumber() << endl;
	}
	else
	{
		file2 << "99" << endl;
	}
	file2.close();
}
void read2(man &player, ROOM room[], Goods goods[])
{

	char array1[20];
	int c;
	ifstream file2("role.txt");

	file2.getline(array1, 20);
	c = atoi(array1);
	player.HP = c;

	file2.getline(array1, 20);
	c = atoi(array1);
	player.present_HP = c;

	file2.getline(array1, 20);
	c = atoi(array1);
	player.strength = c;

	file2.getline(array1, 20);
	c = atoi(array1);
	player.denfence = c;

	file2.getline(array1, 20);
	c = atoi(array1);
	player.Lv = c;

	file2.getline(array1, 20);
	c = atoi(array1);
	player.experience[0] = c;

	file2.getline(array1, 20);
	c = atoi(array1);
	player.experience[1] = c;

	file2.getline(array1, 20);
	c = atoi(array1);
	player.experience[2] = c;

	file2.getline(array1, 20);
	c = atoi(array1);
	player.money = c;

	file2.getline(array1, 20);
	c = atoi(array1);
	player.type = c;

	file2.getline(array1, 20);
	c = atoi(array1);
	player.killnumber = c;

	file2.getline(array1, 20);
	c = atoi(array1);
	player.enternumber = c;

	file2.getline(array1, 20);
	c = atoi(array1);
	if (c != 99)
	{
		player.item[0] = &goods[c];
	}
	if (c == 99)
	{
		player.item[0] = NULL;
	}

	file2.getline(array1, 20);
	c = atoi(array1);
	if (c != 99)
	{
		player.item[1] = &goods[c];
	}
	if (c == 99)
	{
		player.item[1] = NULL;
	}

	file2.getline(array1, 20);
	c = atoi(array1);
	if (c != 99)
	{
		player.item[2] = &goods[c];
	}
	if (c == 99)
	{
		player.item[2] = NULL;
	}

	file2.getline(array1, 20);
	c = atoi(array1);
	if (c != 99)
	{
		player.item[3] = &goods[c];
	}
	if (c == 99)
	{
		player.item[3] = NULL;
	}

	file2.getline(array1, 20);
	c = atoi(array1);
	if (c != 99)
	{
		player.item[4] = &goods[c];
	}
	if (c == 99)
	{
		player.item[4] = NULL;
	}

	file2.getline(array1, 20);
	c = atoi(array1);
	if (c != 99)
	{
		player.item[5] = &goods[c];
	}
	if (c == 99)
	{
		player.item[5] = NULL;
	}

	file2.getline(array1, 20);
	c = atoi(array1);
	if (c != 99)
	{
		player.item[6] = &goods[c];
	}
	if (c == 99)
	{
		player.item[6] = NULL;
	}

	file2.getline(array1, 20);
	c = atoi(array1);
	if (c != 99)
	{
		player.item[7] = &goods[c];
	}
	if (c == 99)
	{
		player.item[7] = NULL;
	}

	file2.getline(array1, 20);
	c = atoi(array1);
	if (c != 99)
	{
		player.item[8] = &goods[c];
	}
	if (c == 99)
	{
		player.item[8] = NULL;
	}

	file2.getline(array1, 20);
	c = atoi(array1);
	if (c != 99)
	{
		player.item[9] = &goods[c];
	}
	if (c == 99)
	{
		player.item[9] = NULL;
	}

	file2.getline(array1, 20);
	c = atoi(array1);
	if (c != 99)
	{
		for (int k = 0; k<10; k++)
		{
			if (player.item[k] != NULL&&player.item[k]->getnumber() == c)
			{
				player.equip_weapon(k);
				break;
			}
		}
	}
	if (c == 99)
	{
		player.equip1 = NULL;
	}

	file2.getline(array1, 20);
	c = atoi(array1);
	if (c != 99)
	{
		for (int k = 0; k<10; k++)
		{
			if (player.item[k] != NULL&&player.item[k]->getnumber() == c)
			{
				player.equip_weapon(k);
				break;
			}
		}
	}
	if (c == 99)
	{
		player.equip2 = NULL;
	}

	file2.close();



}

