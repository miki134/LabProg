#include<iostream>

using namespace std;

void create_fib(int size)
{
	int *tab = new int[size];
	tab[0] = 1;
	tab[1] = 1;
	for (int i = 2; i < size; i++)
	{
		tab[i] = tab[i - 1] + tab[i - 2];
	}
	for (int i = 0; i < size; i++)
	{
		cout << tab[i] << endl;
	}
	
}

int main()
{
	int size;
	cout << "Ile elementow ciagu fibonacciego wygenerowac?" << endl;
	cin >> size;
	create_fib(size);


	system("pause");
	return 0;
}