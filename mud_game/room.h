#ifndef ROOM_H
#define ROOM_H

#include<iostream>
#include<string>
#include<stdlib.h>
#include"windows.h"
#include"role.h"

using namespace std;

class ROOM
{
public:
	ROOM() {};
	ROOM(int number, string name);
	void XuanXiang();
	void Miaoshu();

	string name;
	int ifboss = 1;
	int number = 1;

};

ROOM::ROOM(int number, string name)
{
	this->number = number;
	this->name = name;
}

void ROOM::XuanXiang()
{
	cout << "1.�۲�   2.�Ĵ�����   " << endl;
	int choice;
	cin >> choice;
	if (choice == 1 || choice == 2)
	{
		cout << "���·���,������뿪" << endl;

	}
}

//��������
void ROOM::Miaoshu()
{
	if (number == 1)
		cout << endl << "������˷��䣬���������ķ����У�һֻ�������Ͻ�ɫë��������ӳ�����������������" << endl
		<< "�ɡ��߶�ʱ��������Ȼ����������һ˫����ɫ����ͫ�������㡣��֪������Ӧ�þ���ʮ��" << endl
		<< "Ԫ���е������ˣ�����������ò����Щ���ء�" << endl;

	if (number == 2)
		cout << endl << "������˷��䣬��Ƶĵ���ɢ���ڷ���ĸ�������һ�鲼����̦����ʯ�ϣ���������������" << endl
		<< "����������������ʺ�ļ��ڱ���Բ��β�����޶��ˣ������������������ϼ�ȷʵ�ǲ���" << endl
		<< "�ģ����������㿴����ʯ�ϴԺύ���ץ��ʱ����������ʲô��" << endl;

	if (number == 3)
		cout << endl << "������˷��䣬��Ȼ����һƬ��ѩ�����������е㾪�棬����ܿ���˽��·����õֵ�һ��" << endl
		<< "������һֻѩ�ó������������ǰ����֪���������î���ˣ�ֻҪ����������������ʹ��" << endl
		<< "����һ�������о��񣬲�Ҫ���⡣" << endl;

	if (number == 4)
		cout << endl << "������˷��䣬����ӳ�������ı���λ�ڷ������е�������Ծ�Ļ�����ͬ��ľ��飬��Ʈ" << endl
		<< "ҡ֮�󣬷׷׻㼯������Ľ��䣬һֻС��ſ���������Ѫ˿��˫����Щ����η�壬����" << endl
		<< "����Ļ㼯��С�������Խ��Խ���¡�" << endl;

	if (number == 5)
		cout << endl << "������˷��䣬һͷ�����ƣ�ò�Ƴ�е�ţ���ڶ����㣬������ʮ�ָߴ������ȴ������" << endl
		<< "ʮ���ѹ����������˫��������һ��ţ���ƺ���ʱ����嵽�����ǰ���㲻��������Щ��" << endl
		<< "���������Ͻ�����ʲô�ˡ�" << endl;

	if (number == 6)
		cout << endl << "������˷��䣬�������Ի谵�ķ�����㿴����δ��˫Ŀ��������Ŀ�ĵ��ڷ�������" << endl
		<< "����������׼������ǰ��ʱ��δ���Ȼֱ�����ض����㣬�ɺ��˫����������˼���������" << endl
		<< "�ƺ������Ҫ����һ����ս��" << endl;

	if (number == 7)
		cout << endl << "������˷��䣬�̲ݴ����ķ���������ǰһ������Զ����һƥ�������㱼�ڶ�����˻������" << endl
		<< "�������𺳣���Ȼֻ�ǹ���ȴչ�ֳ����������֮�ƣ��������ӿ���������ƣ���֪����" << endl
		<< "����Ҫȫ���Ը���Ӧ��Σ�֡�" << endl;

	if (number == 8)
		cout << endl << "������˷��䣬����ľ�����ķ����һֻ������ּ䷭�ɣ���������Ӱ��ͬһ����ɫ����" << endl
		<< "�磬����ʯ֮�䣬����ֱ��������Ŷ�������Ͻ�����㿪���͵ش���һ�����������㿪" << endl
		<< "һ���ʯ����Ͻ��������ӣ�ȫ���ע��" << endl;

	if (number == 9)
		cout << endl << "������˷��䣬�ոս��룬��㷢�ֻ����ںڵľ�Ȯſ���ſڲ�Զ������Һ���ſ��Ĵ�ڲ�" << endl
		<< "�ϵ�������ͭ�����۾��ǲ�����˸��Σ�յĹ�â�������Сţ����һ���ľ�Ȯ���㲻����" << endl
		<< "˿�����⣬����Ҫȫ���Ը���" << endl;

	if (number == 10)
		cout << endl << "������˷��䣬�������ʪ�ķ�����㿴����һ������ɫ���ߣ������������ɫ��û�д�" << endl
		<< "�����κ����õ����룬�����Ƕ��ߵ�˻˻������о�ͷƤ���顣˫Ŀ�����������޳���������" << endl
		<< "�㾡�������ž��룬С������" << endl;

	if (number == 11)
		cout << endl << "������˷��䣬���ܵ�һ����ѹ������������Ϣ���޻�����һ����ʯ�ϣ���Ȼ����û������" << endl
		<< "���㷢�����������Ǵ����ɺ���۾�����ƺ��������Լ����������δ������������һ��" << endl
		<< "��Һ�������������䱸������" << endl;

	if (number == 12)
		cout << endl << "������˷��䣬����ӳ�������ľ���������Ŀ�ɿڴ��������Ȼ֮ǰ�����û�����ۼ�����" << endl
		<< "����֪�����Ǹ����ڼ��£����Ծ��ޱ����ϵĴ��ڣ�������������һ��������֪�����㽫��" << endl
		<< "�پ޴����ս�������������ɹ���" << endl;

	if (number == 13)
		cout << endl << "���ʮ��Ԫ��������ħ���ķ�ӡ֮�ء�" << endl << endl
		<< "�㣺ħ����ƻ���ӡ����Ҫ���Ѷ�����Ϊ�����������ձؽ���������ѹ��" << endl << endl
		<< "�㣺������񲻾�����ħ�겻��" << endl << endl;

	if (number == 14)
		cout << endl << "�������һ�������ҳ�����͸¶�Ź�����ưܷ��䣬�����������û��ʲô����" << endl << endl;
}

