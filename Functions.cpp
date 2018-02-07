#include"Header.h"

void Lunch::open()
{
	string line;
	fstream infile ("choices.txt");

	if (infile)
	{
		while (getline(infile, line))
		{
			list.push_back(line);
		}
	}

	else
	{
		cout << "Can not Open File." << endl;
		exit(0);
	}
}

int Lunch::random()
{
	srand(time(NULL));

	return rand() % list.size();
}

void Lunch::print(int num)
{
	cout << list[num] << endl << endl;
}