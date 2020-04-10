#include"Polygon.h"
#include "RGBA.h"
#pragma once
class MapPolygon : Polygon
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

	//operator<<
	friend std::ostream &operator<<(std::ostream& os, const MapPolygon& obj);
};
//operator<<
std::ostream &operator<<(std::ostream& os, const MapPolygon& obj);