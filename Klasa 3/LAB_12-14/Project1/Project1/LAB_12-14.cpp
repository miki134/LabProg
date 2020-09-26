#include<iostream>

struct List
{
	char element;
	int * next;
};



void add()
{
	char x;
	std::cout << "Dodaj wartosc:" << std::endl;
	std::cin >> x;

	
}

int main()
{
	using namespace std;
	char choice;
	cout << "Wybierz co chcesz zrobic z lista jednokierunkowa:" << endl;
	cout << "1. Dodaj element" << endl;

	cin >> choice;

	switch (choice)
	{
	case 1:
		add();
		break;


	default:
		break;
	}



	

	system("pause");
	return 0;
}