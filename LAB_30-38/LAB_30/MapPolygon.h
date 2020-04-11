/*! \file MapPolygon.h
	*
	* \brief Klasa MapPolygon
	*
	* \author Miko³aj Napiera³a
	* \date 2020.04.12
	* \version 1.00.00
	*/
#include"Polygon.h"
#include "RGBA.h"
#pragma once
class MapPolygon : public Polygon
{
	unsigned int borderWidth;
	RGBA borderColor;
	RGBA fillColor;
	unsigned char opacity;

public:
	//konstruktory
	MapPolygon();
	MapPolygon(unsigned int bW, RGBA bC, RGBA f);
	MapPolygon(unsigned int bW, RGBA bC, RGBA f, unsigned char o);
	MapPolygon(unsigned int bW, RGBA bC, RGBA f, unsigned char o, std::initializer_list<Punkt2> list);
	MapPolygon(const MapPolygon &p);
	MapPolygon(MapPolygon &&p);

	//destruktory
	~MapPolygon() = default;
	
	//settery
	void setBorderWidth(unsigned int b);
	void setBorderColor(RGBA b);
	void setFillColor(RGBA f);
	void setOpacity(unsigned char o);

	//gettery
	unsigned int getBorderWidth();
	RGBA getBorderColor();
	RGBA getFillColor();
	unsigned char getOpacity();

	// kopiuj¹cy operator przypisania
	MapPolygon &operator=(MapPolygon &p);

	// przenosz¹cy operator przypisania
	MapPolygon &operator=(MapPolygon &&p);

	//operator<<
	friend std::ostream &operator<<(std::ostream& os, const MapPolygon& obj);
};
//operator<<
std::ostream &operator<<(std::ostream& os, const MapPolygon& obj);