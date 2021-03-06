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

	// kopiujący operator przypisania
	BOOKS &operator=(BOOKS &p);

	// przenoszący operator przypisania
	BOOKS &operator=(BOOKS &&p);

};

std::ostream& operator<<(std::ostream& os, const BOOK& obj);