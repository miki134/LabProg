#pragma once
#include"ObiektWszech�wiat.h"
class AbstrakcyjnaMateria : ObiektWszech�wiat
{
	double *spin;

public:
	virtual void oddzialywanieEnergii();
	virtual void oddzialywanieGrawitacyjne();
};

