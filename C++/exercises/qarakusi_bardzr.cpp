#include <iostream>

using namespace std;

int main()
{
	int num,power;
	long long* result = new long long(1);
	cout << "Write number: ";
	cin >> num;
	cout << "Enter power: ";
	cin >> power;
	if (power==0)
	{
		cout << "result = 1" << endl; 
	}
	else
	{
		for (int i=0; i < power;i++) 
		{
			*result = *result * num;
			cout << "Result: " << *result << endl;
		}
	cout << "result = " << *result << endl;
	}
	delete result;
	return 0;
}
