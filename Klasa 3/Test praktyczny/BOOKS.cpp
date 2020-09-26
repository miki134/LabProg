#include "BOOKS.h"

BOOKS::BOOKS()
{
	BOOKS(BOOK());
}

BOOKS::~BOOKS()
{
	delete[] ksiazki;
}

BOOKS::BOOKS(std::vector<BOOK>p)
{
	for (int i = 0; i < p.size(); i++)
		ksiazki[i] = p[i];
}

BOOKS::BOOKS(const BOOKS & p)
	:
	ksiazki{ p.ksiazki }
{}

BOOKS::BOOKS(BOOKS && p)
{
	ksiazki = p.ksiazki;
	p.ksiazki = nullptr;
}

void BOOKS::setKsiazki(BOOK * b)
{
	ksiazki = b;
}

BOOK BOOKS::getKsiazki()
{
	return *ksiazki;
}

BOOKS & BOOKS::operator=(BOOKS & p)
{
	ksiazki = p.ksiazki;
	return *this;
}

BOOKS & BOOKS::operator=(BOOKS && p)
{
	ksiazki = p.ksiazki;

	p.ksiazki = nullptr;

	return *this;
}

std::ostream & operator<<(std::ostream & os, const BOOKS & obj)
{
	return os << obj.ksiazki;
}