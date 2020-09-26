/*! \file main.cpp
	*
	* \brief Kod programu testuj¹cego klasê Punkt2
	*
	* Plik zawiera funkcjê main(),
	* w której wykonano kilka podstawowych testów klas
	*
	* \author Miko³aj Napiera³a
	* \date 2020.04.15
	* \version 1.00.00
	*/
#include <iostream>
#include<vector>
#include<initializer_list>

#include "Polygon.h"
#include "Punkt2.h"
#include "Matrix.h"
#include "MapPoint.h"
#include "MapPolygon.h"
#include "Map.h"
//Punkt2 f(Punkt2 p) { return p; };
int main()
{
	/*TESTY*/

	/*std::initializer_list<Punkt2> k = { {2,4}, {32,23} };

	auto a = Polygon(k);

	std::cout << a;

	MapPolygonD *c = new MapPolygonD{ MapPolygon(23, { 231,2,23,1 }, { 3,1,2,5 }, 243), "ABC" };

	MapPolygon t{ 23,{231,32,1,5},{5,4,2,1},6 };

	std::initializer_list<Punkt2> k = { {2,4}, {32,23} };

	Polygon{ k };

	std::cout << Polygon();

	MapBrokenD *b = new MapBrokenD{ MapBroken(12, { 23, 12,5,3 }), "XYZ" };
	MapPoint *f = new MapPoint{ 2,2,5,{34,23,52,2} };
	
	std::cout << Map(c, 1,b, 1,f, 1);

	MapPolygon a;
	MapPolygon p(23, { 231,2,23,1 }, { 3,1,2,5 }, 243);

	std::cout << p;

	/*std::vector <std::vector<double>> coords = { {0.0,0.0}, {1.0,0.0}, {1.0,1.0}, {800,1.0} };
	Polygon a = coords;

	std::cout << MapPolygon(1, RGBA(23, 123, 12), RGBA(2, 231, 1, 2), 54);
	MapPoint mp1 = MapPoint();

	std::initializer_list<Punkt2> list = { Punkt2(1,2),Punkt2(0,0),Punkt2(3,12) };
	MapPolygon a = MapPolygon(2, { 255,0,255,255 }, { 255,0,255,255 }, 50, list);

	std::cout << a << std::endl;

	MapPoint a(23, 23, 10, { 230,23,1,255 });

	std::cout << a << std::endl;

	MapPoint mp2 = MapPoint(10.0, 20.0, 7, { 255,0,255,255 });
	unsigned int a = static_cast<unsigned int>(mp2);
	std::cout << a << std::endl;

	RGBA b = mp2;
	std::cout << b << std::endl;
	/*Matrix a;
	a.sizeX = 2;
	a.sizeY = 2;
	double **ta = new double*[2];
	for (int i = 0; i<2; i++)
	{
		ta[i] = new double[2];
		for (int y = 0; y < 2; y++)
		{
			ta[i][y] = 12;
		}
	}
	a.tab = ta;
	double *abc = a[1];
	std::cout << abc[2];
	std::cout << a(1, 1);
	
	std::initializer_list<Punkt2> list = { Punkt2(1,2),Punkt2(0,0),Punkt2(3,12) };
	std::initializer_list<Punkt2> test = { Punkt2(123,32),Punkt2(43,45),Punkt2(345,4532) };

	Polygon abc =  Polygon(list);
	abc = Polygon(test);
	std::cout << list;

	Punkt2 p1 = Punkt2(1.0, 2.0);// zwyk³y konstruktor
	p1 = Punkt2(100.0, 200.0);
	Punkt2 a;
	Punkt2 p1 = Punkt2(1.0, 2.0);

	Punkt2 p2 = p1;

	Punkt2 p3 = p1 + p2;

	Punkt2 p4 = Punkt2(1000, 2000) + Punkt2(3000, 4000);

	Punkt2 p5 = f(Punkt2(10, 20));

	Punkt2 p6 = f(Punkt2(100, 200) + Punkt2(100, 200));

	std::cout << p1 << p2 << p3 << p4 << p5 << p6;

	std::vector <std::vector<double>> coords = { {0.0,0.0}, {1.0,0.0}, {1.0,1.0}, {800,1.0} };

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
	Punkt2 w3 = Punkt2(10.0, 20.0) + Punkt2(50.0, 120.0);
	Punkt2 w4 = w1 * w2;
	std::cout << w3;
	
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

	Polygon *czworok¹t = new Polygon;
	czworok¹t->setCount(count);
	czworok¹t->setVertices(punkty, count);

	czworok¹t->changeVertex(0,0,0);

	double obw = czworok¹t->getPerimeter();

	delete czworok¹t;
	delete punkty;
	*/
	system("pause");
	return 0;
}