#include "DigitalEl.h"

IDigitalEl::IDigitalEl(int ram) : _ram(ram) {}

Calculator::Calculator(string tittleSection, string tittleLot, int powerCon, int stock, int ram, int digit) : 
	IElectronics(tittleSection, tittleLot, powerCon, stock), IDigitalEl(ram), _digit(digit) {}
void Calculator::show()
{
	showDE(_tittleLot, _powerCon, _ram);
	cout << " Разрядность: " << _digit << " Вт." << "\n";
	showStock(_stock);
}
void Calculator::showtittleSection()
{
	cout << " " << _tittleSection << "\n";
}
void Calculator::showtittleLot()
{
	cout << " " << _tittleLot << "\n";
}
void Calculator::addStock(int quant)
{
	_stock += quant;
}
bool Calculator::checkStock()
{
	if (_stock == 0)
	{
		cout << "\n\n\n Извините, товар временно отсутствует. \n";
		return false;
		Sleep(1000);
	}
	else return true;

}
void Calculator::sale()
{
	 --_stock;
}

Printer::Printer(string tittleSection, string tittleLot, int powerCon, int stock, int ram, string type, int speed) : 
	IElectronics(tittleSection, tittleLot, powerCon, stock), IDigitalEl(ram), _type(type), _speed(speed) {}
void Printer::show()
{
	showDE(_tittleLot, _powerCon, _ram);
	cout << " Тип устройства: " << _type << "\n";
	cout << " Скорость печати: " << _speed << " стр/сек" << "\n";
	showStock(_stock);
}
void Printer::showtittleSection()
{
	cout << " " << _tittleSection << "\n";
}
void Printer::showtittleLot()
{
	cout << " " << _tittleLot << "\n";
}
void Printer::addStock(int quant)
{
	_stock += quant;
}
bool Printer::checkStock()
{
		if (_stock == 0)
		{
			cout << "\n\n\n Извините, товар временно отсутствует. \n";
			return false;
			Sleep(1000);
		}
		else return true;

}
void Printer::sale()
{
	--_stock;
}

PCUit::PCUit(string tittleSection, string tittleLot, int powerCon, int stock, int ram, string system, int hdd) : 
	IElectronics(tittleSection, tittleLot, powerCon, stock), IDigitalEl(ram), _system(system), _hdd(hdd) {}
void PCUit::show()
{
	showDE(_tittleLot, _powerCon, _ram);
	cout << " Операционная система: " << _system << "\n";
	cout << " Жёсткий диск: " << _hdd << " Gb" << "\n";
	showStock(_stock);
}
void PCUit::showtittleSection()
{
	cout << " " << _tittleSection << "\n";
}
void PCUit::showtittleLot()
{
	cout << " " << _tittleLot << "\n";
}
void PCUit::addStock(int quant)
{
	_stock += quant;
}
bool PCUit::checkStock()
{
	if (_stock == 0)
	{
		cout << "\n\n\n Извините, товар временно отсутствует. \n";
		return false;
		Sleep(1000);
	}
	else return true;

}
void PCUit::sale()
{
	--_stock;
}

VideoCam::VideoCam(string tittleSection, string tittleLot, int powerCon, int stock, int ram, string format, float matrix) : 
	IElectronics(tittleSection, tittleLot, powerCon, stock), IDigitalEl(ram), _format(format), _matrix(matrix) {}
void VideoCam::show()
{
	showDE(_tittleLot, _powerCon, _ram);
	cout << " Формат: " << _format << "\n";
	cout << " Матрица: " << _matrix << " мегапикселей" << "\n";
	showStock(_stock);
}
void VideoCam::showtittleSection()
{
	cout << " " << _tittleSection << "\n";
}
void VideoCam::showtittleLot()
{
	cout << " " << _tittleLot << "\n";
}
void VideoCam::addStock(int quant)
{
	_stock += quant;
}
bool VideoCam::checkStock()
{
	if (_stock == 0)
	{
		cout << "\n\n\n Извините, товар временно отсутствует. \n";
		return false;
		Sleep(1000);
	}
	else return true;

}
void VideoCam::sale()
{
	--_stock;
}

