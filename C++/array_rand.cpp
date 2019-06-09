#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	srand(time(NULL));
	int const size=10;
	int arr[size];

	bool chishte;

	for (int i = 0; i < size; )
	{
		chishte=false;
		int newRandomValue = rand() % 20;

		for (int j = 0; j < i; j++ )
		{
			if (arr[j]==newRandomValue)
			{
				chishte=true;
				break;
			}
		}
		if (!chishte)
		{
			arr[i]=newRandomValue;
			i++;
		}
	}
	for (int i = 0; i < size; i++ )
	{
		cout << arr[i] << endl;
	}
}
