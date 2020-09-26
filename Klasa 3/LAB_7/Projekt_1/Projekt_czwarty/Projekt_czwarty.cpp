#include<iostream>

using namespace std;

int dodaj(int x, int y)
{
	return x+y;
}

void print(const char s[20])
{
	cout << s << endl;
}

int main()
{
	int x = 10, y=20, suma;
	suma = dodaj(x,y);

	print("aaaaaaaaa");



	system("pause");
	return 0;
}