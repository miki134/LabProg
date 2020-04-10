/*! \file Punkt2.cpp
*
* \brief Zawiera definicj� klasy Punkt2
*
* Plik zawiera implementacj� metod klasy Punkt2.
*
* \author Miko�aj Napiera�a
* \date 2020.03.02
* \version 1.00.00
*/

#include "Punkt2.h"
#include <cmath> //math.h
#include <vector>

#define PI 3.1415

unsigned int Punkt2::number = 0;

Punkt2::Punkt2()
{
	number++;
	std::cout << "Uruchomiono konstruktor domyslny" << std::endl;
}

Punkt2::Punkt2(double x, double y)
{
	this->x = x;
	this->y = y;
	number++;
	std::cout << "Uruchomiono konstruktor: (" << x << ", " << y << ")" << std::endl;
}

Punkt2::Punkt2(const Punkt2 &p)
{
	x = p.x;
	y = p.y;
	number++;
	std::cout << "Uruchomiono konstruktor kopiujacy" << std::endl;
}

Punkt2::Punkt2(Punkt2 &&p)
{
	x = p.x;
	y = p.y;
	number++;

	p.x = NULL;
	p.y = NULL;
	std::cout << "Uruchomiono konstruktor przenoszacy" << std::endl;
}

void Punkt2::setX(double x)
{
	this->x = x;
}

void Punkt2::setY(double y)
{
	this->y=y;
}

double Punkt2::getX()
{
	return x;
}

double Punkt2::getY()
{
	return y;
}

double Punkt2::getRadius()
{
	return sqrt(pow(x, 2) + pow(y, 2));
}

double Punkt2::getAngle()
{
	return atan2(y, x) * 180 / PI;
}

double Punkt2::getDistance(Punkt2 _p)
{
	return abs(sqrt(pow(x - _p.getX(), 2) + pow(y - _p.getY(), 2)));
}

std::ostream& operator<<(std::ostream& os, const Punkt2& obj)
{
	return os << "( " << obj.x << ", " << obj.y << " )";
}