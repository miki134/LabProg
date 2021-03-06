/*! \file Matrix.h
	*
	* \brief Klasa zawieracjąca tablice dwuwymiarową oraz liczbe kolumn i wierszy
	*
	* Klasa zawierająca metody publiczne: przeładowanie operatora[] oraz operatora()
	*
	* \author Mikołaj Napierała
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

	//Metoda zwracająca wiersz tablicy - przeładowanie operatora []
	double *operator[](int x);

	//Metoda zwracająca wartość w tablicy - przeładowanie operatora ()
	double &operator()(int x, int y);
};

