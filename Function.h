#pragma once
#include <iostream>
#include <conio.h>
#include <string>
#include "IElectronics.h"

using std::cout;
using std::string;

int checkDigit(char, char);

void cleanLoad();
void cleanSale();
void loadEnd(bool*);

void sectionSelect();
void lotSelect();

void showStock(int);

void showApp(string, int, int);
void showDE(string, int, int);
void showDAE(string, int, int, int, string wifi);

void showSection(IElectronics*, IElectronics*, IElectronics*);
void showSection(IElectronics*[], IElectronics*[], IElectronics*[], const int*);
void showSection(IElectronics*[], IElectronics*[], IElectronics*[], const int*, const int*);

void del(IElectronics*[]);
