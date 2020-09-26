#include<iostream>
#include"declaration.h"

int main()
{
	char ***tab;
	tab = stworz();
	zapisz_do_tablicy(tab);
	wyszukaj(tab);


	system("pause");
	return 0;
}