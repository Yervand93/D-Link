#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char *string=new char[100];
	cout << "Greq hertakan tver: ";
	cin >> string;
	int k;
	cout << "Greq vor hamari tivn e petq: ";
	cin >> k;
	if ((k-1) < 0 || k > strlen(string))
		cout << "Sxal hamari tiv e" << endl;
	else
	cout << "k-i tivn e: " << string[k-1] << endl;
	delete[] string;
	string=nullptr;
	delete[] string;
	return 0;
}

