/*! \file Matrix.cpp
	*
	* \brief Zawiera definicj� klasy Matrix
	*
	* Zawiera impementacj� metod klasy Matrix
	*
	* \author Miko�aj Napiera�a
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
