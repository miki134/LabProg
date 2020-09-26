#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	int T[51][41][28];
	int X[50], Y[40];
	int sum1 = 0, w, v;
	double sr1 = 0.0, sr2 = 0.0, wynik=0.0;

	for (int x = 0; x < 51; x++)
	{
		for (int y = 0; y < 41; y++)
		{
			for (int z = 0; z < 28; z++)
			{
				T[x][y][z] = rand() % 7 + 18;
				sum1 += T[x][y][z];
			}
		}
		sr1 = sum1 / 1080.0;
		if (sr2<sr1)
		{
			sr2 = sr1;
			w = x;
		}
		sr1 = 0.0;
		sum1 = 0;
	}
	wynik = sr2;
	sr2 = 0.0;
	for (int y = 0; y < 41; y++) 
	{
		for (int x = 0; x < 51; x++)
		{
			for (int z = 0; z < 28; z++)
			{
				sum1 += T[x][y][z];
			}
		}
		sr1 = sum1 / 1350.0;
		if (sr2 < sr1)
		{
			sr2 = sr1;
			v = y;
		}
		sr1 = 0.0;
		sum1 = 0;
	}
	if (wynik > sr2)
	{
		cout << "Najwieksza srednia temperatura wynoszaca: " << wynik << " - jest w przekroju pionowym o szerokosci 10 cm na "<<w*10 <<" centymetrze dluzszej sciany"<< endl;
	}
	else
	{
		cout << "Najwieksza srednia temperatura wynoszaca: " << sr2 << " - jest w przekroju pionowym o szerokosci 10 cm na " << v * 10 << " centymetrze krotszej sciany" << endl;
	}
	


	system("pause");
	
	
	return 0;
}