/*! \file Map.h
	*
	* \brief Klasa Map
	*
	* \author Miko³aj Napiera³a
	* \date 2020.04.12
	* \version 1.00.00
	*/
#pragma once
#include"MapPolygon.h"
#include"MapPoint.h"
#include"MapBroken.h"
#include<initializer_list>
#include<iostream>

struct MapPolygonD
{
	MapPolygon polygon;
	std::string description;

	MapPolygonD() :
		polygon(MapPolygon()),
		description("")
	{}

	MapPolygonD(MapPolygon p, std::string d)
		:
		polygon(p),
		description(d)
	{}
};

struct MapBrokenD
{
	MapBroken broken;
	std::string description;

	MapBrokenD():
		broken(MapBroken()), 
		description("")
	{}

	MapBrokenD(MapBroken p, std::string d):
		broken(p),
		description(d)
	{}
};

class Map
{
	MapPolygonD * polygons;
	unsigned int countPolygons;

	MapBrokenD * broken;
	unsigned int countBroken;

	MapPoint * points;
	unsigned int countPoints;
public:
	//konstruktory
	Map();
	Map(std::initializer_list<MapPolygonD>p, std::initializer_list<MapBrokenD>b, std::initializer_list<MapPoint>pT);
	Map(MapPolygonD *p,unsigned int cP, MapBrokenD *b, unsigned int cB, MapPoint *pt, unsigned int cPt);
	Map(const Map &p);
	Map(Map &&p);

	//destruktory
	~Map();

	//settery
	void setPolygons(MapPolygonD *p, unsigned int c);
	void setBroken(MapBrokenD *p, unsigned int c);
	void setPoints(MapPoint *p, unsigned int c);

	void setPolygons(std::initializer_list<MapPolygonD>p);
	void setBroken(std::initializer_list<MapBrokenD>p);
	void setPoints(std::initializer_list<MapPoint>p);

	//gettery
	MapPolygonD getPolygons();
	MapBrokenD getBroken();
	MapPoint getPoints();

	//operatory
	friend std::ostream& operator<<(std::ostream& os, const Map& obj);
	
};

std::ostream& operator<<(std::ostream& os, const Map& obj);