#ifndef ROLE_H
#define ROLE_H

#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include "windows.h"
#include "goods.h"

using namespace std;

class man
{
public:
	man() {}
	void creat_m(int l, int s, int d, int m, int e, string n);
	void creat_p(int l, int s, int d, int a, int m, int e, int lv, string n, int t);

	string getname()
	{
		return name;
	}

	/*ս��*/
	int battle(man NPC);             //ս��
	void win(man npc);                //װ������
	void lv_up(man npc);              //����
	int using_agility(int d);         //����

									  /*����*/
	void equip_weapon(int num);       //��Ʒʹ��
	void equip_weapon(Goods goods);
	void getgoods(Goods &a);          //�����Ʒ
	void losegoods(int num);          //ʧȥ��Ʒ
	void showgoods();                 //չʾ����
	void showequip();                 //չʾװ��
	void showrole();                  //��������


									  /*�̵�*/
	void shopping(man k);
	void buy(Goods *sth);
	void creat_s(Goods g[]);

	/*��Ϸ�ж�*/
	int getkillnumber()
	{
		return killnumber;
	}
	int getenternumber()
	{
		return enternumber;
	}
	void pluskillnumber(int a)
	{
		killnumber += a;
	}
	void plusenternumber(int a)
	{
		enternumber += a;
	}
	//private:
public:
	int HP;                           //����
	int present_HP;                   //��������
	int strength;                     //����
	int present_strength;             //�ӵ��󹥻�
	int denfence;                     //����
	int present_denfence;             //�Ӽ׺����
	int agility;                      //����
	int Lv;                           //�ȼ�
	int experience[3];                //����
	int money;                        //��Ǯ
	string name;
	int type;                         //�������ͣ�1.ˮ 2.�� 3.ľ��

	Goods *item[10];                  //����
	Goods *equip1;
	Goods *equip2;                    //װ��

	int killnumber;                   //��ɱBOSS��Ŀ
	int enternumber;                  //�������ⷿ�����
};

void man::creat_m(int l, int s, int d, int m, int e, string n)
{
	HP = l;
	present_HP = l;
	strength = s;
	denfence = d;
	money = m;
	experience[0] = e;
	name = n;
}

void man::creat_p(int l, int s, int d, int a, int m, int e, int lv, string n, int t)
{
	HP = l;
	present_HP = HP;
	strength = s;
	present_strength = strength;
	denfence = d;
	present_denfence = denfence;
	agility = a;
	money = m;
	for (int i = 0; i < 3; i++)
		experience[i] = e;
	Lv = lv;
	name = n;
	type = t;
	for (int i = 0; i<10; i++)
	{
		item[i] = NULL;
	}
	equip1 = NULL;
	equip2 = NULL;
	killnumber = 0;
	enternumber = 0;
}

