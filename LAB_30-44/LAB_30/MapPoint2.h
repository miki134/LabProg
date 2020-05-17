/*! \file MapPoint2.h
	*
	* \brief Klasa MapPoint2
	*
	* \author Miko³aj Napiera³a
	* \date 2020.04.12
	* \version 1.00.00
	*/
#pragma once
#include"Punkt2.h"
#include"RGBA.h"
#include<iostream>

class MapPoint2: Punkt2, RGBA
{
public:
	//konstruktory
	MapPoint2();
	MapPoint2(double _x, double _y, unsigned char _r, unsigned char _g, unsigned char _b, unsigned char _a);
	MapPoint2(const MapPoint2 &p);
	MapPoint2(MapPoint2 &&p);

	//operatory
	friend std::ostream& operator<<(std::ostream& os, const MapPoint2& obj);
	MapPoint2& operator=(MapPoint2 &p);
};

std::ostream& operator<<(std::ostream& os, const MapPoint2& obj);