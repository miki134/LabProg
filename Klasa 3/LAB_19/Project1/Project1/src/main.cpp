#include<iostream>

#include"..\Head\nowy.h"

#pragma message("KOMPILACJA PLIKU: " __FILE__)
#pragma message("DNIA: " __DATE__)
#pragma message("O GODZINIE: " __TIME__)


int main()
{
	std::cout << __cplusplus;
	system("pause");
	return 0;
}