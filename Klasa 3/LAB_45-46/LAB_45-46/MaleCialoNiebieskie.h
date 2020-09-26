#pragma once
#include"ObiektWszechœwiat.h"
class MaleCialoNiebieskie:ObiektWszechœwiat
{
	Position3D punkt; //punkt we wszechwiecie wokol ktorego krazy obiekt

public:
	virtual void oddzialyawnieGrawitacyjne();

};

