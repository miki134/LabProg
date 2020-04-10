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
	void setG(unsigned char  g);
	void setB(unsigned char  b);
	void setA(unsigned char  a);

	//gettery
	unsigned char getR();
	unsigned char getG();
	unsigned char getB();
	unsigned char getA();

	//konstruktory
	RGBA();
	RGBA(unsigned char r, unsigned char g, unsigned char b);
	RGBA(unsigned char r, unsigned char g, unsigned char b, unsigned char a);

	//destruktor
	~RGBA() = default;

	//operator<<
	friend std::ostream& operator<<(std::ostream& os, const RGBA& obj);
};

//operator<<
std::ostream& operator<<(std::ostream& os, const RGBA& obj);