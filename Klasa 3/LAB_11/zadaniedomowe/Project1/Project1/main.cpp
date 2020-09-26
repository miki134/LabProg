#include<iostream>
#include<string>

struct Ksiazka
{
	std::string autor;
	std::string tytul;
	std::string wydawnictwo;
	int rok_wydania;
	int ilosc_stron;
	std::string okladka;//twarda lub miekka
	int isbn; //13 LUB 10 cyfr
	char katalog_alfa;

};

void wyszukaj(Ksiazka ksiazka[])
{
	char end = '0';
	while (end = !0)
	{
		std::string find;
		std::cout << "Podaj autora lub tytul ksiazki, ktora chcesz znalezc:" << std::endl;
		getline(std::cin, find);

		for (int i = 0; i < 5; i++)
		{
			if ((ksiazka[i].autor == find) || (ksiazka[i].tytul == find))
			{
				std::cout << ksiazka[i].autor << std::endl;
				std::cout << ksiazka[i].tytul << std::endl;
				std::cout << ksiazka[i].wydawnictwo << std::endl;
				std::cout << ksiazka[i].rok_wydania << std::endl;
				std::cout << ksiazka[i].ilosc_stron << std::endl;
				std::cout << ksiazka[i].okladka << std::endl;
				std::cout << ksiazka[i].isbn << std::endl;
				std::cout << ksiazka[i].katalog_alfa << std::endl;
			}
		}
	}
}


int main()
{
	//wprowadzanie 5 ksi¹¿ek

	Ksiazka *ksiazka = new Ksiazka[5];

	//1:
	ksiazka[0].autor = "Allan Pease";
	ksiazka[0].tytul = "Body Language";
	ksiazka[0].wydawnictwo = "Pease International";
	ksiazka[0].rok_wydania = 2004;
	ksiazka[0].ilosc_stron = 404;
	ksiazka[0].okladka = "miekka";
	ksiazka[0].isbn = 1920816070;
	ksiazka[0].katalog_alfa = ksiazka[0].autor[0];
	
	//2:
	ksiazka[1].autor = "Jaime Corpas";
	ksiazka[1].tytul = "Aula Internacional 2";
	ksiazka[1].wydawnictwo = "difusion";
	ksiazka[1].rok_wydania = 2012;
	ksiazka[1].ilosc_stron = 215;
	ksiazka[1].okladka = "miekka";
	ksiazka[1].isbn = 9788415640103;
	ksiazka[1].katalog_alfa = ksiazka[1].autor[0];

	//3:
	ksiazka[2].autor = "Robert C. Martin";
	ksiazka[2].tytul = "Clean Code";
	ksiazka[2].wydawnictwo = "Prentice Hall";
	ksiazka[2].rok_wydania = 2009;
	ksiazka[2].ilosc_stron = 462;
	ksiazka[2].okladka = "miekka";
	ksiazka[2].isbn = 9780132350884;
	ksiazka[2].katalog_alfa = ksiazka[2].autor[0];
	
	//4:
	ksiazka[3].autor = "Stephen Prata";
	ksiazka[3].tytul = "Jezyk C++ Szkola Programowania wydanie VI";
	ksiazka[3].wydawnictwo = "Helion";
	ksiazka[3].rok_wydania = 2013;
	ksiazka[3].ilosc_stron = 1200;
	ksiazka[3].okladka = "twarda";
	ksiazka[3].isbn = 9788324643363;
	ksiazka[3].katalog_alfa = ksiazka[3].autor[0];

	//5:
	ksiazka[4].autor = "Adam Mickiewicz";
	ksiazka[4].tytul = "Dziady czesc 3";
	ksiazka[4].wydawnictwo = "MTJ";
	ksiazka[4].rok_wydania = 1974;
	ksiazka[4].ilosc_stron = 95;
	ksiazka[4].okladka = "miekka";
	ksiazka[4].isbn = 9788376232539;
	ksiazka[4].katalog_alfa = ksiazka[4].autor[0];

	//szukanie w bazie
	wyszukaj(ksiazka);

	system("pause");
	return 0;
}