#include <iostream>

using namespace std;

int main()
{
	cout << "\t\t\tMax and Min numbers" << endl;
	cout << endl;
	unsigned num;
	cout << "Write integer not great 99: ";
	cin >> num;
	if (num >9 && num < 100)
	{
		if (num/10 > num%10)
		{
			cout << num/10 << " - great number" << endl;
			cout << num%10 << " - less number" << endl;
		}
		else if(num/10 < num%10)
		{
			cout << num%10 << " - great number" << endl;
			cout << num/10 << " - less number" << endl;
		}
		else
		{
			cout << "Tver@ havasar en irar" << endl; 
		}
	}
	else
	{
		cout << "Please write integer not great 99 and not less 10" << endl;
	}
	return 0;
}
