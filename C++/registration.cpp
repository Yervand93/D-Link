#include <iostream>
#include <string>
#include <map>


using namespace std;
void registrate();
void show_dict();
void switch_case(char *answer);

map<string,string>dict;
string name,password;	

void registrate()
{
	cout << "Write your new username: " << endl;
	cin >> name;
	cout << "Write your new password: " << endl;
	cin >> password;
	dict[name]=password;
	show_dict();

	
}

void show_dict()
{
	cout << "User\t" << "Password" << endl << endl;
	for (auto item : dict)
	{
		cout << item.first << ": " << item.second << endl;
	}
}

void switch_case(char *answer)
{
	switch (*answer)
	{
		case 'Y':
		case 'y':
			registrate();
			break;
		default:
			cout << "See you later,if you want registrate." << endl;;
			break;
	}
}

int main()
{
	dict["Yervand"]="Yer1993";
	dict["Aghas"]="999";
	char answer;
	cout << "Please write your name: ";
	cin >> name;
	cout << "Please write your password: ";
	cin >> password;
	if (name==dict[name])
	{
		cout << name << ": user is correct" << endl;
	}
	else
	{
		cout << "This user is not recognized.\nDo you want registrate? y/n ";
		cin >> answer;
		switch_case(&answer);
	}
	
	return 0;
}
