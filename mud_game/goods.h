#ifndef GOODS_H
#define GOODS_H

#include <string>
using namespace std;
class Goods
{
private:
	string name;            //����
	string description;     //����
	int add_attack;         //������
	int add_defence;        //������
	int add_HP;             //����
	int price;              //��Ǯ
	int number;             //���
public:
	void assignment(string newname, string newdescription, int newadd_attack, int newadd_defence, int newadd_HP, int newprice, int newnumber);//��ֵ
	void display();//��ʾ����
	string getname();
	string getdescription();
	int getadd_attack();
	int getadd_defence();
	int getadd_HP();
	int getprice();
	int getnumber();
};
/*��Ʒ*/
void Goods::assignment(string newname, string newdescription, int newadd_attack, int newadd_defence, int newadd_HP, int newprice, int newnumber)
{
	name = newname;
	description = newdescription;
	add_attack = newadd_attack;
	add_defence = newadd_defence;
	add_HP = newadd_HP;
	price = newprice;
	number = newnumber;
}
/*��ʾ��Ʒ����*/
void Goods::display()
{
	cout << "���ƣ�" << name << endl;
	cout << "��飺" << description << endl;
	if (add_attack>0)
		cout << "������" << add_attack << endl;
	if (add_defence>0)
		cout << "������" << add_defence << endl;
	if (add_HP>0)
		cout << "�ָ�������" << add_HP << endl;
	cout << "��Ǯ��" << price << "��" << endl;
}
string Goods::getname()
{
	return name;
}
string Goods::getdescription()
{
	return description;
}
int Goods::getadd_attack()
{
	return add_attack;
}
int Goods::getadd_defence()
{
	return add_defence;
}
int Goods::getadd_HP()
{
	return add_HP;
}
int Goods::getprice()
{
	return price;
}
int Goods::getnumber()
{
	return number;
}

void initialize(Goods goods[])//���и�ֵ��ȷ����������
{
	goods[0].assignment("����", "��Ȼ�ǲ��ף���������Щ��������", 0, 2, 0, 10, 0);
	goods[1].assignment("����", "�������������ף����Ų��׵ķ���", 0, 5, 0, 20, 1);
	goods[2].assignment("ʥ��", "�����Ѿõ�ʥ�ӵ�в���˼�������", 0, 10, 0, 80, 2);
	goods[3].assignment("ľ��", "ƽƽ�������������������ʲô����", 5, 0, 0, 10, 3);
	goods[4].assignment("����", "���ú���������ɣ�ʮ�ַ���", 7, 0, 0, 20, 4);
	goods[5].assignment("ʥ��", "�����Ѿõ�ʥ�ӵ�в���˼�������", 12, 0, 0, 80, 5);
	goods[6].assignment("��Ѫɢ", "�򵥵�ҩ����в����Ч��", 0, 0, 5, 6, 6);
	goods[7].assignment("��ҩ", "����ҽʦ���ǻ۽ᾧ�����˱�ҩ", 0, 0, 10, 12, 7);
	goods[8].assignment("������", "���Ϲ��淽���ƶ��ɣ�����ʥҩ", 0, 0, 20, 24, 8);
	goods[9].assignment("����", "������۴͸�֮�����Ī��", 20, 0, 0, 200, 9);
}


#endif // GOODS_H
