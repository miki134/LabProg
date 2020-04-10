#include "MapPolygon.h"

MapPolygon::MapPolygon()
	:
	MapPolygon(0, {0,0,0}, {0,0,0})
{}

MapPolygon::MapPolygon(unsigned int bW, RGBA bC, RGBA f)
	:
	MapPolygon(bW, bC ,f, 255)
{}

MapPolygon::MapPolygon(unsigned int bW, RGBA bC, RGBA f, unsigned char o)
{
	borderWidth = bW;
	borderColor = bC;
	fillColor = f;
	opacity = o;

	borderColor.setA(opacity);
	fillColor.setA(opacity);
}

MapPolygon::MapPolygon(const MapPolygon & p)
{
	borderWidth = p.borderWidth;
	borderColor = p.borderColor;
	fillColor = p.fillColor;
	opacity = p.opacity;
}

MapPolygon::MapPolygon(MapPolygon && p)
{
	borderWidth = p.borderWidth;
	borderColor = p.borderColor;
	fillColor = p.fillColor;
	opacity = p.opacity;
}

void MapPolygon::setBorderWidth(unsigned int b)
{
	borderWidth = b;
}

void MapPolygon::setBorderColor(RGBA b)
{
	borderColor = b;
}

void MapPolygon::setFillColor(RGBA f)
{
	fillColor = f;
}

void MapPolygon::setOpacity(unsigned char o)
{
	opacity = o;
}

unsigned int MapPolygon::getBorderWidth()
{
	return borderWidth;
}

RGBA MapPolygon::getBorderColor()
{
	return borderColor;
}

RGBA MapPolygon::getFillColor()
{
	return fillColor;
}

unsigned char MapPolygon::getOpacity()
{
	return opacity;
}

std::ostream & operator<<(std::ostream & os, const MapPolygon & obj)
{
	os << "Grubosc krawedzi: " << obj.borderWidth << std::endl;
	os << "Kolor krawedzi wielokata: " << obj.borderColor << std::endl;
	os << "Kolor wnetrza wielokata: " << obj.fillColor << std::endl;
	os << "Poziom przezroczystosci: " << (int)obj.opacity << std::endl;
	return os;
}
