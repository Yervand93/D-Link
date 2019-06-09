#include <iostream>
#include <string>

using namespace std;

int main()
{
	int max = 100;
	int min = 1;
	int answer;
	cout << "Take number in your mind" << endl;
	bool my_true;
	while (!my_true)
	{
		int kes = (max + min)/2;
		cout << "your number is great,equal or less: " << kes << endl;
		cin >> answer;
		switch (answer)
		{
			case 9:
				min = kes + 1;
				break;
			case 1:
				max = kes - 1;
				break;
			case 5:
				cout << "I find your number!!!It is: \t" << kes << endl;
				return 0;	
			default:
				main();
		}
	}
	return 0;
}
