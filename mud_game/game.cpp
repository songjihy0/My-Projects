#include <iostream>

#include "goods.h"
#include "role.h"
#include "room.h"
#include "cgame.h"
using namespace std;

int main()
{

	start();

	Goods goods[10];
	initialize(goods);

	man monster[13];
	creat_monster(monster);
	man player;
	creat_player(player);

	man shop;
	shop.creat_s(goods);

	ROOM room[14];
	setROOM(room);


	int n = 1;
	int choice = 1;

	while (choice != 0 && n != 0 && player.getkillnumber() != 13)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		cout << endl;
		cout << "��ʿ�������ѡ��:" << endl << endl;
		cout << "1.�ƶ�\t2.����\t3.״̬\t4.װ��\t5.�̵�\t6.����\t7.����\t8.����\t9.����\t0.�˳�" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0:
			system("pause");
			system("cls");
			break;
		case 1:
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
			cout << "�����ƶ�" << endl;
			n = map(room, player, monster, goods);
			system("pause");
			system("cls");
			break;
		case 2:
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
			player.showgoods();
			break;
		case 3:
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
			player.showrole();
			break;
		case 4:
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
			player.showequip();
			system("pause");
			system("cls");
			break;
		case 5:
			player.shopping(shop);
			system("pause");
			system("cls");
			break;
		case 6:
			save(room);
			save2(player, room, goods);
			cout << "����ɹ�" << endl;
			system("pause");
			system("cls");
			break;
		case 7:
			read(room);
			read2(player, room, goods);
			cout << "��ȡ�ɹ�" << endl;
			system("pause");
			system("cls");
			break;
		case 8:
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
			beijing();
			system("pause");
			system("cls");
			break;
		case 9:
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
			gonglue();
			system("pause");
			system("cls");
			break;
		default:
			cout << "���������룡" << endl;
			system("pause");
			system("cls");
			break;
		}
	}
	if (player.getkillnumber() != 13)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		defeat();
	}
	if (player.getkillnumber() == 13)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
		vectory();
	}

	system("pause");

	return 0;
}
