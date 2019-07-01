#include <iostream>
#include <ctime>

using namespace std;


void matrix_dinamyc(int &num)
{
	int *arr= new int[num];
	for (int i = 1; i < tox+1; i++)
	{
		for (int j = 1; j < syun+1; j++)
		{
			*arr[i][j]=rand()%10;
			cout << "Matrix[" << i << "][" << j << "] = " << arr[i][j]  << endl;
		}
	}
	delete[] arr;
	



}


int main()
{
	int tox,syun;	
	cout << "Greq toxer qanak@: ";
	cin >> tox;
	cout << "Greq Syuneri qanak@: ";
	cin >> syun;
	matrix_dinamyc(tox,syun);



	return 0;
}
