/*! \file MapPoint.h
	*
	* \brief Klasa MapPoint
	*
	* \author Miko³aj Napiera³a
	* \date 2020.04.12
	* \version 1.00.00
	*/
#pragma once
#include"Punkt2.h"
#include"RGBA.h"
#include<iostream>

class MapPoint: Punkt2
{
	unsigned int visRadius; // promieñ ko³a reprezentuj¹cego punkt na mapie (w pikselach)

	RGBA visColor;
public:
	//Konstruktory
	MapPoint();	
	MapPoint(double x, double y, unsigned int radius, RGBA color);
	MapPoint(const MapPoint &p);
	MapPoint(const MapPoint&& mp);

	//Destruktor domyœlny
	~MapPoint();

	//funkcje konwertuj¹ce na typ unsigned int oraz RGBA
	explicit operator unsigned int();
	operator RGBA();

	// kopiuj¹cy operator przypisania
	MapPoint &operator=(MapPoint &p);

	// przenosz¹cy operator przypisania
	MapPoint &operator=(MapPoint &&p);

	//settery
	void setVisRadius(unsigned int r);
	void setVisColor(RGBA color);

	//gettery
	int getVisRadius();
	RGBA getVisColor();

	//operator <<
	friend std::ostream& operator<<(std::ostream& os, const MapPoint& obj);
};

//operator <<
std::ostream& operator<<(std::ostream& os, const MapPoint& obj);
