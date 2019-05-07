#include <windows.h>
#include <iostream>
#include "dllmain.h"

#define MAXMODULE 50

using namespace std;

typedef void(_cdecl*cfunc)(struct complex *a);
struct complex b[5];
cfunc read;

int main()
{
	HINSTANCE hLib = LoadLibrary("zadanie3.1.dll");
	if (hLib == NULL)
	{
		cout << "Unable to load library!" << endl;
		return 0;
	}

	char mod[MAXMODULE];

	GetModuleFileName((HMODULE)hLib, (LPTSTR)mod, MAXMODULE);
	cout << "Library loaded: " << mod << endl;
	read = (cfunc)GetProcAddress((HMODULE)hLib, "read_complex");
	if ((read == NULL))
	{
		cout << "Unable to load function(s)." << endl;
		FreeLibrary((HMODULE)hLib);
		return 0;
	}

	for (int i = 0; i < 5; i++) {
		read(&(b[i]));
	}

	FreeLibrary((HMODULE)hLib);

	for (int i = 0; i < 5; i++) {
		cout << "b.x: " << b[i].x << "\t";
	}

	cout << "\n";

	for (int i = 0; i < 5; i++) {
		cout << "b.y: " << b[i].y << "\t";
	}

	cout << "\n";

	system("pause");
	return 0;
}