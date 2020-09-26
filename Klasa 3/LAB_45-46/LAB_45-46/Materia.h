#pragma once
#include"CzastkaElementarna.h"
class Materia :CzastkaElementarna
{
	char symbol;
	unsigned int generacja;
	double ladunek;
	unsigned int masa;

public:
	void oddzialywanieEnergii();
};

