/*! \file MapPoint2.cpp
	*
	* \brief Zawiera implementacje klasy MapPoint2
	*
	* \author Miko³aj Napiera³a
	* \date 2020.04.12
	* \version 1.00.00
	*/
#include "MapPoint2.h"

MapPoint2::MapPoint2()
	:
	Punkt2(),
	RGBA()
{}

MapPoint2::MapPoint2(double _x, double _y, unsigned char _r, unsigned char _g, unsigned char _b, unsigned char _a)
	:
	Punkt2(_x, _y),
	RGBA(_r, _g, _b, _a)
{}

MapPoint2::MapPoint2(const MapPoint2 & p)
	:
	Punkt2(p),
	RGBA(p)
{}

MapPoint2::MapPoint2(MapPoint2 && p)
	:
	Punkt2(p),
	RGBA(p)
{}

MapPoint2 & MapPoint2::operator=(MapPoint2 & p)
{
	if (this != &p)
	{
		Punkt2::Punkt2(p);
		RGBA::RGBA(p);
	}
	return *this;
}

std::ostream & operator<<(std::ostream & os, const MapPoint2 & obj)
{
	Punkt2 point = static_cast<Punkt2>(obj);
	RGBA color = static_cast<RGBA>(obj);
	os << point << std::endl << color;
	return os;
}
