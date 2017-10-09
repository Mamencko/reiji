// lab_2.cpp: определяет точку входа для консольного приложения.
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
			std::cout << "Ваш заказ: кофе американо с сахаром.\n";
		else if (b == "0")
			std::cout << "Ваш заказ: кофе американо без сахара.\n";
		else
			std::cout << "Ошибка!\n";
	}
	else if (v == "2")
	{
		if (b == "1")
			std::cout << "Ваш заказ: кофе латте с сахаром.\n";
		else if (b == "0")
			std::cout << "Ваш заказ: кофе латте без сахара.\n";
		else
			std::cout << "Ошибка!\n";
	}
	else if (v == "3")
	{
		if (b == "1")
			std::cout << "Ваш заказ: кофе эспрессо с сахаром.\n";
		else if (b == "0")
			std::cout << "Ваш заказ: кофе эспрессо без сахара.\n";
		else
			std::cout << "Ошибка!\n";
	}
	else if (v == "4")
	{
		if (b == "1")
			std::cout << "Ваш заказ: чай черный с сахаром.\n";
		else if (b == "0")
			std::cout << "Ваш заказ: чай черный без сахара.\n";
		else
			std::cout << "Ошибка!\n";
	}
	else if (v == "5")
	{
		if (b == "1")
			std::cout << "Ваш заказ: чай зеленый с сахаром.\n";
		else if (b == "0")
			std::cout << "Ваш заказ: чай зеленый без сахара.\n";
		else
			std::cout << "Ошибка!\n";
	}
	else
		std::cout << "Ошибка!\n";
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
			std::cout << "Ваш заказ: кофе американо с сахаром.\n";
			break;
		case '0':
			std::cout << "Ваш заказ: кофе американо без сахара.\n";
			break;
		default:
			std::cout << "Ошибка!\n";
		}
	}
	break;
	case '2':
	{
		switch (m)
		{
		case '1':
			std::cout << "Ваш заказ: кофе латте с сахаром.\n";
			break;
		case '0':
			std::cout << "Ваш заказ: кофе латте без сахара.\n";
			break;
		default:
			std::cout << "Ошибка!\n";
		}
	}
	break;
	case '3':
	{
		switch (m)
		{
		case '1':
			std::cout << "Ваш заказ: кофе эспрессо с сахаром.\n";
			break;
		case '0':
			std::cout << "Ваш заказ: кофе эспрессо без сахара.\n";
			break;
		default:
			std::cout << "Ошибка!\n";
		}
	}
	break;
	case '4':
	{
		switch (m)
		{
		case '1':
			std::cout << "Ваш заказ: чай черный с сахаром.\n";
			break;
		case '0':
			std::cout << "Ваш заказ: чай черный без сахара.\n";
			break;
		default:
			std::cout << "Ошибка!\n";
		}
	}
	break;
	case '5':
	{
		switch (m)
		{
		case '1':
			std::cout << "Ваш заказ: чай зеленый с сахаром.\n";
			break;
		case '0':
			std::cout << "Ваш заказ: чай зеленый без сахара.\n";
			break;
		default:
			std::cout << "Ошибка!\n";
		}
	}
	break;
	default:
		std::cout << "Ошибка!\n";
	}

	return 0;
}


int main()
{
	setlocale(LC_ALL, "Russian");

	char var = 'y';

	while (var == 'y' || var == 'Y')
	{
		std::cout << "Введите условного оператора для дальнейше работы: switch или if\n";
		std::string oper;
		std::cin >> oper;

		if (oper == "switch")
		{
			char x;
			char y;
			std::cout << "Вы выбрали оператор switch.\nВведите код напитка:\n1 - кофе американо; 2 - кофе латте; 3 - кофе эспрессо; 4 - чай черный; 5 - чай зеленый\n";
			std::cin >> x;
			std::cout << "Добавить сахар?\n0-нет; 1-да\n";
			std::cin >> y;
			switcher(x, y);
		}
		else if (oper == "if")
		{
			std::string nap;
			std::string sah;
			std::cout << "Вы выбрали оператор if.\nВведите код напитка:\n1 - кофе американо; 2 - кофе латте; 3 - кофе эспрессо; 4 - чай черный; 5 - чай зеленый\n";
			std::cin >> nap;
			std::cout << "Добавить сахар?\n0-нет; 1-да\n";
			std::cin >> sah;
			ifer(nap, sah);
		}
		else
			std::cout << "Такого оператора нет.\n";

		std::cout << "Начать новый заказ напитка?\nY или y - да; N или n - нет.\n";
		std::cin >> var;
		std::cout << std::endl;
	}


	return 0;
}