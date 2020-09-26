#pragma once
#include"AbstrakcyjnaMateria.h"
class CiemnaEnergia : AbstrakcyjnaMateria
{
	double *spin = nullptr;

public:
	void oddzialywanieEnergii();
};

