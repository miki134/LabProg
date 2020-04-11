/*! \file Punkt2.cpp
	*
	* \brief Zawiera definicjê klasy Punkt2
	*
	* Plik zawiera implementacjê metod klasy Punkt2 oraz funkcji zaprzyjaŸnionych.
	*
	* \author Miko³aj Napiera³a
	* \date 2020.04.12
	* \version 1.00.00
	*/

#include "Punkt2.h"
#include <cmath> //math.h
#include <vector>

#define PI 3.1415

unsigned int Punkt2::number = 0;

Punkt2::Punkt2()
	:
	Punkt2(0,0)
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
	:
	x{p.x},
	y{p.y}
{
	number++;
	std::cout << "Uruchomiono konstruktor kopiujacy" << std::endl;
}

Punkt2::Punkt2(Punkt2 &&p)
	:
	x{p.x},
	y{p.y}
{
	p.x = NULL;
	p.y = NULL;
	std::cout << "Uruchomiono konstruktor przenoszacy" << std::endl;
	number++;
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


Punkt2 Punkt2::operator+(const Punkt2 &p) const
{
	return Punkt2(x + p.x, y + p.y);
}

Punkt2 Punkt2::operator-(const Punkt2 &p) const
{
	return Punkt2(x - p.x, y - p.y);
}

Punkt2 & Punkt2::operator=(Punkt2 & p)
{
	if (&p != this)
	{
		x = p.x;
		y = p.y;
	}
	return *this;
}

Punkt2& Punkt2::operator=(const Punkt2 &&p)
{
	if (&p != this)
	{
		x = p.x;
		y = p.y;
	}
	return *this;
}

Punkt2  operator+(Punkt2 &p1, Punkt2 &p2)
{
	return Punkt2(p1.getX() + p2.getX(), p1.getY() + p2.getY());
}

Punkt2 operator*(Punkt2 &p1, Punkt2 &p2)
{
	return Punkt2(p1.getX() * p2.getX(), p1.getY() * p2.getY());
}

std::ostream& operator<<(std::ostream& os, const Punkt2& obj)
{
	return os << "( " << obj.x << ", " << obj.y << " )";
}
