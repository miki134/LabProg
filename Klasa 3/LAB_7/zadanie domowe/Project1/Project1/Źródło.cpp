#include<iostream>

using namespace std;

int main()
{
	double a, b, c;
	//ax^2+bx+c=0
	cout << "Podaj argumenty a, b i c do funkcji ax^2+bx+c=0." << endl;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;

	double delta;
	delta = pow(b, 2) - 4 * a * c;

	if (delta > 0)
	{
		double x1, x2;
		x1 = ((-b - sqrt(delta)) / (2 * a));
		x2 = ((-b + sqrt(delta)) / (2 * a));
		cout << "Rownanie ma 2 odpowiedzi:" << endl;
		cout << "x1 = " << x1 << endl << "x2 = " << x2 << endl;
	}
	else if (delta = 0)
	{
		double x;
		x = (-b) / (2 * a);
		cout << "Rownanie ma 1 odpowiedz:" << endl;
		cout << "x = " << x << endl;
	}
	else
	{
		cout << "Rownanie nie ma rozwiazan!" << endl;
	}

	system("pause");
	return 0;
}