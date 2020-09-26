#include<iostream>

using namespace std;

int main()
{
	typedef int *punkt2D;
	punkt2D * punkty = new punkt2D[5];

	for (int i = 0; i < 5; i++)
	{
		punkty[i] = new int[2];
		punkty[i][0] = rand() % 10;
		punkty[i][1] = rand() % 10;
	}

	for (int i = 1; i < 5; i++)
	{
		cout << punkty[i][0] << "  " << punkty[i][0] << endl; 
	}

	int ** tab;
	int x;
	cin >> x;
	

	system("pause");
	return 0;
}