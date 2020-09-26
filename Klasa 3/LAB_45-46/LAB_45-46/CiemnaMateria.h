#pragma once
#include"AbstrakcyjnaMateria.h"
class CiemnaMateria :AbstrakcyjnaMateria
{
	double *spin = nullptr;

public:
	void oddzialywanieGrawitacyjne();
};

