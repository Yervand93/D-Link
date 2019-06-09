#include <iostream>
#include <string>

using namespace std;


int main()
{
	int erkar,barcr;
	cout << "grel erkarutyuN@" << endl;
	cin >> erkar;
	cout << "grel barcrutyun@" << endl;
	cin >> barcr;

	for (int j=0;j < barcr; j++)
	{
		for (int i=0; i < erkar; i++ )
		{
			cout<<"*";
		}
		cout<<endl;
	}
}

