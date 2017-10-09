// lab_2.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <string>
#include <iostream>

int ifer(std::string v, std::string b);
int switcher(char n, char m);

int ifer(std::string v, std::string b)
{
	if (v == "1")
	{
		if (b == "1")
			std::cout << "��� �����: ���� ��������� � �������.\n";
		else if (b == "0")
			std::cout << "��� �����: ���� ��������� ��� ������.\n";
		else
			std::cout << "������!\n";
	}
	else if (v == "2")
	{
		if (b == "1")
			std::cout << "��� �����: ���� ����� � �������.\n";
		else if (b == "0")
			std::cout << "��� �����: ���� ����� ��� ������.\n";
		else
			std::cout << "������!\n";
	}
	else if (v == "3")
	{
		if (b == "1")
			std::cout << "��� �����: ���� �������� � �������.\n";
		else if (b == "0")
			std::cout << "��� �����: ���� �������� ��� ������.\n";
		else
			std::cout << "������!\n";
	}
	else if (v == "4")
	{
		if (b == "1")
			std::cout << "��� �����: ��� ������ � �������.\n";
		else if (b == "0")
			std::cout << "��� �����: ��� ������ ��� ������.\n";
		else
			std::cout << "������!\n";
	}
	else if (v == "5")
	{
		if (b == "1")
			std::cout << "��� �����: ��� ������� � �������.\n";
		else if (b == "0")
			std::cout << "��� �����: ��� ������� ��� ������.\n";
		else
			std::cout << "������!\n";
	}
	else
		std::cout << "������!\n";
	return 0;

}

int switcher(char n, char m)
{
	switch (n)
	{
	case '1':
	{
		switch (m)
		{
		case '1':
			std::cout << "��� �����: ���� ��������� � �������.\n";
			break;
		case '0':
			std::cout << "��� �����: ���� ��������� ��� ������.\n";
			break;
		default:
			std::cout << "������!\n";
		}
	}
	break;
	case '2':
	{
		switch (m)
		{
		case '1':
			std::cout << "��� �����: ���� ����� � �������.\n";
			break;
		case '0':
			std::cout << "��� �����: ���� ����� ��� ������.\n";
			break;
		default:
			std::cout << "������!\n";
		}
	}
	break;
	case '3':
	{
		switch (m)
		{
		case '1':
			std::cout << "��� �����: ���� �������� � �������.\n";
			break;
		case '0':
			std::cout << "��� �����: ���� �������� ��� ������.\n";
			break;
		default:
			std::cout << "������!\n";
		}
	}
	break;
	case '4':
	{
		switch (m)
		{
		case '1':
			std::cout << "��� �����: ��� ������ � �������.\n";
			break;
		case '0':
			std::cout << "��� �����: ��� ������ ��� ������.\n";
			break;
		default:
			std::cout << "������!\n";
		}
	}
	break;
	case '5':
	{
		switch (m)
		{
		case '1':
			std::cout << "��� �����: ��� ������� � �������.\n";
			break;
		case '0':
			std::cout << "��� �����: ��� ������� ��� ������.\n";
			break;
		default:
			std::cout << "������!\n";
		}
	}
	break;
	default:
		std::cout << "������!\n";
	}

	return 0;
}


int main()
{
	setlocale(LC_ALL, "Russian");

	char var = 'y';

	while (var == 'y' || var == 'Y')
	{
		std::cout << "������� ��������� ��������� ��� ��������� ������: switch ��� if\n";
		std::string oper;
		std::cin >> oper;

		if (oper == "switch")
		{
			char x;
			char y;
			std::cout << "�� ������� �������� switch.\n������� ��� �������:\n1 - ���� ���������; 2 - ���� �����; 3 - ���� ��������; 4 - ��� ������; 5 - ��� �������\n";
			std::cin >> x;
			std::cout << "�������� �����?\n0-���; 1-��\n";
			std::cin >> y;
			switcher(x, y);
		}
		else if (oper == "if")
		{
			std::string nap;
			std::string sah;
			std::cout << "�� ������� �������� if.\n������� ��� �������:\n1 - ���� ���������; 2 - ���� �����; 3 - ���� ��������; 4 - ��� ������; 5 - ��� �������\n";
			std::cin >> nap;
			std::cout << "�������� �����?\n0-���; 1-��\n";
			std::cin >> sah;
			ifer(nap, sah);
		}
		else
			std::cout << "������ ��������� ���.\n";

		std::cout << "������ ����� ����� �������?\nY ��� y - ��; N ��� n - ���.\n";
		std::cin >> var;
		std::cout << std::endl;
	}


	return 0;
}