#include"filtry.h"

using namespace std;

unsigned char** createimage(int width, int height, int nBytes = 3)
{
	unsigned char ** image = new unsigned char *[height];

	for (int i = 0; i < height; i++)
		image[i] = new unsigned char[nBytes * width];

	for (int i = 0; i < nBytes * width; i++)
		for (int j = 0; j < height; j++)
			image[i][j] = (unsigned char)(rand() % 256);

}

unsigned char** convfilter(unsigned char** image, int width, int height, double ** filter, int filterSize, int nBytes = 3)
{
	unsigned char ** image = new unsigned char *[height];

	for (int i = 0; i < height; i++)
		image[i] = new unsigned char[nBytes * width];


	for (int i = 0; i < nBytes * width; i++)
		for (int j = 0; j < height; j++)
		{

		}

	return;
}

bool readPBM(std::string name, unsigned char** &image, int &width, int height, int &nResult)
{
	try 
	{
		ifstream file(name);

		if (file)
		{
			string line, pbm_type;

			getline(file, pbm_type);

			if (pbm_type == "P1")
				nResult = 1;

			getline(file, line);
			getline(file, line);

			width 

		}

	}
	catch (const ifstream::failure &e)
	{
		cout << "B³¹d czytania pliku: " << name << endl;
		exit(EXIT_FAILURE); //std 
	}
}

unsigned char ** loadimage(std::string name, unsigned char** &image, int &width, int height, int &nResult)
{
	unsigned char ** image;

	bool test = readPBM(name, image, width, height, nResult);

	return image;
}