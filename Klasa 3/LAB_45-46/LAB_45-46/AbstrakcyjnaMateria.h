#pragma once
#include"ObiektWszechœwiat.h"
class AbstrakcyjnaMateria : ObiektWszechœwiat
{
	double *spin;

public:
	virtual void oddzialywanieEnergii();
	virtual void oddzialywanieGrawitacyjne();
};

