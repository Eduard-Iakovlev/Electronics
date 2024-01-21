#pragma once
#include <iostream>
#include <string>
#include <Windows.h>

using std::string;
using std::cout;


class IElectronics
{
public:
	IElectronics() = default;
	IElectronics(string tittleSection, string tittleLot, int powerCon, int stock);
	virtual void show() = 0;
	virtual void showtittleSection() = 0;
	virtual void showtittleLot() = 0;
	virtual void addStock(int) = 0;
	virtual bool checkStock() = 0;
	virtual void sale() = 0;

	virtual ~IElectronics() = default;

protected:
	int _powerCon;
	int _stock;
	string _tittleSection;
	string _tittleCategory;
	string _tittleLot;

};


