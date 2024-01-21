#include "DigitAppEl.h"

IDigitAppliances::IDigitAppliances(string wifi) : _wifi(wifi) {}

RoboVC::RoboVC(string tittleSection, string tittleLot, int powerCon, int stock, int ram, int weight, float contVolume, string wifi) :
	IElectronics(tittleSection, tittleLot, powerCon, stock), IDigitalEl(ram), IAppliances(weight), IDigitAppliances(wifi), _contVolume(contVolume) {}
void RoboVC::show()
{
	showDAE(_tittleLot, _powerCon, _ram, _weight, _wifi);
	cout << " Ёмкость контейнера: " << _contVolume << " л." << "\n";
	showStock(_stock);
}
void RoboVC::showtittleSection()
{
	cout << " " << _tittleSection << "\n";
}
void RoboVC::showtittleLot()
{
	cout << " " << _tittleLot << "\n";
}
void RoboVC::addStock(int quant)
{
	_stock += quant;
}
bool RoboVC::checkStock()
{
	if (_stock == 0)
	{
		cout << "\n\n\n Извините, товар временно отсутствует. \n";
		return false;
		Sleep(1000);
	}
	else return true;
}
void RoboVC::sale()
{
	--_stock;
}

TVTun::TVTun(string tittleSection, string tittleLot, int powerCon, int stock, int ram, int weight, string wifi, string connect) : 
	IElectronics(tittleSection, tittleLot, powerCon, stock), IDigitalEl(ram), IAppliances(weight), IDigitAppliances(wifi), _connect(connect) {}
void TVTun::show()
{
	showDAE(_tittleLot, _powerCon, _ram, _weight, _wifi);
	cout << " Тип одключения: " << _connect << "\n";
	showStock(_stock);
}
void TVTun::showtittleSection()
{
	cout << " " << _tittleSection << "\n";
}
void TVTun::showtittleLot()
{
	cout << " " << _tittleLot << "\n";
}
void TVTun::addStock(int quant)
{
	_stock += quant;
}
bool TVTun::checkStock()
{
	if (_stock == 0)
	{
		cout << "\n\n\n Извините, товар временно отсутствует. \n";
		return false;
		Sleep(1000);
	}
	else return true;

}
void TVTun::sale()
{
	--_stock;
}

Weather::Weather(string tittleSection, string tittleLot, int powerCon, int stock, int ram, int weight, string wifi, int sensor) : 
	IElectronics(tittleSection, tittleLot, powerCon, stock), IDigitalEl(ram), IAppliances(weight), IDigitAppliances(wifi), _sensor(sensor) {}
void Weather::show()
{
	showDAE(_tittleLot, _powerCon, _ram, _weight, _wifi);
	cout << " Количество датчиков: " << _sensor << " шт." << "\n";
	showStock(_stock);
}
void Weather::showtittleSection()
{
	cout << " " << _tittleSection << "\n";
}
void Weather::showtittleLot()
{
	cout << " " << _tittleLot << "\n";
}
void Weather::addStock(int quant)
{
	_stock += quant;
}
bool Weather::checkStock()
{
	if (_stock == 0)
	{
		cout << "\n\n\n Извините, товар временно отсутствует. \n";
		return false;
		Sleep(1000);
	}
	else return true;
}
void Weather::sale()
{
	--_stock;
}

Sewing::Sewing(string tittleSection, string tittleLot, int powerCon, int stock, int ram, int weight, string wifi, int sewingspeed) : 
	IElectronics(tittleSection, tittleLot, powerCon, stock), IDigitalEl(ram), IAppliances(weight), IDigitAppliances(wifi), _sewingspeed(sewingspeed) {}
void Sewing::show()
{
	showDAE(_tittleLot, _powerCon, _ram, _weight, _wifi);
	cout << " Скорость шитья: " << _sewingspeed << " стежков в минуту" << "\n";
	showStock(_stock);
}
void Sewing::showtittleSection()
{
	cout << " " << _tittleSection << "\n";
}
void Sewing::showtittleLot()
{
	cout << " " << _tittleLot << "\n";
}
void Sewing::addStock(int quant)
{
	_stock += quant;
}
bool Sewing::checkStock()
{
	if (_stock == 0)
	{
		cout << "\n\n\n Извините, товар временно отсутствует. \n";
		return false;
		Sleep(1000);
	}
	else return true;

}
void Sewing::sale()
{
	--_stock;
}

Vrecorder::Vrecorder(string tittleSection, string tittleLot, int powerCon, int stock, int ram, int weight, string wifi, string format) : 
	IElectronics(tittleSection, tittleLot, powerCon, stock), IDigitalEl(ram), IAppliances(weight), IDigitAppliances(wifi), _format(format) {}
void Vrecorder::show()
{
	showDAE(_tittleLot, _powerCon, _ram, _weight, _wifi);
	cout << " Формат записи: " << _format << "\n";
	showStock(_stock);
}
void Vrecorder::showtittleSection()
{
	cout << " " << _tittleSection << "\n";
}
void Vrecorder::showtittleLot()
{
	cout << " " << _tittleLot << "\n";
}
void Vrecorder::addStock(int quant)
{
	_stock += quant;
}
bool Vrecorder::checkStock()
{
	if (_stock == 0)
	{
		cout << "\n\n\n Извините, товар временно отсутствует. \n";
		return false;
		Sleep(1000);
	}
	else return true;

}
void Vrecorder::sale()
{
	--_stock;
}