/*��������*/
void man::lv_up(man npc)
{
	if (Lv < 3)
	    experience[Lv] = experience[Lv - 1] + npc.experience[0] - Lv * 10;
	Lv++;
	if (type == 1)               //ˮ������
	{
		HP = HP + 2;
		present_HP = HP;
		strength = strength + 1;
		denfence = denfence + 3;
	}
	else if (type == 2)          //�������
	{
		HP = HP + 1;
		present_HP = HP;
		strength = strength + 3;
		denfence = denfence + 2;
	}
	else                         //ľ������
	{
		HP = HP + 3;
		present_HP = HP;
		strength = strength + 2;
		denfence = denfence + 1;
	}
}
/*��������*/
int man::using_agility(int d)
{
	int n;
	srand(time(0));
	n = rand() % 30;
	if (n < 3)
	{
		cout << "�������˺�" << endl;
		d = 0;
	}
	return d;
}
/*ս��*/
int man::battle(man npc)
{
	cout << endl;
	cout << "����" << npc.name << "��ʼս��" << endl;
	while (present_HP != 0 && npc.HP != 0)
	{
		int choice;
		cout << "�������ֵ" << present_HP << "/" << HP << endl;
		cout << "                 " << npc.name << "������ֵ" << npc.HP << endl << endl;
		cout << "��������Ļغϣ����ѡ���ǣ�" << endl << endl;
		cout << "1.����             2.����" << endl << endl;
		cin >> choice;

		do
		{
			if (choice == 2)
			{
				return 3;
				break;
			}
			else if (choice == 1)
			{
				int damge;
				damge = present_strength - npc.denfence;
				if (damge < 0)
					damge = 0;
				npc.HP = npc.HP - damge;
				cout << "���" << npc.name << "�����" << damge << "���˺�" << endl << endl;
				break;
			}
			else if (choice != 1 && choice != 2)
			{
				cout << "������ѡ��" << endl;
				cin >> choice;
			}
		} while (1);
		if (npc.HP <= 0)                           //սʤnpc
		{
			cout << "��սʤ��" << npc.name << "����ý�Ǯ" << npc.money << "�;���" << npc.experience[0] << endl << endl;
			money = money + npc.money;
			pluskillnumber(1);
			if (experience[Lv - 1] + npc.experience[0] < Lv * 10)
				experience[Lv - 1] = experience[Lv - 1] + npc.experience[0];
			else
				lv_up(npc);
			return 1;
		}
		else
		{
			int damge;
			damge = npc.strength - present_denfence;
			damge = using_agility(damge);          //�����ж�
			if (damge < 0)
				damge = 0;
			if (present_HP - damge > 0)
			{
				present_HP = present_HP - damge;
				cout << npc.name << "���������" << damge << "���˺�" << endl << endl;
			}
			else
			{
				cout << npc.name << "���������" << damge << "���˺�" << endl;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
				cout << "�㱻����ˣ�" << endl;
				cout << "��Ϸ����" << endl;
				return 0;
				break;
			}
		}
		system("pause");
		system("cls");
	}
	return 1;
}

/*װ������*/
void man::win(man npc)
{
	Goods sword;
	Goods amor;
	sword.assignment("ʥ��", "�����Ѿõ�ʥ�ӵ�в���˼�������", 12, 0, 0, 80, 5);
	amor.assignment("ʥ��", "�����Ѿõ�ʥ�ӵ�в���˼�������", 0, 10, 0, 80, 2);
	if (npc.name == "dragen")
	{
		cout << "������dragen�����װ��ʥ����" << endl;
		getgoods(sword);
	}
	else if (npc.name == "tiger" || npc.name == "snake" || npc.name == "dog")
	{
		int n;
		srand(time(0));
		n = rand() % 100;
		if (n < 50)
		{
			cout << "������" << npc.name << "�����װ��ʥ�ף�" << endl;
			getgoods(amor);
		}
	}
}

