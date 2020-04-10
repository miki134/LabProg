/*! \file Polygon.cpp
	*
	* \brief Klasa dzia³aj¹ca na tablicy wierzcho³ków z klasy Punkt2
	*
	* Deklaracja metod w klasie:
	* Klasa zmieniaj¹ca wierzcho³ki, ustawiaj¹ca wielkoœæ tablicy, obliczaj¹ca obwód wielok¹ta
	*
	* \author Miko³aj Napiera³a
	* \date 2020.03.02
	* \version 1.00.00
	*/

#include "Polygon.h"

#include<cmath>
#include<string>
#include<iostream>
#include<initializer_list>

unsigned int Polygon::number = 0;

Polygon::Polygon()
{
	number++;
}

Polygon::Polygon(std::vector<std::vector<double>> vertices)
{
	count = vertices.size();
	this->vertices = new Punkt2[count];

	for (unsigned int i = 0; i < count; i++)
	{
		this->vertices[i] = Punkt2(vertices[i][0], vertices[i][1]);
	}
	number++;
}

Polygon::Polygon(const Polygon &p)
{
	count = p.count;
	for (unsigned int i = 0;i < count;i++)
	{
		vertices[i] = p.vertices[i];
	}
	number++;
}

Polygon::Polygon(std::initializer_list<Punkt2> list)
{
	count = list.size();
	this->vertices = new Punkt2[count];
	int i = 0;
	for (auto y : list)
	{
		this->vertices[i] = y;
		i++;
	}
	number++;
}

Polygon::Polygon(Polygon && p)
{
	count = p.count;
	vertices = p.vertices;
	number++;

	p.vertices = nullptr;
	p.count = 0;
}

Polygon::~Polygon()
{
	if (vertices)
		delete[] vertices;
}

void Polygon::setVertices(Punkt2 * vertices, int count)
{
	this->vertices = vertices;
}

void Polygon::changeVertex(int i, double x, double y)
{
	vertices[i].setX(x);
	vertices[i].setY(y);
}

void Polygon::setCount(int n)
{
	count = n;
}

double Polygon::getPerimeter()
{
	double suma = vertices[count].getDistance(vertices[0]);

	for (unsigned int i = 0; i < count-1; i++) 
		suma += vertices[i].getDistance(vertices[i+1]);
	
	return suma;
}

Punkt2 Polygon::getVertices()
{
	return *vertices;
}

double Polygon::getConvexArea()
{
	double edge1, edge2, edge3;
	bool calculate = true;

	for (unsigned int i = 0; i < count; i++)
	{
		for (unsigned int j = 0; j < count-1; j++)
		{
			for (unsigned int p = 0; p < count; p++)
			{
				edge1 = (vertices[p].getY() - vertices[i].getY())*(vertices[j].getX() - vertices[i].getX()) - (vertices[j].getY() - vertices[i].getY())*(vertices[p].getX() - vertices[i].getX());
				edge2 = (vertices[p].getY() - vertices[j].getY())*(vertices[j+1].getX() - vertices[j].getX()) - (vertices[j+1].getY() - vertices[j].getY())*(vertices[p].getX() - vertices[j].getX());
				edge3 = (vertices[p].getY() - vertices[j+1].getY())*(vertices[i].getX() - vertices[j+1].getX()) - (vertices[i].getY() - vertices[j+1].getY())*(vertices[p].getX() - vertices[j+1].getX());

				if ((edge1 > 0 && edge2 > 0 && edge3 > 0) || (edge1 < 0 && edge2 < 0 && edge3 < 0)) calculate = false;
			}
		}
	}

	
	if (calculate)
	{
		double convexArea = 0;
		for (unsigned int i = 1; i < count-1; i++)
		{
			convexArea += getTriangleArea(vertices[0], vertices[i], vertices[i + 1]);
		}
		return convexArea;
	}
	else return -1;
}

double Polygon::getArea()
{
	double Area;
	double areaPlus = vertices[count].getX()*vertices[0].getY();
	double areaMinus = -(vertices[0].getX()*vertices[count].getY());
	for (unsigned int i = 0; i < count-1; i++)
	{
		areaPlus += vertices[i].getX()*vertices[i + 1].getY();
		areaMinus -= vertices[i + 1].getX()*vertices[i].getY();
	}
	Area = (abs(areaPlus + areaMinus))/2;
	return Area;
}

Punkt2 Polygon::getVertex(int i)
{
	return vertices[i];
}

Punkt2 & Polygon::operator[](int i)
{
	return vertices[i];
}

Polygon & Polygon::operator=(Polygon & p)
{
	if (&p != this)
	{
		delete[] vertices;
		count = p.count;
		vertices = new Punkt2[count];
		for (unsigned int i = 0; i < p.count; i++)
			vertices[i] = p.vertices[i];
	}
	return *this;
}

double Polygon::getTriangleArea(Punkt2 &p1, Punkt2 &p2, Punkt2 &p3)
{
	double vector_x_1, vector_y_1;
	double vector_x_2, vector_y_2;
	/*[vector_x_1, vector_y_1]*/
	vector_x_1 = abs(p1.getX() - p2.getX());
	vector_y_1 = abs(p1.getY() - p2.getY());

	/*[vector_x_2, vector_y_2]*/
	vector_x_2 = abs(p1.getX() - p3.getX());
	vector_y_2 = abs(p1.getY() - p3.getY());

	double d;
	d = abs((vector_x_1*vector_y_2) - (vector_y_1*vector_x_2));
	return d/2;
}

Punkt2 Punkt2::operator+(const Punkt2 &p) const
{
	return Punkt2(x + p.x, y + p.y);
}

Punkt2 Punkt2::operator-(const Punkt2 &p) const
{
	return Punkt2(x - p.x, y - p.y);
}

Punkt2 & Punkt2::operator=(const Punkt2 & p)
{
	if (&p != this)
	{
		x = p.x;
		y = p.y;
	}
	return *this;
}

Punkt2  operator+(Punkt2 &p1,Punkt2 &p2)
{
	return Punkt2(p1.getX() + p2.getX(), p1.getY() + p2.getY());
}

Punkt2 operator*(Punkt2 &p1, Punkt2 &p2)
{
	return Punkt2(p1.getX() * p2.getX(), p1.getY() * p2.getY());
}

std::ostream& operator<< (std::ostream& os, const Polygon& obj)
{
	std::string out = "";
	for (unsigned int i = 0; i < obj.count; i++)
	{

		out = out + "( " + std::to_string(obj.vertices[i].getX()) + ", " + std::to_string(obj.vertices[i].getY()) + " )\n";
	}
	os << out;
	return os;
}