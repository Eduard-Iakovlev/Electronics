#include "Appliances.h"

IAppliances::IAppliances(int weight) : _weight(weight) {}

VacClean::VacClean(string tittleSection, string tittleLot, int powerCon, int stock, int weight, int sucPower)
	: IElectronics(tittleSection, tittleLot, powerCon, stock), IAppliances(weight), _sucPower(sucPower) {}
void VacClean::show()
{
	showApp(_tittleLot, _powerCon, _weight);
	cout << " Мощьность всасывания: " << _sucPower << " Вт." << "\n";
	showStock(_stock);
}
void VacClean::showtittleSection()
{
	cout << " " << _tittleSection << "\n";
}
void VacClean::showtittleLot()
{
	cout << " " << _tittleLot << "\n";
}
void VacClean::addStock(int quant)
{
	_stock += quant;
}
bool VacClean::checkStock()
{
	if (_stock == 0)
	{
		cout << "\n\n\n Извините, товар временно отсутствует. \n";
		return false;
		Sleep(1000);
	}
	else return true;
}
void VacClean::sale()
{
	--_stock;
}

Microwave::Microwave(string tittleSection, string tittleLot, int powerCon, int stock, int weight, int maxPower)
	: IElectronics(tittleSection, tittleLot, powerCon, stock), IAppliances(weight), _maxPower(maxPower) {}
void Microwave::show()
{
	showApp(_tittleLot, _powerCon, _weight);
	cout << " Максимальная мощность: " << _maxPower << " Вт." << "\n";

	showStock(_stock);
}
void Microwave::showtittleSection()
{
	cout << " " << _tittleSection << "\n";
}
void Microwave::showtittleLot()
{
	cout << " " << _tittleLot << "\n";
}
void Microwave::addStock(int quant)
{
	_stock += quant;
}
bool Microwave::checkStock()
{
	if (_stock == 0)
	{
		cout << "\n\n\n Извините, товар временно отсутствует. \n";
		return false;
		Sleep(1000);
	}
	else return true;

}
void Microwave::sale()
{
	--_stock;
}

ElStov::ElStov(string tittleSection, string tittleLot, int powerCon, int stock, int weight, int comf)
	: IElectronics(tittleSection, tittleLot, powerCon, stock), IAppliances(weight), _comf(comf) {}
void ElStov::show()
{
	showApp(_tittleLot, _powerCon, _weight);
	cout << " Колличество комфорок: " << _comf << " шт." << "\n";

	showStock(_stock);
}
void ElStov::showtittleSection()
{
	cout << " " << _tittleSection << "\n";
}
void ElStov::showtittleLot()
{
	cout << " " << _tittleLot << "\n";
}
void ElStov::addStock(int quant)
{
	_stock += quant;
}
bool ElStov::checkStock()
{
	if (_stock == 0)
	{
		cout << "\n\n\n Извините, товар временно отсутствует. \n";
		return false;
		Sleep(1000);
	}
	else return true;

}
void ElStov::sale()
{
	--_stock;
}

Fridge::Fridge(string tittleSection, string tittleLot, int powerCon, int stock, int weight, int cont)
	: IElectronics(tittleSection, tittleLot, powerCon, stock), IAppliances(weight), _cont(cont) {}
void Fridge::show()
{
	showApp(_tittleLot, _powerCon, _weight);
	cout << " Камера: " << _cont << " л." << "\n";

	showStock(_stock);
}
void Fridge::showtittleSection()
{
	cout << " " << _tittleSection << "\n";
}
void Fridge::showtittleLot()
{
	cout << " " << _tittleLot << "\n";
}
void Fridge::addStock(int quant)
{
	_stock += quant;
}
bool Fridge::checkStock()
{
	if (_stock == 0)
	{
		cout << "\n\n\n Извините, товар временно отсутствует. \n";
		return false;
		Sleep(1000);
	}
	else return true;

}
void Fridge::sale()
{
	--_stock;
}

Grill::Grill(string tittleSection, string tittleLot, int powerCon, int stock, int weight, int temp)
	: IElectronics(tittleSection, tittleLot, powerCon, stock), IAppliances(weight), _temp(temp) {}
void Grill::show()
{
	showApp(_tittleLot, _powerCon, _weight);
	cout << " Максимальная температура: " << _temp << " C" << "\n";

	showStock(_stock);
}
void Grill::showtittleSection()
{
	cout << " " << _tittleSection << "\n";
}
void Grill::showtittleLot()
{
	cout << " " << _tittleLot << "\n";
}
void Grill::addStock(int quant)
{
	_stock += quant;
}
bool Grill::checkStock()
{
	if (_stock == 0)
	{
		cout << "\n\n\n Извините, товар временно отсутствует. \n";
		return false;
		Sleep(1000);
	}
	else return true;

}
void Grill::sale()
{
	--_stock;
}
