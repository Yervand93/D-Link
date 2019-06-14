#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	unsigned N,k,sum = 0;
	cout << "Write N: ";
	cin >> N;
	cout << "Write k: ";
	cin >> k;
	for (int i=1; i <= N; i++)
	{
		sum += pow(i,(float)k);
	} 
	cout << "SUM: " << sum <<endl;
	return 0;
}
