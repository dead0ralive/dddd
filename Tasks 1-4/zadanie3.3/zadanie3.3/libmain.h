#include <iostream>
#include <stdio.h>
#include <windows.h> 

struct complex
{
	double x;
	double y;
};

extern "C" __declspec(dllexport) void read_complex(struct complex *a);