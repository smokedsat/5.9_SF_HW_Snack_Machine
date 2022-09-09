#include "Class.h"
#include <iostream>
using namespace std;

Snack::Snack(string Name, int Price, int Count, int Weight)
{

	name = Name;
	if (Price > 0)
	{
		price = Price;
	}
	else
	{
		price = -Price;
	}
	if (Count > 0)
	{
		count = Count;
	}
	else
	{
		count = -Count;
	}
	if (Weight > 0)
	{
	weight = Weight;
	}
	else
	{
		weight = -Weight;
	}
}

// �������� ���������� � ���������
void Snack::getSnack()
{
	cout << endl;
	cout << "�������� �����:" << name << endl;
	cout << "����: " << price << endl;
	cout << "���������� � ������: " << count << endl;
	cout << "��� ���������: " << weight << endl;
}

void addSnack(Snack & that, int addCount)
{
	if (addCount < 0)
	{
		addCount = -addCount;
	}
		int countOld = that.count;
		that.count = that.count + addCount;
		if (that.count > 10000)
		{
			cout << endl << " � ������� ����������� " << (10000 - countOld) << " ����� ����������. �������� ���������� " << -(10000 - that.count) << " " << that.name << endl;
			that.count = 10000;
		}
		else
		{
			cout << endl << " ��������� " << addCount << " " << that.name << endl;
			cout << endl << " ���������� " << that.name << " = " << that.count;
		}
}

void buySnack(Snack& that, int buyCount)
{
	if (buyCount < 0)
	{
		buyCount = -buyCount;
	}
	if (that.count < buyCount)
	{
		cout << endl << " � �������� ��� "<< buyCount <<" ����������, �� ������ ������ " << that.count<< " " << that.name << endl;
		addSnack(that, 50);
	}
	else
	{
		that.count = that.count - buyCount;
		cout << endl << " �� ������ " << buyCount << " " << that.name << endl;
		cout << endl << " ���������� " << that.name << " = " << that.count;
	}
	if (that.count < 50)
	{
		addSnack(that, 100);
	}
}

//������ ��� ���������
void Snack::setWeight(int Weight)
{
	if (Weight > 0)
	{
		weight = Weight;
	}
	else
	{
		weight = -Weight;
	}
}

int Snack::getWeight()
{
	cout << "��� ��������� " << name << ":" << weight << "�����" << endl;
	return weight;
}

void Snack::setName(string Name)
{
	name = Name;
}

string Snack::getName()
{
	cout << "�������� ���������: " << name << endl;
	return name;
}

void Snack::setPrice(int Price)
{
	if (Price > 0)
	{
		price = Price;
	}
	else
	{
		price = -Price;
	}
}

int Snack::getPrice()
{
	cout << "���� �� �����: " << price << " ���." << endl;
	return price;
}

