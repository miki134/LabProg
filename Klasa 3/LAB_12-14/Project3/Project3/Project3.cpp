#include<iostream>

struct Osoba
{
	char * name;
	char * surname;
	int age;
};

using Data = int;

struct BSTnode
{
	Data dane;
	int data;
	BSTnode* left;
	BSTnode *right;
};

bool dataLess(Data data_1, Data data_2)
{
	//wersja dla int
	if (data_1 < data_2)
		return true;
	return false;
}

bool dataGrather(Data data_1, Data data_2)
{
	//wersja dla int
	if (data_1 < data_2)
		return true;
	return false;
}

bool dataEqual(Data data_1, Data data_2)
{
	//wersja dla int
	if (data_1 < data_2)
		return true;
	return false;
}

bool dataGratherEqual(Data data_1, Data data_2)
{
	//wersja dla int
	if (data_1 < data_2)
		return true;
	return false;
}

int main()
{
	using namespace std;

	BSTnode *root = nullptr;

	return 0;
}