/*! \file Punkt2.h
*
* \brief Zawiera deklaracjê klasy Punkt2
*
* Plik zawiera deklaracjê klasy Punkt2.h.
* Wspó³rzêdne punktu s¹ podawane w uk³adzie kartezjañskim.
* Klasa zawiera kilka metod skladowych
*
* \author Miko³aj Napiera³a
* \date 2020.03.02
* \version 1.00.00
*/
#pragma once
#include<iostream>
class Punkt2
{
	//Sk³adowe x oraz y, typu double, s³u¿¹ce jako wspó³rzêdne w uk³adzie kartezjañskim
	double x;
	double y;
public:
	
	//Iloœæ wywo³añ konstruktora
	static unsigned int number;

	//Konstruktory
	Punkt2();
	Punkt2(double, double);
	Punkt2(const Punkt2 &p);
	Punkt2(Punkt2 &&p);

	//Destruktor domyœlny
	~Punkt2() = default;

	//settery
	void setX(double);
	void setY(double);

	//gettery
	double getX();
	double getY();

	//wspó³rzêdne biegunowe
	double getRadius();
	double getAngle();

	//odleg³oœæ punktu od punktu _p
	double getDistance(Punkt2  _p);

	// operatory dodawania i odejmowania
	Punkt2 operator+(const Punkt2 &p) const;
	Punkt2 operator-(const Punkt2 &p) const;

	//operaton przypisania
	Punkt2 &operator=(const Punkt2 &p);

	// funkcja zaprzyjaŸniona, umo¿liaj¹ca strumieniowanie danych poprzez operator <<
	friend std::ostream& operator<<(std::ostream& os, const Punkt2& obj);
};

//operatory: dodawania i mno¿enia
Punkt2 operator+(Punkt2 &p1, Punkt2 &p2);
Punkt2 operator*(Punkt2 &p1, Punkt2 &p2);

//strumieniowanie wartoœci prywatnych klasy Punkt2, poprzez operator <<
std::ostream& operator<<(std::ostream& os, const Punkt2& obj);
