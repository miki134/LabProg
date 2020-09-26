#include "BOOK.h"
#include "BOOKS.h"

BOOK::BOOK()
	:
	BOOK("", { "" }, NULL, nullptr)
{}

BOOK::~BOOK()
{
	delete[] ISBN;
}

BOOK::BOOK(std::string _title, std::vector<std::string> _authors, int _published, char * _ISBN)
{
	title = _title;

	for (int i = 0; i < authors.size(); i++)
		authors[i] = _authors[i];

	published = _published;
	ISBN = _ISBN;
}

BOOK::BOOK(const BOOK & p)
{
	title = p.title;

	for (int i = 0; i < p.authors.size(); i++)
		authors[i] = p.authors[i];

	published = p.published;
	ISBN = p.ISBN;
}

BOOK::BOOK(BOOK && p)
{
	title = p.title;
	authors = p.authors;
	published = p.published;
	ISBN = p.ISBN;

	p.title = "";
	for (int i = 0; i < p.authors.size(); i++)
		p.authors[i] = "";
	p.published = NULL;
	p.ISBN = nullptr;
}

void BOOK::setTitle(std::string title)
{
	this->title = title;
}

std::string BOOK::getTitle()
{
	return title;
}

BOOK & BOOK::operator=(const BOOK & p)
{
	if (&p != this)
	{
		title = p.title;

		for (int i = 0; i < p.authors.size(); i++)
			authors[i] = p.authors[i];

		published = p.published;
		ISBN = p.ISBN;
	}
	return *this;
}

BOOK & BOOK::operator=(BOOK && p)
{
	if (&p != this)
	{
		title = p.title;

		for (int i = 0; i < p.authors.size(); i++)
			authors[i] = p.authors[i];

		published = p.published;
		ISBN = p.ISBN;

		p.title = "";
		for (int i = 0; i < p.authors.size(); i++)
			p.authors[i] = "";
		p.published = NULL;
		p.ISBN = nullptr;
	}
	return *this;
}

std::ostream & operator<<(std::ostream & os, const BOOK & obj)
{
	os << "Title: " << obj.title << "\n";

	for (int i = 0; i < obj.authors.size(); i++)
		os << obj.authors[i] << std::endl;

	os << "Published" << obj.published << std::endl << "ISBN: " << obj.ISBN << std::endl;

	return os;
}
