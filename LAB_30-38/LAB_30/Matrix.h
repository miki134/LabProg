/*! \file Matrix.h
	*
	* \brief Klasa zawieracj¹ca tablice dwuwymiarow¹ oraz liczbe kolumn i wierszy
	*
	* Klasa zawieraj¹ca metody publiczne: prze³adowanie operatora[] oraz operatora()
	*
	* \author Miko³aj Napiera³a
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

	//Metoda zwracaj¹ca wiersz tablicy - prze³adowanie operatora []
	double *operator[](int x);

	//Metoda zwracaj¹ca wartoœæ w tablicy - prze³adowanie operatora ()
	double &operator()(int x, int y);
};

