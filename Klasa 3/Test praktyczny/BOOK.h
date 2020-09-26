#pragma once
#include<string>
#include<vector>
class BOOK
{
	std::string title;
	std::vector<std::string> authors;
	int published;
	char * ISBN; //13 znakow
public:
	BOOK();
	virtual ~BOOK();

	BOOK(std::string _title, std::vector<std::string> _authors, int _published, char * _ISBN);
	BOOK(const BOOK &p);
	BOOK(BOOK &&p);

	//setter
	void setTitle(std::string title);

	//getter
	std::string getTitle();

	//operator <<
	friend std::ostream& operator<<(std::ostream& os, const BOOK& obj);

	// kopiuj¹cy operator przypisania
	BOOK &operator=(const BOOK &p);

	// przenosz¹cy operator przypisania - dodatkowo
	BOOK &operator=(BOOK &&p);

};

std::ostream& operator<<(std::ostream& os, const BOOK& obj);
