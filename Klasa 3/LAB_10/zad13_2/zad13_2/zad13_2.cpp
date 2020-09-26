#include<iostream>
#include<cstdlib>
#include<ctime>
#include<conio.h>



int main()
{
	using namespace std;
	srand(static_cast<unsigned int>(time(NULL)));

	int *** tab = new int**[50];
	int max = 0, bez, i_glob, y_glob, z_glob;

	for (int i = 0; i < 50; i++)
	{
		tab[i] = new int*[40];
		for (int y = 0; y < 40; y++)
		{
			tab[i][y] = new int[27];
			for (int z = 0; z < 27; z++)
			{
				tab[i][y][z] = rand() % 8 + 18;
				cout << tab[i][y][z] << endl;
				if ((z > 0)&(z < 27))
				{
					bez = abs(tab[i][y][z] - tab[i][y][z - 1]);
					if (bez == 7)
					{
						cout << "Najwieksza roznica temperutury w pokoju wynosi " << bez << ". W miejscu w pokoju (wymiary w centymetrach: dlugosc/szerokosc/wysokosc): " << i * 10 << "/" << y * 10 << "/" << z * 10 << endl;
						_getch();
						return 0;
					}
					else if (bez > max)
					{
						max = bez;
						i_glob = i;
						y_glob = y;
						z_glob = z;
					}
					else
					{
						continue;
					}
				}
			}
		}
	}

	cout << "Najwieksza roznica temperutury w pokoju wynosi " << max << ". W miejscu w pokoju (wymiary w centymetrach: dlugosc/szerokosc/wysokosc): " << i_glob * 10 << "/" << y_glob * 10 << "/" << z_glob * 10 << endl;

	system("pause");
	return 0;
}