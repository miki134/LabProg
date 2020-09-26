#pragma once
#include<string>
#include<iostream>
#include<fstream>
#include<sstream>
#include<vector>

unsigned char ** loadimage(std::string name, unsigned char** &image, int &width, int height, int &nResult);

bool readPBM(std::string name, unsigned char** &image, int &width, int height, int &nResult);

unsigned char** createimage(int width, int height, int nBytes);
unsigned char** convfilter(unsigned char**image, int width, int height, double ** filter, int filterSize, int nBytes);


