#include <iostream>

using namespace std;

int main()
{
	int number;
	char tab = ' ';
	char sym='*';
	cout << "Greq tiv qarakusi stanalu hamar: ";
	cin >> number;
	for (int i = 0; i < number; i++)
	{
		cout << sym;
		cout << tab;
	}
	cout << endl;
	for (int i = 0; i < number-2; i++){
		cout << sym << "\t" << sym  << endl;
	}
	for (int i = 0; i < number; i++)
	{
		cout << sym;
		cout << tab;
	}
	cout << endl;
	
	
	return 0;
}
