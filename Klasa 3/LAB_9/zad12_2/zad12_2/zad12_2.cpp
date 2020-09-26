#include<iostream>

using namespace std;

int main()
{
	int i = 0;
	while (true)
	{
		char *kB = new char[1024];
		cout << i++ << endl;
		delete[] kB;
	}
	return 0;
}