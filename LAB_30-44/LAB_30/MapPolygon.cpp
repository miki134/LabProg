/*! \file MapPolygon.cpp
	*
	* \brief Zawiera implementacje klasy MapPolygon
	*
	* \author Miko³aj Napiera³a
	* \date 2020.04.12
	* \version 1.00.00
	*/
#include "MapPolygon.h"
#include"Polygon.h"
#include"Punkt2.h"

MapPolygon::MapPolygon()
	:
	MapPolygon(0, { 0,0,0 }, { 0,0,0 }, 255, { Punkt2{0,0} })
{}

MapPolygon::MapPolygon(unsigned int bW, RGBA bC, RGBA f)
	:
	MapPolygon(bW, bC ,f, 255, { Punkt2{0,0} })
{}

MapPolygon::MapPolygon(unsigned int bW, RGBA bC, RGBA f, unsigned char o)
	:
	MapPolygon(bW, bC, f, o, { Punkt2{0,0} })
{}

MapPolygon::MapPolygon(unsigned int bW, RGBA bC, RGBA f, unsigned char o, std::initializer_list<Punkt2> list)
{
	Polygon::Polygon(list);
	borderWidth = bW;
	borderColor = bC;
	fillColor = f;
	opacity = o;

	borderColor.setA(opacity);
	fillColor.setA(opacity);
}

MapPolygon::MapPolygon(const MapPolygon & p)
	:
	Polygon(p),
	borderWidth{ p.borderWidth },
	borderColor{ p.borderColor },
	fillColor{ p.fillColor },
	opacity{ p.opacity }
{}

MapPolygon::MapPolygon(MapPolygon && p)
	:
	Polygon(p),
	borderWidth{ p.borderWidth },
	borderColor{ p.borderColor },
	fillColor{ p.fillColor },
	opacity{ p.opacity }
{}

void MapPolygon::setBorderWidth(unsigned int b)
{
	borderWidth = b;
}

void MapPolygon::setBorderColor(RGBA b)
{
	borderColor = b;
}

void MapPolygon::setFillColor(RGBA f)
{
	fillColor = f;
}

void MapPolygon::setOpacity(unsigned char o)
{
	opacity = o;
}

unsigned int MapPolygon::getBorderWidth()
{
	return borderWidth;
}

RGBA MapPolygon::getBorderColor()
{
	return borderColor;
}

RGBA MapPolygon::getFillColor()
{
	return fillColor;
}

unsigned char MapPolygon::getOpacity()
{
	return opacity;
}

MapPolygon & MapPolygon::operator=(MapPolygon & p)
{
	if (this != &p)
	{
		Polygon::operator=(p);
		borderWidth = p.borderWidth;
		borderColor = p.borderColor;
		fillColor = p.fillColor;
		opacity = p.opacity;

	}
	return *this;
}

MapPolygon & MapPolygon::operator=(MapPolygon && p)
{
	if (this != &p)
	{
		Polygon::operator=(std::move(p));
		borderWidth = p.borderWidth;
		borderColor = p.borderColor;
		fillColor = p.fillColor;
		opacity = p.opacity;

	}
	return *this;
}

std::ostream & operator<<(std::ostream & os, const MapPolygon & obj)
{
	Polygon p = static_cast<Polygon>(obj);
	os << "Wierzcholki wielokata: \n" << p;
	os << "Grubosc krawedzi: " << obj.borderWidth << std::endl;
	os << "Kolor krawedzi wielokata: " << obj.borderColor << std::endl;
	os << "Kolor wnetrza wielokata: " << obj.fillColor << std::endl;
	os << "Poziom przezroczystosci: " << (int)obj.opacity << std::endl;
	return os;
}
