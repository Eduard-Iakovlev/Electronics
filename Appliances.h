#pragma once
#include "IElectronics.h"
#include "Function.h"

class IAppliances : virtual public IElectronics
{
public:
	IAppliances() = default;
	IAppliances(int weight);
	virtual void show() override = 0;
	virtual void showtittleSection() override= 0;
	virtual void showtittleLot() override = 0;
	virtual void addStock(int) override = 0;
	virtual bool checkStock() = 0;
	virtual void sale() override = 0;

protected:
	int _weight;
};

class VacClean : public IAppliances
{
public:
	VacClean(string tittleSection, string tittleLot, int powerCon, int stock, int weight, int sucPower);
	void show();
	void showtittleSection();
	void showtittleLot();
	void addStock(int);
	bool checkStock();
	void sale();

private:
	int _sucPower;
};

class Microwave : public IAppliances
{
public:
	Microwave(string tittleSection, string tittleLot, int powerCon, int stock, int weight, int maxPower);
	void show();
	void showtittleSection();
	void showtittleLot();
	void addStock(int);
	bool checkStock();
	void sale();

private:
	int _maxPower;
};

class ElStov : public IAppliances
{
public:
	ElStov(string tittleSection, string tittleLot, int powerCon, int stock, int weight, int comf);
	void show();
	void showtittleSection();
	void showtittleLot();
	void addStock(int);
	bool checkStock();
	void sale();

private:
	int _comf;
};

class Fridge : public IAppliances
{
public:
	Fridge(string tittleSection, string tittleLot, int powerCon, int stock, int weight, int cont);
	void show();
	void showtittleSection();
	void showtittleLot();
	void addStock(int);
	bool checkStock();
	void sale();

private:
	int _cont;
};

class Grill : public IAppliances
{
public:
	Grill(string tittleSection, string tittleLot, int powerCon, int stock, int weight, int temp);
	void show();
	void showtittleSection();
	void showtittleLot();
	void addStock(int);
	bool checkStock();
	void sale();

private:
	int _temp;
};