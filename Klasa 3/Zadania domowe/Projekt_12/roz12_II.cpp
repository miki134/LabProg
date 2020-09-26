#include<iostream>

using namespace std;
/*
char *wyb(int idx)
{
	
	char tab[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char *x = new char;
	*x = tab[idx];
	delete x;
	return x;
}
int main()
{
	for (int idx = 3; idx <= 26; idx+=4)
	{
		char *wynik = new char;
		*wynik=*wyb(idx);
		cout << *wynik;
		delete wynik;
	}
	system("pause");
	return 0;
}
*/
int main()
{
	const char *tab = new char[26];
	tab = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (int i = 3; i <= 26; i += 4)
	{
		cout << *(tab + i) << endl;
	}

	delete[] tab;
	
	system("pause");
	return 0;
}