#include<iostream>

using namespace std;

void sprawdz(const char **napisy)
{
	
}


int main()
{
	typedef const char *napis;
	napis *napisy = new napis[5]; //const char **napisy = new const char*[5]

	char * x;
	cout << "Podaj napis (5 liter):" << endl;
	cin >> x;

	

	sprawdz(napisy);


	system("pause");
	return 0;
}