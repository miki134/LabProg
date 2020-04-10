#pragma once
#include"Punkt2.h"
#include"RGBA.h"
#include<iostream>

class MapPoint: Punkt2
{
	int visRadius; // promie� ko�a reprezentuj�cego punkt na mapie (w pikselach)

	RGBA visColor;
public:
	//Konstruktory
	MapPoint();	
	MapPoint(double x, double y, int radius, RGBA color);
	MapPoint(const MapPoint &p);
	MapPoint(const MapPoint&& mp);

	//Destruktor domy�lny
	~MapPoint();

	// kopiuj�cy operator przypisania
	MapPoint &operator=(const MapPoint &p);

	// przenosz�cy operator przypisania
	MapPoint &operator=(MapPoint &&p);

	//settery
	void setVisRadius(int r);
	void setVisColor(RGBA color);

	//gettery
	int getVisRadius();
	RGBA getVisColor();

	//operator <<
	friend std::ostream& operator<<(std::ostream& os, const MapPoint& obj);
};

//operator <<
std::ostream& operator<<(std::ostream& os, const MapPoint& obj);
