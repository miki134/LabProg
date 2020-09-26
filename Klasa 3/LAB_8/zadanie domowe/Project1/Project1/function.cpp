#include<iostream>
#include<vector>
#include<conio.h>
#include<string>
#include"declaration.h"

char*** stworz()
{
	char *** tab = new char**[5];
	for (int i = 0; i < 5; i++)
	{
		tab[i] = new char*[2];
		for (int y = 0; y < 2; y++)
		{
			tab[i][y] = new char[20];
		}
	}
	return tab;
}

void zapisz_do_tablicy(char ***tab)
{
	for (int i = 0; i < 5; i++)
	{
		for (int y = 0; y < 2; y++)
		{
			if (y == 0)
			{
				std::cout << "Podaj nazwisko:";
				std::cin >> tab[i][y];
			}
			else if (y == 1)
			{
				std::cout << "Podaj imie:";
				std::cin >> tab[i][y];
			}
		}
	}

}
void wyszukaj(char ***tab)
{
	char end=0;
	while ( end!='1')
	{
		
		std::string nazwa;
		std::cout << "Podaj nazwisko jakie chcesz odszukac w bazie:";
		std::cin >> nazwa;

		int koniec = nazwa.length();
	
		char *nazwisko = new char[koniec];

		for (int i = 0; i < koniec; i++)
		{
			nazwisko[i] = nazwa[i];
		}

		for (int i = 0; i < 5; i++)
		{
			for (int y = 0; y < 20; y++)
			{
				if (tab[i][0][y] == nazwisko[y])
				{
					std::cout << tab[i][0] << " " << tab[i][1] << std::endl;
				} 
				else { break; }
			}
			
		}
		
		std::cout << "Jezeli chcesz przerwac to wcisnij 1 " << std::endl;
		std::cin >> end;
	}
	
}