/*��Ʒʹ��*/
void man::equip_weapon(int num)
{
	if (item[num] == NULL)
	{
		cout << "�޷�ʹ��" << endl;
	}
	else
	{

		if (item[num]->getadd_attack()>0)
			present_strength = strength + item[num]->getadd_attack();
		if (item[num]->getadd_defence()>0)
			present_denfence = denfence + item[num]->getadd_defence();
		present_HP = present_HP + item[num]->getadd_HP();
		if (present_HP > HP)
		{
			present_HP = HP;
		}
		if (item[num]->getnumber() >= 0 && item[num]->getnumber() <= 2)
		{
			equip1 = item[num];
		}
		if ((item[num]->getnumber() >= 3 && item[num]->getnumber() <= 5) || item[num]->getnumber() == 9)
		{
			equip2 = item[num];
		}
		if (item[num]->getnumber() >= 6 && item[num]->getnumber() <= 8)
		{
			item[num] = NULL;
		}
	}
}
void man::equip_weapon(Goods goods)
{
	if (goods.getadd_attack()>0)
		present_strength = strength + goods.getadd_attack();
	if (goods.getadd_defence()>0)
		present_denfence = denfence + goods.getadd_defence();

	if (goods.getnumber() >= 0 && goods.getnumber() <= 2)
	{
		equip1 = &goods;
	}
	if ((goods.getnumber() >= 3 && goods.getnumber() <= 5) || goods.getnumber() == 9)
	{
		equip2 = &goods;
	}
}
/*�����Ʒ*/
void man::getgoods(Goods &a)
{
	for (int i = 0; i<10; i++)
	{
		if (item[i] == NULL)
		{
			item[i] = &a;
			break;
		}
	}
}
/*ʧȥ��Ʒ*/
void man::losegoods(int num)
{
	money = money + item[num]->getprice() / 2;
	item[num] = NULL;
}
/*չʾ����*/
void man::showgoods()
{
	int choice = 1;
	while (choice)
	{

		cout << endl << "����״��:" << endl;
		int num = 0;
		for (int i = 0; i<10; i++)
		{
			if (item[i] != NULL)
			{
				cout << num++ << " " << item[i]->getname() << endl;
			}
			if (item[i] == NULL)
			{
				cout << num++ << " " << "��" << endl;
			}
		}
		cout << "ѡ�����" << endl << "1.ʹ��װ�� 2.�鿴�������� 3.����װ�� 0.�˳�" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			cout << "ѡ��װ��" << endl;
			int num1;
			cin >> num1;
			equip_weapon(num1);
			showequip();
			break;
		}
		case 2:
		{
			cout << "ѡ��װ��" << endl;
			int num2;
			cin >> num2;
			item[num2]->display();
			break;
		}
		case 3:
		{
			cout << "ѡ��װ��" << endl;
			int num3;
			cin >> num3;
			losegoods(num3);
			break;
		}
		}
		system("pause");
		system("cls");
	}
}
/*չʾװ�����Ѿ�������*/
void man::showequip()
{
	cout << endl << "װ��״��" << endl;
	if (equip1 != NULL)
	{
		cout << "���ߣ�" << equip1->getname() << endl;
	}
	else if (equip1 == NULL)
	{
		cout << "���ߣ���" << endl;
	}
	if (equip2 != NULL)
	{
		cout << "������" << equip2->getname() << endl;
	}
	else if (equip2 == NULL)
	{
		cout << "��������" << endl;
	}
}
/*�������*/
void man::showrole()
{
	cout << "�������" << endl;
	cout << "������" << name << endl;
	cout << "�ȼ���" << Lv << endl;
	cout << "������" << present_HP << "/" << HP << endl;
	cout << "������" << present_strength << endl;
	cout << "������" << present_denfence << endl;
	cout << "���ݣ�" << agility << endl;
	cout << "��Ǯ��" << money << "��" << endl;
	system("pause");
	system("cls");
}
/*��������*/
void creat_monster(man men[])
{
	/*����ֵ����������������Ǯ�����飬����*/
	men[0].creat_m(20, 4, 3, 4, 1, "mouse");
	men[1].creat_m(21, 6, 3, 6, 2, "chicken");
	men[2].creat_m(22, 5, 3, 6, 3, "rabbit");
	men[3].creat_m(25, 6, 3, 8, 4, "pig");
	men[4].creat_m(30, 7, 4, 6, 4, "bull");
	men[5].creat_m(28, 8, 4, 8, 4, "sheep");
	men[6].creat_m(32, 7, 4, 8, 5, "horse");
	men[7].creat_m(28, 8, 5, 10, 7, "monkey");
	men[8].creat_m(45, 10, 5, 10, 8, "dog");
	men[9].creat_m(48, 11, 5, 12, 7, "snake");
	men[10].creat_m(50, 12, 5, 12, 8, "tiger");
	men[11].creat_m(54, 13, 6, 14, 10, "dragen");
	men[12].creat_m(150, 15, 7, 0, 0, "big boss");

}
/*��������*/
void creat_player(man &player)
{
	cout << "��ѡ����Ľ�ɫ���ԣ�" << endl;
	cout << "1.ˮϵ���߷�����" << endl;
	cout << "2.��ϵ���߹�����" << endl;
	cout << "3.ľϵ����������" << endl;
	int choice;
	cin >> choice;

	/*�����������ֵ�����������������ݣ�Ǯ�����飬�ȼ������֣����ࣩ*/

	do
	{
		if (choice == 1)
			player.creat_p(20, 4, 3, 3, 50, 0, 1, "ŷ����", 1);
		else if (choice == 2)
			player.creat_p(18, 6, 2, 3, 50, 0, 1, "ŷ����", 2);
		else if (choice == 3)
			player.creat_p(22, 5, 1, 3, 50, 0, 1, "ŷ����", 3);
		else
			cout << "�������" << endl;
	} while (choice != 1 && choice != 2 && choice != 3);
	cout << "�����ɹ�" << endl;
	system("pause");
	system("cls");
}
/*��������*/
void man::creat_s(Goods g[])
{
	for (int i = 0; i < 10; i++)
		item[i] = NULL;
	getgoods(g[0]);
	getgoods(g[1]);
	getgoods(g[2]);
	getgoods(g[3]);
	getgoods(g[4]);
	getgoods(g[5]);
	getgoods(g[6]);
	getgoods(g[7]);
	getgoods(g[8]);
}
/*������Ʒ*/
void man::buy(Goods *sth)
{
	int m = money - sth->getprice();
	if (m >= 0)
	{
		getgoods(*sth);
		cout << "���׳ɹ���������" << sth->getname() << "!" << endl;
		money = m;
	}
	else
		cout << "���Ǯ������" << endl;
}
/*���̵�*/
void man::shopping(man k)
{
	cout << "�������У�" << endl;
	for (int i = 0; k.item[i] != NULL; i++)
	{
		cout << i + 1 << ".";
		cout << endl;
		k.item[i]->display();
		cout << endl;
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
	cout << "��ӵ�н�Ǯ" << money << "��" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
	cout << "0.�˳�" << endl;
	cout << "����Ҫʲô��" << endl;
	int n = 1;
	while (n != 0)
	{
		cin >> n;
		switch (n)
		{
		case 0:
			break;
		case 1:
			buy(k.item[0]);
			cout << "�㻹��Ҫʲô��" << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
			cout << "��ӵ�н�Ǯ" << money << "��" << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
			break;
		case 2:
			buy(k.item[1]);
			cout << "�㻹��Ҫʲô��" << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
			cout << "��ӵ�н�Ǯ" << money << "��" << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
			break;
		case 3:
			buy(k.item[2]);
			cout << "�㻹��Ҫʲô��" << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
			cout << "��ӵ�н�Ǯ" << money << "��" << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
			break;
		case 4:
			buy(k.item[3]);
			cout << "�㻹��Ҫʲô��" << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
			cout << "��ӵ�н�Ǯ" << money << "��" << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
			break;
		case 5:
			buy(k.item[4]);
			cout << "�㻹��Ҫʲô��" << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
			cout << "��ӵ�н�Ǯ" << money << "��" << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
			break;
		case 6:
			buy(k.item[5]);
			cout << "�㻹��Ҫʲô��" << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
			cout << "��ӵ�н�Ǯ" << money << "��" << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
			break;
		case 7:
			buy(k.item[6]);
			cout << "�㻹��Ҫʲô��" << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
			cout << "��ӵ�н�Ǯ" << money << "��" << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
			break;
		case 8:
			buy(k.item[7]);
			cout << "�㻹��Ҫʲô��" << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
			cout << "��ӵ�н�Ǯ" << money << "��" << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
			break;
		case 9:
			buy(k.item[8]);
			cout << "�㻹��Ҫʲô��" << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
			cout << "��ӵ�н�Ǯ" << money << "��" << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
			break;
		default:
			cout << "����������" << endl;
			break;
		}
	}
	cout << "�ټ���" << endl;
}

#endif
// ROLE_H
