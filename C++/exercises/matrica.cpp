#include <iostream>

using namespace std;

int main()
{
	int tox,syun,matrix = 0;
	cout << "Greq qani tox pti lini: ";
	cin >> tox;
	cout << "Greq qani syun pti lini: ";
	cin >> syun;
	int array[tox][syun];
	for (int i = 0; i < syun; i++ )
	{
		for (int j=0; j < tox; j++)
		{
			array[i][j]=rand()%100;
			cout << array[i][j] << " ";
		}
		matrix += array[i][i];
		cout << endl;
	}
	cout << "MATRIX= " << matrix << endl;
	return 0;
}
