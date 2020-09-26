#include"BOOK.h"
#include"BOOKS.h"

#include<vector>
int main()
{
	std::vector<BOOK> p;

	BOOK a;
	BOOK b;
	BOOK c;
	p.push_back(a);
	p.push_back(b);
	p.push_back(c);
	BOOKS ksiazki(p);
		
	BOOKS bs;

	return 0;
}

//autor Miko³aj Napiera³a