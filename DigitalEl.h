#pragma once
#include "IElectronics.h"
#include "Function.h"

class IDigitalEl : virtual public IElectronics
{
public:
	IDigitalEl() = default;
	IDigitalEl(int ram);
	virtual void show() override = 0;
	virtual void showtittleSection() override = 0;
	virtual void showtittleLot() override = 0;
	virtual void addStock(int) override = 0;
	virtual bool checkStock() = 0;
	virtual void sale() override = 0;

protected:
	int _ram;
};

class Calculator : public IDigitalEl
{
public:
	Calculator(string tittleSection, string tittleLot, int powerCon, int stock, int ram, int digit);
	void show();
	void showtittleSection();
	void showtittleLot();
	void addStock(int);
	bool checkStock();
	void sale();

private:
	int _digit;
};

class Printer : public IDigitalEl
{
public:
	Printer(string tittleSection, string tittleLot, int powerCon, int stock, int ram, string type, int speed);
	void show();
	void showtittleSection();
	void showtittleLot();
	void addStock(int);
	bool checkStock();
	void sale();

private:
	string _type;
	int _speed;
};

class PCUit : public IDigitalEl
{
public:
	PCUit(string tittleSection, string tittleLot, int powerCon, int stock, int ram, string system, int hdd);
	void show();
	void showtittleSection();
	void showtittleLot();
	void addStock(int);
	bool checkStock();
	void sale();

private:
	string _system;
	int _hdd;
};

class VideoCam : public IDigitalEl
{
public:
	VideoCam(string tittleSection, string tittleLot, int powerCon, int stock, int ram, string format, float matrix);
	void show();
	void showtittleSection();
	void showtittleLot();
	void addStock(int);
	bool checkStock();
	void sale();

private:
	string _format;
	float _matrix;
};


