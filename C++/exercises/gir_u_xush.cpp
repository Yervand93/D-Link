#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	srand(time(NULL));
	enum {ORYOL,RESHKA};
	int count_oryol = 0;
	int count_reshka = 0;
	int count = 0;
	while (count<100)
	{
		int num =rand() % 2;
		if (num == ORYOL)
		{
			cout << "Oryol" << endl;
			count_oryol+=1;
		}
		else if (num == RESHKA)
		{
			cout << "Reshka" << endl;
			count_reshka+=1;
		}
	count++;
	}
	cout << "Oryoli qanak: \t" << count_oryol << endl;
	cout << "Reshkai qanak: \t" << count_reshka << endl;
	

	return 0;
}
