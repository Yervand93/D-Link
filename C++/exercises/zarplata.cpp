#include <iostream>

using namespace std;

int main()
{
	int jam,ashxatavardz;
	const int orakan_jam=40;
	float zarplata = 0;
	cout << "Greq qani jam eq ashxatel: ";
	cin >> jam;
	cout << "Inchqan e 1 jamva ashxatavardz@: ";
	cin >> ashxatavardz;
	if (jam > orakan_jam)
	{
		zarplata=((jam-orakan_jam)*ashxatavardz)/2 + jam*ashxatavardz;
		cout << "Zarplata: " << zarplata << endl;
	}	
	else if (jam >0 && jam <= orakan_jam)
	{
		zarplata=jam*ashxatavardz;
		cout << "Zarplata: " << zarplata << endl;
	}
	else
	{
		cout << "Mutqagrvac e bacasakan tiv!!!" << endl;
	}
	return 0;
}
