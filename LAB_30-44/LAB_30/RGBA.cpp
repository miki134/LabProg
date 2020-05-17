/*! \file RGBA.cpp
	*
	* \brief Zawiera implementacje klasy RGBA
	*
	* \author Miko³aj Napiera³a
	* \date 2020.04.15
	* \version 1.00.00
	*/
#include"RGBA.h"

void RGBA::setR(unsigned char r)
{
	this->r = r;
}

void RGBA::setG(unsigned char g)
{
	this->g = g;
}

void RGBA::setB(unsigned char b)
{
	this->b = b;
}

void RGBA::setA(unsigned char a)
{
	this->a = a;
}

unsigned char RGBA::getR()
{
	return r;
}

unsigned char RGBA::getG()
{
	return g;
}

unsigned char RGBA::getB()
{
	return b;
}

unsigned char RGBA::getA()
{
	return a;
}

RGBA::RGBA()
	:
	RGBA(0, 0, 0, 255)
{}

RGBA::RGBA(unsigned char r, unsigned char g, unsigned char b)
{
	this->r = r;
	this->g = g;
	this->b = b;
	a = 255;
}

RGBA::RGBA(unsigned char r, unsigned char g, unsigned char b, unsigned char a)
{
	this->r = r;
	this->g = g;
	this->b = b;
	this->a = a;
}

RGBA::RGBA(const RGBA & p)
:
r{ p.r },
g{ p.g },
b{ p.g },
a{ p.a }
{}

RGBA::RGBA(const RGBA && p)
	:
	r{ p.r },
	g{ p.g },
	b{ p.g },
	a{ p.a }
{}


RGBA & RGBA::operator=(const RGBA & p)
{
	if (this != &p)
	{
		r = p.r;
		g = p.g;
		b = p.b;
		a = p.a;
	}
	return *this;
}

std::ostream& operator<<(std::ostream& os, const RGBA& obj)
{
	os << "color(" << (int)obj.r << ", " << (int)obj.g << ", " << (int)obj.b << ", " << (int)obj.a << ") ";
	return os;
}

