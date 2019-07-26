#include <iostream>

using namespace std;

int main()
{
	int num,var = 1;
	cout << "Write number: ";
	cin >> num;

	int arr[5][5];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arr[i][j]=var++;
			cout << arr[i][j] << " ";
			 
		}
	cout << endl;
	}

	return 0;
}
