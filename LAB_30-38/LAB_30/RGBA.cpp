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


std::ostream& operator<<(std::ostream& os, const RGBA& obj)
{
	os << "color(" << (int)obj.r << ", " << (int)obj.g << ", " << (int)obj.b << ", " << (int)obj.a << ") ";
	return os;
}

