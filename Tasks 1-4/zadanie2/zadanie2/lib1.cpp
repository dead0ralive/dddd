#include <stdio.h>
#include "lib.h"
#include <iostream>

using namespace std;

void read_complex(struct complex *a)
{
	cout << "Enter value a.x: ";
	cin >> (*a).x;
	cout << "Enter value a.y: ";
	cin >> (*a).y;
}