#include <iostream>

using namespace std;

int main()
{
	int doska=8;
	for (int i = 0; i < doska; i++)
	{
		for (int j = 0; j < doska; j++)
		{
			if (i % 2 == 0)
			{
				cout << "* ";
			}
			else
			{
				cout << ' ';
				cout << "*";
			}
		}	
		cout << endl;
	}

	return 0;
}
