/*! \file MapBroken.cpp
	*
	* \brief Zawiera implementacje klasy MapBroken
	*
	* \author Miko³aj Napiera³a
	* \date 2020.04.12
	* \version 1.00.00
	*/
#include "MapBroken.h"

MapBroken::MapBroken()
	:
	MapBroken(0, { 0,0,0 }, { Punkt2{0,0} })
{}

MapBroken::MapBroken(unsigned int bW, RGBA bC)
	:
	MapBroken(bW, bC, { Punkt2{0,0} })
{}

MapBroken::MapBroken(unsigned int bW, RGBA bC, std::initializer_list<Punkt2> list)
	:
	Polygon(list)
{
	borderWidth = bW;
	borderColor = bC;
}

MapBroken::MapBroken(const MapBroken & p)
	:
	Polygon(p),
	borderWidth{p.borderWidth },
	borderColor{p.borderColor }
{}

MapBroken::MapBroken(MapBroken && p)
	:
	Polygon(p),
	borderWidth{ p.borderWidth },
	borderColor{ p.borderColor }
{}


void MapBroken::setBorderWidth(unsigned int b)
{
	borderWidth = b;
}

void MapBroken::setBorderColor(RGBA b)
{
	borderColor = b;
}

unsigned int MapBroken::getBorderWidth()
{
	return borderWidth;
}

RGBA MapBroken::getBorderColor()
{
	return borderColor;
}

MapBroken & MapBroken::operator=(MapBroken & p)
{
	if (this != &p)
	{
		Polygon::operator=(p);
		borderWidth = p.borderWidth;
		borderColor = p.borderColor;
	}
	return *this;
}

MapBroken & MapBroken::operator=(MapBroken && p)
{
	if (this != &p)
	{
		Polygon::operator=(p);
		borderWidth = p.borderWidth;
		borderColor = p.borderColor;
	}
	return *this;
}

std::ostream & operator<<(std::ostream & os, const MapBroken & obj)
{
	Polygon p = static_cast<Polygon>(obj);
	os << "Wierzcholki wielokata: \n" << p;
	os << "Grubosc krawedzi: " << obj.borderWidth << std::endl;
	os << "Kolor krawedzi wielokata: " << obj.borderColor << std::endl;
	return os;
}
