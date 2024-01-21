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

	storAplainces[0] = new VacClean("������� �������", "������� Philips", 1600, 0, 5, 320);
	storAplainces[1] = new Microwave("������� �������", "������������� ���� Goreie", 1150, 0, 11, 700);
	storAplainces[2] = new ElStov("������� �������", "������������ ������", 6100, 0, 33, 4);
	storAplainces[3] = new Fridge("������� �������", "����������� ������", 106, 0, 15, 43);
	storAplainces[4] = new Grill("������� �������", "����� REDMOND", 1950, 0, 15, 230);

	storDigitalEl[0] = new Calculator("�������� �������", "����������� Citizen CT-666N", 2, 0, 2, 12);
	storDigitalEl[1] = new Printer("�������� �������", "������� Samsung ML-2160", 310, 0, 8, "��������", 20);
	storDigitalEl[2] = new PCUit("�������� �������", "������� ��������� ", 700, 0, 4, "Linux", 1000);
	storDigitalEl[3] = new VideoCam("�������� �������", "����������� Rekam DVC-360 ������", 5, 0, 8, "CMOS Full HD", 5);
	storDigitalEl[4] = new VideoCam("�������� �������", "����������� Canon EOS 400D", 2, 0, 4, "CMOS", 15.5);

	storDigitalAppl[0] = new RoboVC("�������� ����������", "�����-������� REDMOND RV-R560", 18, 0, 4, 2, 0.2, "���");
	storDigitalAppl[1] = new TVTun("�������� ����������", "������� �������� LUMAX DV1116HD ������� DVB-T2/C", 5, 0, 8, 1, "��", "HDMA");
	storDigitalAppl[2] = new Weather("�������� ����������", "�������� ��������� ���������", 1, 0, 2, 1, "���", 1);
	storDigitalAppl[3] = new Weather("�������� ����������", "������������ ������� ������ Janome 4120 QDC", 35, 0, 4, 10, "���", 700);
	storDigitalAppl[4] = new Vrecorder("�������� ����������", "�������� ��������� ��������", 1, 0, 8, 1, "���", "MP3");


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

			cout << " ���������� ������������ ������ �� ����� 3 ������: ";

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

			cout << " ������ ���������� ������ �����? \n";
			cout << " �� - \"������\", ��������� � ������ - \"Esc\"";
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
					cout << "\n\n\n       ����� �� ";
					storAplainces[product]->showtittleLot();
					cout << " ��������. \n";
					break;
				case 2:
					if (storDigitalEl[product]->checkStock() == false) break;
					storDigitalEl[product]->sale();
					cout << "\n\n\n       ����� �� ";
					storDigitalEl[product]->showtittleLot();
					cout << " ��������. \n";
					break;
				case 3:
					if (storDigitalAppl[product]->checkStock() == false) break;
					storDigitalAppl[product]->sale();
					cout << "\n\n\n       ����� �� ";
					storDigitalAppl[product]->showtittleLot();
					cout << " ��������. \n";
					break;
				}
				Sleep(2000);
			}
			else continue;

		}

		cout << " ������� � �������� - 1, � �������� - 2, ����� - 3: ";
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
			cout << "\n\n\n\n\n\n\n\n           ����� ��������!!!         \n\n\n\n\n\n";
			break;

		}
	}
	del(storAplainces);
	del(storDigitalEl);
	del(storDigitalAppl);
}