#pragma once
#include"BOOK.h"
class BOOKS
{
	BOOK * ksiazki;
public:
	BOOKS();
	virtual ~BOOKS();

	BOOKS(std::vector<BOOK>p);
	BOOKS(const BOOKS &p);
	BOOKS(BOOKS &&p);

	//setter
	void setKsiazki(BOOK * b);

	//getter
	BOOK getKsiazki();

	//operator <<
	friend std::ostream& operator<<(std::ostream& os, const BOOKS& obj);

	// kopiuj¹cy operator przypisania
	BOOKS &operator=(BOOKS &p);

	// przenosz¹cy operator przypisania
	BOOKS &operator=(BOOKS &&p);

};

std::ostream& operator<<(std::ostream& os, const BOOK& obj);