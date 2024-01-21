#include "Function.h"


int checkDigit(char a, char b)
{
	int digit(0);
	char str[1]{ '\0' };

	while (true)
	{
		str[0] = _getch();
		if (str[0] >= a && str[0] <= b)
		{
			cout << str[0] << "\n";
			digit = atoi(str);
			break;
		}
		else
		{
			continue;
		}
	}

	cout << "\n\n";
	return digit;
}

void cleanLoad()
{
	system("cls");
	cout << "        Для начала раоты необходимо принять товар. \n";

}
void cleanSale()
{
	system("cls");
	cout << "        Торговый зал: \n";

}

void loadEnd(bool* load)
{
	char chois;
	cout << " Продолжить Да - \"Пробел\", Нет - \"Esc\"\n\n";
	chois = _getch();
	if (chois == 32)
	{
		*load = true;
	}
	else if (chois == 27)
	{
		*load = false;
	}

}

void sectionSelect()
{
	cout << " Выберите секцию:";
}
void lotSelect()
{
	cout << " Выберите товар:";
}

void showStock(int stock)
{
	if (stock > 0) cout << " В наличии " << stock << " шт." << "\n\n";
	else cout << " Нет в наличии! \n\n";
}

void showApp(string tittleLot, int powerCon, int weight)
{
	cout << " Наименование: " << tittleLot << "\n Потребляемая мощьность: " << powerCon << " Вт." << "\n Вес: " << weight << " Кг." << "\n";
}
void showDE(string tittleLot, int powerCon, int ram)
{
	cout << " Наименование: " << tittleLot << "\n Потребляемая мощьность: " << powerCon << " Вт." << "\n ОП: " << ram << " Mb." << "\n";
}
void showDAE(string tittleLot, int powerCon, int ram, int weight, string wifi)
{
	cout << " Наименование: " << tittleLot << "\n Потребляемая мощьность: " << powerCon << " Вт." << "\n ОП: " << ram << " Mb." << "\n Вес: " << weight << " Кг." << "\n WiFi: " << wifi << "\n";
}

void showSection(IElectronics* storAplainces, IElectronics* storDigitalEl, IElectronics* storDigitalAppl)
{
	cout << " 1 - ";
	storAplainces->showtittleSection();
	cout << " 2 - ";
	storDigitalEl->showtittleSection();
	cout << " 3 - ";
	storDigitalAppl->showtittleSection();
	cout << "\n";

}


void showSection(IElectronics* storAplainces[], IElectronics* storDigitalEl[], IElectronics* storDigitalAppl[], const int* section)
{
	switch (*section)
	{
	case 1:
		for (int i = 0; i < 5; ++i)
		{
			cout << " лот - " << i + 1 << " ";
			storAplainces[i]->showtittleLot();
			cout << "\n";
		}
		break;
	case 2:
		for (int i = 0; i < 5; ++i)
		{
			cout << " лот - " << i + 1 << " ";
			storDigitalEl[i]->showtittleLot();
			cout << "\n";
		}
		break;
	case 3:
		for (int i = 0; i < 5; ++i)
		{
			cout << " лот - " << i + 1 << " ";
			storDigitalAppl[i]->showtittleLot();
			cout << "\n";
		}
		break;
	}

}

void showSection(IElectronics* storAplainces[], IElectronics* storDigitalEl[], IElectronics* storDigitalAppl[], const int* section, const int* product)
{
	switch (*section)
	{
	case 1:
		cout << " лот - " << *product + 1 << "\n";
		storAplainces[*product]->show();
		cout << "\n";
		break;
	case 2:
		cout << " лот - " << *product + 1 << "\n";
		storDigitalEl[*product]->show();
		cout << "\n";
		break;
	case 3:
		cout << " лот - " << *product + 1 << "\n";
		storDigitalAppl[*product]->show();
		cout << "\n";
		break;
	}


}

void del(IElectronics* section[])
{
	for (int i = 0; i < 5; ++i)
	{
		delete section[i];
	}
}
