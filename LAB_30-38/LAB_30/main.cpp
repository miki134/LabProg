/*! \file main.cpp
	*
	* \brief Kod programu testuj�cego klas� Punkt2
	*
	* Plik zawiera funkcj� main(),
	* w kt�rej wykonano kilka podstawowych test�w
	* dotycz�cych klasy Punkt2
	*
	* \author Miko�aj Napiera�a
	* \date 2020.03.02
	* \version 1.00.00
	*/
#include <iostream>
#include<vector>
#include<initializer_list>

#include "Polygon.h"
#include "Punkt2.h"

int main()
{
	/*TESTY*/




	/*std::vector <std::vector<double>> coords = { {0.0,0.0}, {1.0,0.0}, {1.0,1.0}, {800,1.0} };

	Polygon kwadrat = Polygon(coords);
	Punkt2 w1 = kwadrat[2];
	//Punkt2 w1 = kwadrat.getVertex(2);
	std::cout << w1;	
	std::initializer_list<Punkt2> list = { Punkt2(1,2),Punkt2(0,0),Punkt2(3,12) };
	Polygon test = Polygon(list);
	std::cout << test;
	Punkt2 p1 = Punkt2(10.0, 20.0);
	std::cout << p1 << std::endl;
	std::vector<std::vector<double>> tabVertices;
	std::vector<double>tab;
	for (int i = 0; i < 5; i++)
	{
		for (int y = 0; y < 2; y++)
		{
			tab.push_back(y);
		}
		tabVertices.push_back(tab);
	}
	tabVertices[4][1];
	Polygon a(tabVertices);
	Polygon b;
	b = a;
	std::cout << b;
	Punkt2 a(2,3);
	
	Punkt2 w1 = Punkt2(10.0, 20.0);
	Punkt2 w2 = Punkt2(50.0, 120.0);
	Punkt2 w3 = w1 + w2;
	Punkt2 w4 = w1 * w2;

	int count = 4;

	Punkt2 *punkty = new Punkt2[count];
	//Punkt2 punkty[4];
	/*punkt 0 = (0,0)
	punkty[0].setX(0);
	punkty[0].setY(0);
	/*punkt 1 = (2,0)
	punkty[1].setX(2);
	punkty[1].setY(0);
	/*punkt 2 = (2,2)
	punkty[2].setX(2);
	punkty[2].setY(2);
	/*punkt 0 = (0,2)
	punkty[3].setX(0);
	punkty[3].setY(2);

	Polygon *czworok�t = new Polygon;
	czworok�t->setCount(count);
	czworok�t->setVertices(punkty, count);

	czworok�t->changeVertex(0,0,0);

	double obw = czworok�t->getPerimeter();

	delete czworok�t;
	delete punkty;
	*/
	system("pause");
	return 0;
}