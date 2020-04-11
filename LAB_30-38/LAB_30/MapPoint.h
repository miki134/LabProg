/*! \file MapPoint.h
	*
	* \brief Klasa MapPoint
	*
	* \author Miko�aj Napiera�a
	* \date 2020.04.12
	* \version 1.00.00
	*/
#pragma once
#include"Punkt2.h"
#include"RGBA.h"
#include<iostream>

class MapPoint: Punkt2
{
	unsigned int visRadius; // promie� ko�a reprezentuj�cego punkt na mapie (w pikselach)

	RGBA visColor;
public:
	//Konstruktory
	MapPoint();	
	MapPoint(double x, double y, unsigned int radius, RGBA color);
	MapPoint(const MapPoint &p);
	MapPoint(const MapPoint&& mp);

	//Destruktor domy�lny
	~MapPoint();

	//funkcje konwertuj�ce na typ unsigned int oraz RGBA
	explicit operator unsigned int();
	operator RGBA();

	// kopiuj�cy operator przypisania
	MapPoint &operator=(MapPoint &p);

	// przenosz�cy operator przypisania
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