int enternumber = 1;

void setROOM(ROOM room[])
{
	ROOM room0(1, "�Ӽ�");
	room[0] = room0;

	ROOM room1(2, "�ϼ�");
	room[1] = room1;

	ROOM room2(3, "î��");
	room[2] = room2;

	ROOM room3(4, "����");
	room[3] = room3;

	ROOM room4(5, "���");
	room[4] = room4;

	ROOM room5(6, "δ��");
	room[5] = room5;

	ROOM room6(7, "���");
	room[6] = room6;

	ROOM room7(8, "���");
	room[7] = room7;

	ROOM room8(9, "���");
	room[8] = room8;

	ROOM room9(10, "�ȼ�");
	room[9] = room9;

	ROOM room10(11, "����");
	room[10] = room10;

	ROOM room11(12, "����");
	room[11] = room11;

	ROOM room12(13, "����ķ���");
	room[12] = room12;

	ROOM room13(14, "���صķ���");
	room[13] = room13;
}

int Comein = 0;

//ʼ�ڳ����� ѡ�񷿼�
int map(ROOM room[], man &player, man men[], Goods goods[])
{

	cout << endl << "����Ҫȥ���" << endl << endl;
	cout << "1.�Ӽ�   2.�ϼ�    3.î��   4.����   5.���  6.δ��" << endl
		<< "7.���   8.���    9.���  10.�ȼ�  11.���� 12.����" << endl
		<< "13.����ķ���    14.���صķ���   " << endl << endl
		<< "0.����" << endl;

	int i = 1;
	int Choice;
	cin >> Choice;

	system("pause");
	system("cls");

	if (Choice >= 1 && Choice < 13)
	{
		if (room[Choice - 1].ifboss == 1)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
			room[Choice - 1].Miaoshu();
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
			i = player.battle(men[Choice - 1]);
			if (i == 1)
			{
				room[Choice - 1].ifboss = 0;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
				cout << endl << endl << men[Choice - 1].getname() << "���������������������������ħ����ʱ������һ��֮����������Ҫ��˯��" << endl;
				cout << endl << endl << "����â����" << men[Choice - 1].getname() << "��ʧ�������Ұ��" << endl << endl;
			}
			if (i == 3)
			{
				cout << "����Ķ���" << endl << endl;
			}
		}
		else
		{
			cout << "�տ���Ҳ�ķ���" << endl << endl;
		}
	}

	else if (Choice == 13 && player.getkillnumber() == 12)
	{
		room[Choice - 1].Miaoshu();
		i = player.battle(men[Choice - 1]);      //���귵�������棡����������������������������������������������
	}

	else if (Choice == 13 && player.getkillnumber() != 12)
	{
		cout << endl << "�������������ޱȹ��죬�����������·�����������Ͻ��뿪�˷��䡣" << endl << endl;
	}

	else if (Choice == 14 && player.getenternumber() == 2 && (player.getkillnumber() == 6 || player.getkillnumber() == 4 || player.getkillnumber() == 1))
	{
		cout << "���ٴν����˷���" << endl;
		cout << "��ϲ�����˷��ȣ���Ʒ�ѷ��뱳��" << endl;
		player.getgoods(goods[9]);
		player.plusenternumber(1);
	}

	else if (Choice < 1 || Choice>14)
	{
		cout << "������ҳ��" << endl;
	}

	else
	{
		room[Choice - 1].Miaoshu();
		room[Choice - 1].XuanXiang();
		player.plusenternumber(1);
	}
	return i;
}

#endif // ROOM_H
