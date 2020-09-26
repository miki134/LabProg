#pragma once
#include<string>
#include"AbstrakcyjnaMateria.h"
class AbstrakcyjnaZwyklaMateria :AbstrakcyjnaMateria
{
	unsigned int masa;
	unsigned int promien;
	std::string nazwa;

	double *spin;
	bool ladunek;
public:
	virtual void ustawNazwa();
	virtual void ustawPromien();
	virtual void ustawMasa();
};

