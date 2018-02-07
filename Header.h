#ifndef HEADER
#define HEADER


#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<time.h>
#include<stdlib.h>

using namespace std;

class Lunch
{
private:
	vector<string> list;

public:
	void open();
	int random();
	void print(int num);
};

#endif HEADER