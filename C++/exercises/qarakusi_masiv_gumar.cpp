#include <iostream>

using namespace std;

int main()
{
	int size;
	double element,result;
	cout << "Grel massivi chap@: ";
	cin >> size;
	double *arr = new double[size];
	for (int i=0; i < size; i++)
	{
		cin >> element;
		arr[i]=element;
		if(element > 2.5)
		{
			element*=element;
			result+=element;
		}
	}
	cout << "Summa = " << result << endl;
	delete[] arr;
	return 0;
}
