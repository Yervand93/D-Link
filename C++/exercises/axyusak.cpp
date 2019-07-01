#include <iostream>

using namespace std;

int main()
{
	cout << "N\t" << "10*N\t" << "100*N\t" << "1000*N" << endl << endl;
	for (int i = 1; i <= 5; i++)
	{
		cout << i << "\t" << 10*i << "\t" << 100*i << "\t" << 1000*i << endl;
	}

	return 0;
}
