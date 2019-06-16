#include <iostream>

using namespace std;

int main()
{
	int num,first,second,third;
	cout << "Greq eranish tver: ";
	cin >> num;
	first=num/100;
	second=num/10%10;
	third=num%10;
	if (num > 99 && num < 1000)
	{
		if (first==second || second==third || first==third)
		{
			cout << "Kan havasar tver" << endl;
		}
		else
		{
			cout << "Eranish tvi mej havasar tver chkan" << endl;
		}
	}
	else
	{
		cout << "Your number is not Eranish))" << endl;
	}
	return 0;
}
