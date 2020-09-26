#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cmath>

using namespace std;

void vec(int **T)
{
	srand(static_cast<unsigned int>(time(NULL)));

	for (int x = 0; x < 5000; x++)
	{
		for (int y = 0; y < 4000; y++)
		{
			T[x][y] = rand() % 2301 + 1200;
		}
	}
}

double licz(int **T)
{
	double wynik = 0;

	//zmienne do dlugosci dwoch pierwszych bokow
	double u1_y_1, u2_y_1, u3_y_1, dlugosc_y_1;
	double u1_x_1, u2_x_1, u3_x_1, dlugosc_x_1;

	//zmienne do przekatnych
	double u1_przek, u2_przek, u3_przek, dlugosc_przek;

	//zmienne do pola pierwszego trojkata
	double p_1, pole_1;

	//zmienne do dlugosci dwoch drugich bokow kwadratu
	double u1_y_2, u2_y_2, u3_y_2, dlugosc_y_2;
	double u1_x_2, u2_x_2, u3_x_2, dlugosc_x_2;

	//zmienne do pola drugiego trojkata
	double p_2, pole_2;

	int x = 0;
	for(x; x < 4999; x++)
	{
		int y = 0;
		//obliczanie dlugosci pierwszych bokow kwadratu
		u1_y_1 = pow((x - x), 2);//=0
		u2_y_1 = pow(((y + 1) - y), 2); //=1
		u3_y_1 = pow((T[x][y + 1] - T[x][y]), 2);
		dlugosc_y_1 = sqrt(u1_y_1 + u2_y_1 + u3_y_1);

		u1_x_1 = pow((x - 1) - x, 2); //=1
		u2_x_1 = pow(y - y, 2);// = 0
		u3_x_1 = pow(T[x + 1][y] - T[x][y], 2);
		dlugosc_x_1 = sqrt(u1_x_1 + u2_x_1 + u3_x_1);

		for(y; y < 3999; y++)
		{
			//obliczanie dlugosci przekatnych kazdego kwadratu z osobna
			u1_przek = ((x + 1) - x, 2); //= 1
			u2_przek = ((y + 1) - y, 2); //= 1
			u3_przek = (T[x + 1][y] - T[x][y + 1], 2);
			dlugosc_przek = sqrt(u1_przek + u2_przek + u3_przek);

			//obliczanie pola pierwszego trojkata
			p_1 = (dlugosc_y_1 + dlugosc_x_1 + dlugosc_przek) / 2;
			pole_1 = sqrt(p_1*(p_1 - dlugosc_y_1)*(p_1 - dlugosc_x_1)*(p_1 - dlugosc_przek));

			//obliczanie dlugosci dwoch nastepnych bokow kwadratu
			u1_y_2 = pow(((x + 1) - (x + 1)), 2); //= 0
			u2_y_2 = pow(((y + 1) - y), 2); //= 1
			u3_y_2 = pow((T[x + 1][y + 1] - T[x + 1][y]), 2);
			dlugosc_y_2 = sqrt(u1_y_2 + u2_y_2 + u3_y_2);

			u1_x_2 = pow((x + 1) - x, 2); //= 1
			u2_x_2 = pow((y + 1) - (y + 1), 2); //= 0
			u3_x_2 = pow(T[x + 1][y + 1] - T[x][y + 1], 2);
			dlugosc_x_2 = (u1_x_2 + u2_x_2 + u3_x_2);

			//obliczanie pola drugiego trojkata
			p_2 = (dlugosc_y_2 + dlugosc_x_2 + dlugosc_przek) / 2;
			pole_2 = sqrt(p_2*(p_1 - dlugosc_y_2)*(p_2 - dlugosc_x_2)*(p_2 - dlugosc_przek));

			//przekazywanie dlugosci boku, który jest identyczny w kolejnym kwadracie
			dlugosc_x_1 = dlugosc_x_2;

			//sumowanie pol dwoch trojkatow
			wynik = wynik + pole_1 + pole_2;
		}
	}
	return wynik;
}

int main()
{
	int **T[5000][4000];
	double wynik;
	vec(**T);
	wynik = licz(**T);

	cout << "Program obliczyl pole obszaru o powierzchni 5km na 4km. O wysokosci terenu od 1200 metrow do 3500 metrow. Na siatce z krokiem 10m." << endl;
	cout << "Pole powierzchni tego obszaru wynosi: " << wynik << endl;

	system("pause");
	return 0;
}