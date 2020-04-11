/*! \file RGBA.h
	*
	* \brief Klasa RGBA
	*
	* \author Miko³aj Napiera³a
	* \date 2020.04.12
	* \version 1.00.00
	*/
#pragma once
#include<iostream>
class RGBA
{
	unsigned char  r;
	unsigned char  g;
	unsigned char  b;
	unsigned char  a;
public:
	//settery
	void setR(unsigned char r);
	void setG(unsigned char g);
	void setB(unsigned char b);
	void setA(unsigned char a);

	//gettery
	unsigned char getR();
	unsigned char getG();
	unsigned char getB();
	unsigned char getA();

	//konstruktory
	RGBA();
	RGBA(unsigned char r, unsigned char g, unsigned char b);
	RGBA(unsigned char r, unsigned char g, unsigned char b, unsigned char a);
	RGBA(const RGBA &p);
	RGBA(const RGBA &&p);

	//destruktor
	~RGBA() = default;

	//operator<<
	RGBA &operator=(const RGBA &p);

	friend std::ostream& operator<<(std::ostream& os, const RGBA& obj);
};

//operator<<
std::ostream& operator<<(std::ostream& os, const RGBA& obj);