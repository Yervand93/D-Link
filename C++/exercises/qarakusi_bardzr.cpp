#include <iostream>

using namespace std;

int main()
{
	int num,power,result=1;
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
		result *=num;
		}
	cout << "result = " << result << endl;
	}
	return 0;
}
