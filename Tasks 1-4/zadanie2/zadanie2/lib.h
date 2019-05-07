#ifndef MY_LIBRARY_H_INCLUDED
#define MY_LIBRARY_H_INCLUDED

#include <stdlib.h>

struct complex
{
	double x;
	double y;
};

void read_complex(struct complex *a);

#endif