#pragma once
struct Position3D
{
	unsigned int x;
	unsigned int y;
	unsigned int z;
};



class ObiektWszechœwiat
{
	unsigned int masa;
	Position3D pozycja; 
	unsigned int promien; 
	unsigned int gestosc;

public:
	virtual void ustawMasa();
	virtual void ustawPozycje();
	virtual void ustawPromieñ();
	virtual void ustawGestosc();

	virtual ~ObiektWszechœwiat();
};

