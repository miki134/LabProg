/*! \file Matrix.cpp
	*
	* \brief Zawiera definicję klasy Matrix
	*
	* Zawiera impementację metod klasy Matrix
	*
	* \author Mikołaj Napierała
	* \date 2020.04.10
	* \version 1.00.00
	*/
#include "Matrix.h"

double *Matrix::operator[](int x)
{
	return tab[x];
}

double &Matrix::operator()(int x, int y)
{
	return tab[x][y];
}
