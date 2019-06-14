#include <iostream>

using namespace std;

void repeat_sym();


int main()
{
	string name,last_name,fath_name,stud_num;
	cout << "Greq anun: ";
	cin >> name;
	cout << "Greq azganun: ";
	cin >> last_name;
	cout << "Greq hayranun: ";
	cin >> fath_name;
	cout << "Hamar@ Usanoxi: ";
	cin >> stud_num;
	string sym = "*";
	string tox = "Katarvac en ashxt. us. ";
	cout << endl << endl;
	for (int i = 0; i < 5; i++ )
	{
		cout << sym << endl;
	
	if (name.length()+last_name.length()+fath_name.length()+ stud_num.length() < tox.length() + stud_num.length())
	{
		for (int i =0; i < tox.length() + stud_num.length(); i++)
		{
			cout << sym;
		}
	}
	else
	{
		for (int i =0; i < name.length()+last_name.length()+fath_name.length()+ stud_num.length(); i++)
		{
			cout << sym;
		}
	}
	cout << "\nLaborator ashxatanqner N1" << endl;
	cout << "Katarvac en ashxt. us " << stud_num << endl;
	cout << name << " " << last_name << " " << fath_name << endl;
	for (int i =0; i < name.length()+last_name.length()+fath_name.length()+ stud_num.length(); i++)
	{
		cout << sym;
	}
	cout << endl;
	}
	return 0;
}

