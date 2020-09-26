/*! \file Polygon.h
	*
	* \brief Klasa dzia�aj�ca na tablicy wierzcho�k�w z klasy Punkt2
	*
	* Klasa zawieraj�ca metody publiczne: zmieniaj�ca wierzcho�ki, zmieniaj�ca wsp�rz�dne danego wierzcho�ka, ustawiaj�ca wielko�� tablicy, obliczaj�ca obw�d wielok�ta, zwracaj�ca tablic� wierzcho�k�w, obliczaj�ca pole wypuk�ego wielok�ta,obliczaj�ca pole dowolnego wielok�ta
	* oraz metody prywatne: obliczaj�ca pole tr�jk�ta
	*
	* \author Miko�aj Napiera�a
	* \date 2020.03.02
	* \version 1.00.00
	*/
#pragma once
#include "Punkt2.h"
#include <vector>
#include<initializer_list>
#include<iostream>

class Polygon
{
	unsigned int count; /*!< Ilo�� wierzcho�k�w wielok�ta */

	Punkt2 * vertices; /*!< Tablica wierzocho�k�w */

public:
	static unsigned int number; /*< Ilo�� wywo�a� konstruktora*/

	//! Konstruktory
	Polygon() = default;
	Polygon(std::vector<std::vector<double>>);
	Polygon(const Polygon &p);
	Polygon(std::initializer_list<Punkt2>);

	//! Destruktor
	~Polygon()=default;

	//! Metoda konstruuj�ca tablic� wierzcho�k�w.
	/*!
	  \param vertices  argument typu Punkt*  przekazuj�cy tablic� wierzcho�k�w wielok�ta
	  \param count argument typu  unsigned int przekazuj�cy ilo�� wierzcho�k�w.
	  \sa setVertices()
	*/
	void setVertices(Punkt2 * vertices, int count);


	//! Metoda zmieniaj�ca wsp�lrz�dne i-tego wierzcho�ka.
	/*!
	  \param i argument typu int  przekazuj�cy numer wiercho�ka do zmiany
	  \param x argument typu  double przekazuj�cy now� warto�� do wsp�rz�dnej x.
	  \param y argument typu  double przekazuj�cy now� warto�� do wsp�rz�dnej y.
	  \sa changeVertex()
	*/
	void changeVertex(int i, double x, double y);

	//! Metoda ustawiaj�ca ilo�� wierzcho�k�w.
	/*!
	  \param n argument typu int przekazuj�cy ilo�� wiercho�k�w
	  \sa setVeritces()
	*/
	void setCount(int n);

	//! Metoda obliczaj�ca obw�d wielok�ta.
	double getPerimeter();

	//! Metoda zwracaj�ca tablic� wierzcho�k�w
	Punkt2 getVertices(); 

	//! Metoda obliczaj�ca pole wypuk�ego wielok�ta
	double getConvexArea();

	//! Metoda obliczaj�ca pole dowolnego wielok�ta
	double getArea();

	//! Metoda zwracaj�ca wierzcho�ek
	Punkt2 getVertex(int i);

	//! Metoda zwracaj�ca wierzcho�ek - prze�adowanie operatora indeksowania []
	Punkt2 &operator[](int i);

	Polygon &operator=(Polygon &p);

private:
	//!Metoda oblicza pole tr�jk�ta.
	double getTriangleArea(Punkt2 &p1, Punkt2 &p2, Punkt2 &p3);	

	// funkcja zaprzyja�niona, umo�liaj�ca strumieniowanie danych poprzez operator <<
	friend std::ostream& operator<< (std::ostream& os, const Polygon& obj);
};

//strumieniowanie warto�ci prywatnych klasy Polygon, poprzez operator <<
std::ostream& operator<< (std::ostream& os, const Polygon& obj);