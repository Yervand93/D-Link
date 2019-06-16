#include <iostream>
#include <string>

using namespace std;

int main()
{
	int count=0,new_string=0;
	char text[]="Prepared by experienced English teachers,\n the texts, articles and conversations are brief\n and appropriate to your level of proficiency.\n Take the multiple-choice quiz\n following each text #";
	while (text[count] != '#')
	{
		if (text[count] == '\n')
		{
			new_string++;
		}
		count++;
	}
	cout << "Qanak@ toxeri = " << new_string << endl;
	
	return 0;
}
