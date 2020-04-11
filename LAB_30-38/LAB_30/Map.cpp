/*! \file Map.cpp
	*
	* \brief Zawiera implementacje klasy Map
	*
	* \author Miko³aj Napiera³a
	* \date 2020.04.12
	* \version 1.00.00
	*/
#include "Map.h"
#include"MapPolygon.h"
#include<string>

Map::Map()
	:
	Map(&MapPolygonD(), 0, &MapBrokenD(), 0, &MapPoint(), 0)
{}

Map::Map(std::initializer_list<MapPolygonD> p, std::initializer_list<MapBrokenD> b, std::initializer_list<MapPoint> pT)
{
	setPolygons(p);
	setBroken(b);
	setPoints(pT);
}

Map::Map(MapPolygonD *p, unsigned int cP, MapBrokenD *b, unsigned int cB, MapPoint *pt, unsigned int cPt)
{
	countPolygons = cP;
	polygons = new MapPolygonD[countPolygons];

	for (unsigned int i = 0; i < countPolygons; i++)
		polygons[i] = p[i];

	countBroken = cB;
	broken = new MapBrokenD[countBroken];
	for (unsigned int i = 0; i < countBroken; i++)
		broken[i] = b[i];

	countPoints = cPt;
	points = new MapPoint[countPoints];
	for (unsigned int i = 0; i < countPoints; i++)
		points[i] = pt[i];
}

Map::Map(const Map & p)
{
	countPolygons = p.countPolygons;
	polygons = new MapPolygonD[countPolygons];
	for (unsigned int i = 0; i < countPolygons; i++)
		polygons[i] = p.polygons[i];

	countBroken = p.countBroken;
	broken = new MapBrokenD[countBroken];
	for (unsigned int i = 0; i < countBroken; i++)
		broken[i] = p.broken[i];

	countPoints = p.countPoints;
	points = new MapPoint[countPoints];
	for (unsigned int i = 0; i < countPoints; i++)
		points[i] = p.points[i];
}

Map::Map(Map && p)
{
	
	countPolygons = p.countPolygons;
	polygons = new MapPolygonD[countPolygons];
	for (unsigned int i = 0; i < countPolygons; i++)
		polygons[i] = p.polygons[i];

	countBroken = p.countBroken;
	broken = new MapBrokenD[countBroken];
	for (unsigned int i = 0; i < countBroken; i++)
		broken[i] = p.broken[i];

	countPoints = p.countPoints;
	points = new MapPoint[countPoints];
	for (unsigned int i = 0; i < countPoints; i++)
		points[i] = p.points[i];
	
}

Map::~Map()
{
	delete[] polygons;
	delete[] broken;
	delete[] points;
}

void Map::setPolygons(MapPolygonD *p, unsigned int c)
{
	countPolygons = c;
	polygons = new MapPolygonD[countPolygons];
	for (unsigned int i = 0; i < countPolygons; i++)
		polygons[i] = p[i];
}

void Map::setBroken(MapBrokenD * p, unsigned int c)
{
	countBroken = c;
	broken = new MapBrokenD[countBroken];
	for (unsigned int i = 0; i < countBroken; i++)
		broken[i] = p[i];
}

void Map::setPoints(MapPoint * p, unsigned int c)
{
	countPoints = c;
	points = new MapPoint[countPoints];
	for (unsigned int i = 0; i < countPoints; i++)
		points[i] = p[i];
}

void Map::setPolygons(std::initializer_list<MapPolygonD> p)
{
	countPolygons = p.size();
	polygons = new MapPolygonD[countPolygons];
	int i = 0;
	for (auto y : p)
	{
		polygons[i] = y;
		i++;
	}
}

void Map::setBroken(std::initializer_list<MapBrokenD> p)
{
	countBroken = p.size();
	broken = new MapBrokenD[countBroken];
	int i = 0;
	for (auto y : p)
	{
		broken[i] = y;
		i++;
	}
}

void Map::setPoints(std::initializer_list<MapPoint> p)
{
	countPoints = p.size();
	points = new MapPoint[countPoints];
	int i = 0;
	for (auto y : p)
	{
		points[i] = y;
		i++;
	}
}

MapPolygonD Map::getPolygons()
{
	return *polygons;
}

MapBrokenD Map::getBroken()
{
	return *broken;
}

MapPoint Map::getPoints()
{
	return *points;
}

std::ostream & operator<<(std::ostream & os, const Map & obj)
{
	
	for (unsigned int i = 0; i < obj.countPolygons; i++)
		os << obj.polygons[i].polygon << " - " << obj.polygons[i].description << std::endl;

	for (unsigned int i = 0; i < obj.countBroken; i++)
		os << obj.broken[i].broken << " - " << obj.broken[i].description << std::endl;

	for (unsigned int i = 0; i < obj.countPoints; i++)
		os << obj.points[i];
	return os;
}
