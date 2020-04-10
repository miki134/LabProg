/*! \file Punkt2.h
*
* \brief Zawiera deklaracj� klasy Punkt2
*
* Plik zawiera deklaracj� klasy Punkt2.h.
* Wsp�rz�dne punktu s� podawane w uk�adzie kartezja�skim.
* Klasa zawiera kilka metod skladowych
*
* \author Miko�aj Napiera�a
* \date 2020.03.02
* \version 1.00.00
*/
#pragma once
#include<iostream>
class Punkt2
{
	//Sk�adowe x oraz y, typu double, s�u��ce jako wsp�rz�dne w uk�adzie kartezja�skim
	double x;
	double y;
public:
	
	//Ilo�� wywo�a� konstruktora
	static unsigned int number;

	//Konstruktory
	Punkt2();
	Punkt2(double, double);
	Punkt2(const Punkt2 &p);
	Punkt2(Punkt2 &&p);

	//Destruktor domy�lny
	~Punkt2() = default;

	//settery
	void setX(double);
	void setY(double);

	//gettery
	double getX();
	double getY();

	//wsp�rz�dne biegunowe
	double getRadius();
	double getAngle();

	//odleg�o�� punktu od punktu _p
	double getDistance(Punkt2  _p);

	// operatory dodawania i odejmowania
	Punkt2 operator+(const Punkt2 &p) const;
	Punkt2 operator-(const Punkt2 &p) const;

	//operaton przypisania
	Punkt2 &operator=(const Punkt2 &p);

	// funkcja zaprzyja�niona, umo�liaj�ca strumieniowanie danych poprzez operator <<
	friend std::ostream& operator<<(std::ostream& os, const Punkt2& obj);
};

//operatory: dodawania i mno�enia
Punkt2 operator+(Punkt2 &p1, Punkt2 &p2);
Punkt2 operator*(Punkt2 &p1, Punkt2 &p2);

//strumieniowanie warto�ci prywatnych klasy Punkt2, poprzez operator <<
std::ostream& operator<<(std::ostream& os, const Punkt2& obj);
