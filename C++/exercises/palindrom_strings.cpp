#include <iostream>
#include <string>

using namespace std;

int main()
{
	string palindrom;
	cout << "\t\tProgramma Palindrom C++ for STRINGS" << endl;
	cout << endl;
	cout << "Greq bar: ";
	cin >> palindrom;
	for (int i = 0; i < palindrom.length()/2; i++)
	{
		if (palindrom[i]==palindrom[palindrom.length()-i-1])
		{
			cout << "Words is a palindrom" << endl;
			break;
		}
		else
		{
			cout << "Words is not palindrom!!!" << endl;
			break;
		}
	}
	
	return 0;
}
