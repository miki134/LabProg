/*! \file Matrix.cpp
	*
	* \brief Zawiera definicjê klasy Matrix
	*
	* Zawiera impementacjê metod klasy Matrix
	*
	* \author Miko³aj Napiera³a
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
