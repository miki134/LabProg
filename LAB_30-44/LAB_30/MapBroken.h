/*! \file MapBroken.h
	*
	* \brief Klasa MapBroken
	*
	* \author Miko³aj Napiera³a
	* \date 2020.04.12
	* \version 1.00.00
	*/
#pragma once
#include"Polygon.h"
#include"RGBA.h"
class MapBroken : Polygon
{
	unsigned int borderWidth;
	RGBA borderColor;
public:
	//konstruktory
	MapBroken();
	MapBroken(unsigned int bW, RGBA bC);
	MapBroken(unsigned int bW, RGBA bC, std::initializer_list<Punkt2> list);
	MapBroken(const MapBroken &p);
	MapBroken(MapBroken &&p);

	//destruktory
	~MapBroken() = default;

	//settery
	void setBorderWidth(unsigned int b);
	void setBorderColor(RGBA b);

	//gettery
	unsigned int getBorderWidth();
	RGBA getBorderColor();

	// kopiuj¹cy operator przypisania
	MapBroken &operator=(MapBroken &p);

	// przenosz¹cy operator przypisania
	MapBroken &operator=(MapBroken &&p);

	//operator<<
	friend std::ostream &operator<<(std::ostream& os, const MapBroken& obj);
};
//operator<<
std::ostream &operator<<(std::ostream& os, const MapBroken& obj);

