#pragma once
#include "DigitalEl.h"
#include "Appliances.h"

class IDigitAppliances : virtual public IDigitalEl, virtual public IAppliances
{
public:
	IDigitAppliances() = default;
	IDigitAppliances(string wf);
	virtual void show() override = 0;
	virtual void showtittleSection() override = 0;
	virtual void showtittleLot() override = 0;
	virtual void addStock(int) override = 0;
	virtual bool checkStock() = 0;
	virtual void sale() override = 0;

protected:
	string _wifi;
};

class RoboVC : public IDigitAppliances
{
public:
	RoboVC(string tittleSection, string tittleLot, int powerCon, int stock, int ram, int weight, float contVolume, string wifi);
	void show();
	void showtittleSection();
	void showtittleLot();
	void addStock(int);
	bool checkStock();
	void sale();

private:
	float _contVolume;
};

class TVTun : public IDigitAppliances
{
public:
	TVTun(string tittleSection, string tittleLot, int powerCon, int stock, int ram, int weight, string wifi, string connect);
	void show();
	void showtittleSection();
	void showtittleLot();
	void addStock(int);
	bool checkStock();
	void sale();

private:
	string _connect;
};

class Weather: public IDigitAppliances
{
public:
	Weather(string tittleSection, string tittleLot, int powerCon, int stock, int ram, int weight, string wifi, int sensor);
	void show();
	void showtittleSection();
	void showtittleLot();
	void addStock(int);
	bool checkStock();
	void sale();

private:
	int _sensor;
};

class Sewing: public IDigitAppliances
{
public:
	Sewing(string tittleSection, string tittleLot, int powerCon, int stock, int ram, int weight, string wifi, int sewingspeed);
	void show();
	void showtittleSection();
	void showtittleLot();
	void addStock(int);
	bool checkStock();
	void sale();

private:
	int _sewingspeed;
};

class Vrecorder: public IDigitAppliances
{
public:
	Vrecorder(string tittleSection, string tittleLot, int powerCon, int stock, int ram, int weight, string wifi, string format);
	void show();
	void showtittleSection();
	void showtittleLot();
	void addStock(int);
	bool checkStock();
	void sale();

private:
	string _format;
};

