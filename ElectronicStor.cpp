#include "Appliances.h"
#include "Function.h"
#include "IElectronics.h"
#include "DigitalEl.h"
#include "DigitAppEl.h"

using std::cin;

int main()
{
	setlocale(LC_ALL, "");

	int product(0);
	int category(0);
	int select(0);
	int section(0);
	bool load = true;
	bool sale = true;
	bool work = true;

	IElectronics* storAplainces[5];
	IElectronics* storDigitalEl[5];
	IElectronics* storDigitalAppl[5];

	storAplainces[0] = new VacClean("Бытовая техника", "Пылесос Philips", 1600, 0, 5, 320);
	storAplainces[1] = new Microwave("Бытовая техника", "Микроволновая печь Goreie", 1150, 0, 11, 700);
	storAplainces[2] = new ElStov("Бытовая техника", "Электроплита Лысьва", 6100, 0, 33, 4);
	storAplainces[3] = new Fridge("Бытовая техника", "Холодильник Бирюса", 106, 0, 15, 43);
	storAplainces[4] = new Grill("Бытовая техника", "Гриль REDMOND", 1950, 0, 15, 230);

	storDigitalEl[0] = new Calculator("Цифровая техника", "Калькулятор Citizen CT-666N", 2, 0, 2, 12);
	storDigitalEl[1] = new Printer("Цифровая техника", "Принтер Samsung ML-2160", 310, 0, 8, "лазерный", 20);
	storDigitalEl[2] = new PCUit("Цифровая техника", "Офисный компьютер ", 700, 0, 4, "Linux", 1000);
	storDigitalEl[3] = new VideoCam("Цифровая техника", "Видеокамера Rekam DVC-360 черный", 5, 0, 8, "CMOS Full HD", 5);
	storDigitalEl[4] = new VideoCam("Цифровая техника", "Фотоаппарат Canon EOS 400D", 2, 0, 4, "CMOS", 15.5);

	storDigitalAppl[0] = new RoboVC("Цифровая быттехника", "Робот-пылесос REDMOND RV-R560", 18, 0, 4, 2, 0.2, "нет");
	storDigitalAppl[1] = new TVTun("Цифровая быттехника", "Ресивер цифровой LUMAX DV1116HD эфирный DVB-T2/C", 5, 0, 8, 1, "да", "HDMA");
	storDigitalAppl[2] = new Weather("Цифровая быттехника", "Цифровой комнатный термометр", 1, 0, 2, 1, "нет", 1);
	storDigitalAppl[3] = new Weather("Цифровая быттехника", "Компьютерная швейная машина Janome 4120 QDC", 35, 0, 4, 10, "нет", 700);
	storDigitalAppl[4] = new Vrecorder("Цифровая быттехника", "цифровой голосовой рекордер", 1, 0, 8, 1, "нет", "MP3");


	while (work)
	{
		while (load)
		{
			cleanLoad();
			loadEnd(&load);
			if (load == false) break;

			showSection(*storAplainces, *storDigitalEl, *storDigitalAppl);

			sectionSelect();
			section = checkDigit('1', '3');
			cleanLoad();
			
			showSection(storAplainces, storDigitalEl, storDigitalAppl, &section);

			lotSelect();
			product = checkDigit('1', '5') - 1;
			cleanLoad();

			showSection(storAplainces, storDigitalEl, storDigitalAppl, &section, &product);

			cout << " Количество принимаемого товара не более 3 едениц: ";

			switch (section)
			{
			case 1:
				storAplainces[product]->addStock(checkDigit('1', '3'));
				break;
			case 2:
				storDigitalEl[product]->addStock(checkDigit('1', '3'));
				break;
			case 3:
				storDigitalAppl[product]->addStock(checkDigit('1', '3'));
				break;
			}
			cleanLoad();

		}
		while (sale)
		{
			cleanSale();
			loadEnd(&sale);

			if (sale == false) break;

			char chois{ '0' };

			showSection(*storAplainces, *storDigitalEl, *storDigitalAppl);

			sectionSelect();
			section = checkDigit('1', '3');
			cleanSale();

			showSection(storAplainces, storDigitalEl, storDigitalAppl, &section);

			lotSelect();
			product = checkDigit('1', '5') - 1;
			cleanSale();

			showSection(storAplainces, storDigitalEl, storDigitalAppl, &section, &product);

			cout << " Хотите приобрести данный товар? \n";
			cout << " Да - \"Пробел\", Вернуться к выбору - \"Esc\"";
			while (true)
			{
				chois = _getch();
				if (chois != 32 && chois != 27)
				{
					cout << " " << "\b";
					continue;
				}
				break;
			}
			if (chois == 32)
			{
				switch (section)
				{
				case 1:
					if (storAplainces[product]->checkStock() == false) break;
					storAplainces[product]->sale();
					cout << "\n\n\n       Заказ на ";
					storAplainces[product]->showtittleLot();
					cout << " оформлен. \n";
					break;
				case 2:
					if (storDigitalEl[product]->checkStock() == false) break;
					storDigitalEl[product]->sale();
					cout << "\n\n\n       Заказ на ";
					storDigitalEl[product]->showtittleLot();
					cout << " оформлен. \n";
					break;
				case 3:
					if (storDigitalAppl[product]->checkStock() == false) break;
					storDigitalAppl[product]->sale();
					cout << "\n\n\n       Заказ на ";
					storDigitalAppl[product]->showtittleLot();
					cout << " оформлен. \n";
					break;
				}
				Sleep(2000);
			}
			else continue;

		}

		cout << " Перейти к загрузке - 1, к продажам - 2, выйти - 3: ";
		select = checkDigit('1', '3');
		if (select == 1)
		{
			load = true;
			continue;
		}
		else if (select == 2)
		{
			sale = true;
			continue;
		}
		else
		{
			cout << "\n\n\n\n\n\n\n\n           Всего хорошего!!!         \n\n\n\n\n\n";
			break;

		}
	}
	del(storAplainces);
	del(storDigitalEl);
	del(storDigitalAppl);
}