/*! \file Polygon.h
	*
	* \brief Klasa dzia³aj¹ca na tablicy wierzcho³ków z klasy Punkt2
	*
	* Klasa zawieraj¹ca metody publiczne: zmieniaj¹ca wierzcho³ki, zmieniaj¹ca wspó³rzêdne danego wierzcho³ka, ustawiaj¹ca wielkoœæ tablicy, obliczaj¹ca obwód wielok¹ta, zwracaj¹ca tablicê wierzcho³ków, obliczaj¹ca pole wypuk³ego wielok¹ta,obliczaj¹ca pole dowolnego wielok¹ta
	* oraz metody prywatne: obliczaj¹ca pole trójk¹ta
	*
	* \author Miko³aj Napiera³a
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
	unsigned int count; /*!< Iloœæ wierzcho³ków wielok¹ta */

	Punkt2 * vertices; /*!< Tablica wierzocho³ków */

public:
	static unsigned int number; /*< Iloœæ wywo³añ konstruktora*/

	//! Konstruktory
	Polygon() = default;
	Polygon(std::vector<std::vector<double>>);
	Polygon(const Polygon &p);
	Polygon(std::initializer_list<Punkt2>);

	//! Destruktor
	~Polygon()=default;

	//! Metoda konstruuj¹ca tablicê wierzcho³ków.
	/*!
	  \param vertices  argument typu Punkt*  przekazuj¹cy tablicê wierzcho³ków wielok¹ta
	  \param count argument typu  unsigned int przekazuj¹cy iloœæ wierzcho³ków.
	  \sa setVertices()
	*/
	void setVertices(Punkt2 * vertices, int count);


	//! Metoda zmieniaj¹ca wspólrzêdne i-tego wierzcho³ka.
	/*!
	  \param i argument typu int  przekazuj¹cy numer wiercho³ka do zmiany
	  \param x argument typu  double przekazuj¹cy now¹ wartoœæ do wspó³rzêdnej x.
	  \param y argument typu  double przekazuj¹cy now¹ wartoœæ do wspó³rzêdnej y.
	  \sa changeVertex()
	*/
	void changeVertex(int i, double x, double y);

	//! Metoda ustawiaj¹ca iloœæ wierzcho³ków.
	/*!
	  \param n argument typu int przekazuj¹cy iloœæ wiercho³ków
	  \sa setVeritces()
	*/
	void setCount(int n);

	//! Metoda obliczaj¹ca obwód wielok¹ta.
	double getPerimeter();

	//! Metoda zwracaj¹ca tablicê wierzcho³ków
	Punkt2 getVertices(); 

	//! Metoda obliczaj¹ca pole wypuk³ego wielok¹ta
	double getConvexArea();

	//! Metoda obliczaj¹ca pole dowolnego wielok¹ta
	double getArea();

	//! Metoda zwracaj¹ca wierzcho³ek
	Punkt2 getVertex(int i);

	//! Metoda zwracaj¹ca wierzcho³ek - prze³adowanie operatora indeksowania []
	Punkt2 &operator[](int i);

	Polygon &operator=(Polygon &p);

private:
	//!Metoda oblicza pole trójk¹ta.
	double getTriangleArea(Punkt2 &p1, Punkt2 &p2, Punkt2 &p3);	

	// funkcja zaprzyjaŸniona, umo¿liaj¹ca strumieniowanie danych poprzez operator <<
	friend std::ostream& operator<< (std::ostream& os, const Polygon& obj);
};

//strumieniowanie wartoœci prywatnych klasy Polygon, poprzez operator <<
std::ostream& operator<< (std::ostream& os, const Polygon& obj);