#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
	int number_x=0;
	cout << "Write X numbers: ";
	cin >> number_x;
	float *arrayPtrZ = new float [number_x];
	float *arrayPtrB = new float [number_x];
	float *arrayPtrA = new float [number_x];
	float *arrayPtrBe = new float [number_x];
	for (int counter =0; counter < number_x; counter++)
	{
		cout << "Write your Z, B, A, Betta for X1" << endl;
		cout << "Z = ";
		cin >> arrayPtrZ[counter];
		cout << "B = ";
		cin >> arrayPtrB[counter];
		cout << "A = ";
		cin >> arrayPtrA[counter];
		cout << "Betta = ";
		cin >> arrayPtrBe[counter];
	}
	float x = 0,y = 0;
	for (int counter = 0; counter < number_x; counter++)
	{
		x = pow(arrayPtrZ[counter], 3) - arrayPtrB[counter] + pow(arrayPtrA
[counter], 2) / pow(tan(arrayPtrBe[counter]), 2);
		y += x;
	}
		delete arrayPtrZ; delete arrayPtrB; delete arrayPtrA; delete arrayPtrBe;
	cout << "\ny = " << y << endl;
	return 0;
}

