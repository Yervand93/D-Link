#include <iostream>

using namespace std;

int main()
{
	int number;
	cout << "Greq tiv qarakusi stanalu hamar: ";
	cin >> number;
	for (int i = 0; i < number; i++)
	{
		for (int j=0; j< number; j++)
		{
			if(i==0 || i==number-1)
			{
				cout<<"*";
			}
			else
			{
				if( j==0 || j==number-1)
				{
					cout<<"*";	
				}
				else
				{
					cout<<" ";	
				}
			}
		}
		cout<<'\n';
	}
	return 0;
}
