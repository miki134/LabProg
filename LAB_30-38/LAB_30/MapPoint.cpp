/*! \file MapPoint.cpp
	*
	* \brief Zawiera implementacje klasy MapPoint
	*
	* \author Miko�aj Napiera�a
	* \date 2020.04.12
	* \version 1.00.00
	*/
#include "MapPoint.h"
#include "Punkt2.h"

MapPoint::MapPoint()
	:
	MapPoint( 0, 0, 0, { 0,0,0,255 } )
{}

MapPoint::MapPoint(double x, double y, unsigned int radius, RGBA color)
	:
	Punkt2(x, y),
	visRadius{ radius },
	visColor{ color }
{}

MapPoint::MapPoint(const MapPoint& mp) :
	Punkt2(mp), 
	visRadius{ mp.visRadius }, 
	visColor{ mp.visColor }
{}

MapPoint::MapPoint(const MapPoint&& mp) :
	Punkt2(std::move(mp)), 
	visRadius{ mp.visRadius }, 
	visColor{ mp.visColor }
{}

MapPoint::~MapPoint()
{}

MapPoint::operator unsigned int()
{
	return visRadius;
}

MapPoint::operator RGBA()
{
	return visColor;
}

MapPoint& MapPoint::operator=(MapPoint& mp)
{
	if (this != &mp)
	{
		Punkt2::operator=(mp);
		visRadius = mp.visRadius;
		visColor = mp.visColor;
	}

	return *this;
}

MapPoint& MapPoint::operator=(MapPoint&& mp)
{
	if (this != &mp)
	{
		Punkt2::operator=(std::move(mp));
		visRadius = mp.getVisRadius();
		visColor = mp.getVisColor();
	}

	return *this;
}

void MapPoint::setVisRadius(unsigned int r)
{
	visRadius = r;
}

void MapPoint::setVisColor(RGBA color)
{
	visColor = color;
}

int MapPoint::getVisRadius()
{
	return visRadius;
}

RGBA MapPoint::getVisColor()
{
	return visColor;
}

std::ostream& operator<<(std::ostream& os, const MapPoint &obj)
{
	Punkt2 p = static_cast<Punkt2>(obj);

	os << p << obj.visColor << "width(" << obj.visRadius << ")\n";

	return os;
}