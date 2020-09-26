#include<iostream>

using namespace std;
int x;
void zerowanie(int *tab)
{
	cout << "Wybierz element w tablicy (0-9), ktory sie wyzeruje:" << endl;
	cin >> x;
	tab[x] = 0;
}


int main()
{
	int *tab = new int[10];
	for (int i = 0; i < 10; i++)
	{
		tab[i] = rand() % 10 + 1;
	}
	zerowanie(tab);
	system("pause");
	return 0;
}