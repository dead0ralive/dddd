//Домашнее задание

#include <fstream>
#include <iostream>
#include <stdlib.h>
#include "lib.h"

using namespace std;

void read_complex(struct complex *a)
{
	ifstream fss("input.txt");
	if (!fss)
		cout << "File not found\n";
	else
	{
		int cnt = 0;
		int c;

		while (!fss.eof())
		{
			fss >> c;
			cnt++;
		}

		fss.seekg(0);
		int *mass = new int[cnt];
		for (int i = 0; i < cnt; i++)
		{
			fss >> mass[i];
			(*a).x = mass[i];
			(*a).y = mass[i];
		}
	}
	fss.close();
}