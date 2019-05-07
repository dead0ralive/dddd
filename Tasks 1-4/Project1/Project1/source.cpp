#include <iostream>
#include <fstream>

using namespace std;

//Задание 1

//void read_int(int *a) {
//	cout << "Enter value a ";
//	cin >> *a;
//	cout << "You entered " << *a << "\n";
//}
//
//int main() {
//	int b;
//	b = 32;
//	read_int(&b);
//	cout << b;
//
//	system("pause");
//}

//Задание 2

//struct complex
//{
//	double x;
//	double y;
//};
//
//void read(struct complex *a) {
//	cout << "Enter value a.x: ";
//	cin >> (*a).x;
//	cout << "Enter value a.y: ";
//	cin >> (*a).y;
//}
//
//void main() {
//	complex b[5];
//	for (int i = 0; i < 5; i++) {
//		read(&(b[i]));
//	}
//
//	for (int i = 0; i < 5; i++) {
//		cout << "b.x: " << b[i].x << "\t";
//	}
//
//	cout << "\n";
//
//	for (int i = 0; i < 5; i++) {
//		cout << "b.y: " << b[i].y << "\t";
//	}
//
//	system("pause");
//}

//Задание 3

//struct complex
//{
//	double x;
//	double y;
//};
//
//void read(struct complex *a) {
//	cout << "Enter value a.x: ";
//	cin >> (*a).x;
//	cout << "Enter value a.y: ";
//	cin >> (*a).y;
//}
//
//void main() {
//	complex b[5];
//
//	for (int i = 0; i < 5; i++) {
//		read(&(b[i]));
//	}
//
//	int temp;
//
//	for (int i = 0; i < 5 - 1; i++) {
//		for (int j = 0; j < 5 - i - 1; j++) {
//			if (b[j].x > b[j + 1].x) {
//				temp = b[j].x;
//				b[j].x = b[j + 1].x;
//				b[j + 1].x = temp;
//			}
//		}
//	}
//
//	for (int i = 0; i < 5 - 1; i++) {
//		for (int j = 0; j < 5 - i - 1; j++) {
//			if (b[j].y > b[j + 1].y) {
//				temp = b[j].y;
//				b[j].y = b[j + 1].y;
//				b[j + 1].y = temp;
//			}
//		}
//	}
//
//	for (int i = 0; i < 5; i++) {
//		cout << "b.x: " << b[i].x << "\t";
//	}
//
//	cout << "\n";
//
//	for (int i = 0; i < 5; i++) {
//		cout << "b.y: " << b[i].y << "\t";
//	}
//
//	system("pause");
//}

//Домашнее задание:

int main()
{
	fstream fs("input1.txt");
	if (!fs)
	{
		cout << "File not found\n";
		system("pause");
	}
	float count = 0;
	float a;

	while (!fs.eof())
	{
		fs >> a;
		count++;
	}

	fs.clear();
	fs.seekg(0);
	float *mas = new float[count];
	for (int i = 0; i < count; i++)
		fs >> mas[i];
	for (int i = 0; i < count; i++) {
		float temp;
		for (int i = 0; i < count - 1; i++) {
			for (int j = 0; j < count - i - 1; j++) {
				if (mas[j] > mas[j + 1]) {
					temp = mas[j];
					mas[j] = mas[j + 1];
					mas[j + 1] = temp;
				}
			}
		}

		cout << mas[i] << " ";
		ofstream fout("output1.txt");
		for (int i = 0; i < 8 - 1; i++) {

			fout << mas[i] << " ";

		}
		fout.close();
	}
	cout << "\nNumber of the elements in array: " << count;
	cout << "\n";
	fs.close();

	delete[] mas;

	fstream fss("input2.txt");
	if (!fss)
	{
		cout << "File not found\n";
		system("pause");
	}
	int cnt = 0;
	int b;

	while (!fss.eof())
	{
		fss >> b;
		cnt++;
	}

	fss.clear();
	fss.seekg(0);
	int *mass = new int[cnt];
	for (int i = 0; i < cnt; i++)
		fss >> mass[i];
	for (int i = 0; i < cnt; i++) {
		int temp;
		for (int i = 0; i < cnt - 1; i++) {
			for (int j = 0; j < cnt - i - 1; j++) {
				if (mass[j] > mass[j + 1]) {
					temp = mass[j];
					mass[j] = mass[j + 1];
					mass[j + 1] = temp;
				}
			}
		}

		cout << mass[i] << " ";
		ofstream fout("output2.txt");
		for (int i = 0; i < 8 - 1; i++) {
			
			fout << mass[i] << " ";
			
		}
		fout.close();
	}
	cout << "\nNumber of the elements in array: " << cnt;
	cout << "\n";
	fss.close();

	delete[] mass;

	system("pause");
}