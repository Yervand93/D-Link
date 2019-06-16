#include <iostream>

using namespace std;

int main()
{
	int number;
	cout << "\t\tProgramma Palindrom C++" << endl;
	cout << endl;
	cout << "Greq hinganish tiv: ";
	cin >> number;
	if (number > 9999 && number < 100000)
	{
		if (number/10000%100==number%10 && number/1000%10==number/10%10)
			cout << "Numbers is palindrom" << endl;
		else
			cout << "Numbers is not palindrom!!!" << endl;
	}
	else
	{
		cout << "Out of range" << endl;
	}
	
	return 0;
}
