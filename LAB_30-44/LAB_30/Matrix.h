/*! \file Matrix.h
	*
	* \brief Klasa zawieracj�ca tablice dwuwymiarow� oraz liczbe kolumn i wierszy
	*
	* Klasa zawieraj�ca metody publiczne: prze�adowanie operatora[] oraz operatora()
	*
	* \author Miko�aj Napiera�a
	* \date 2020.04.10
	* \version 1.00.00
	*/
#pragma once
class Matrix
{
public:
	double ** tab;
	int sizeX; // wymiar poziomy tablicy tab
	int sizeY; // wymiar pionowy tablicy tab

	//Metoda zwracaj�ca wiersz tablicy - prze�adowanie operatora []
	double *operator[](int x);

	//Metoda zwracaj�ca warto�� w tablicy - prze�adowanie operatora ()
	double &operator()(int x, int y);
};

