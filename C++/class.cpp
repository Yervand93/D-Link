#include <iostream>
#include <string>

using namespace std;

class Human
{
private:
	int age;
	int weight;
	string name;	

public:

	Human()
	{
		age = 0;
		weight = 0;
		name = "Noname"; 
	}
		
	Human(string var_name,int var_age,int var_weight)
	{
		name = var_name;
		age = var_age;
		weight = var_weight;
	}
	
	void Set()
	{
		cout << "Write your name" << endl; 
		cin	>> name;
		cout << "Write your age" << endl; 
		cin	>> age;
		cout << "Write your weight" << endl; 
		cin	>> weight;
	}
	void Print()
	{
		cout << "Name: \t" << name << "\nWeight: \t" << weight << "\nAge: \t" << age << endl;
	
	}

};

int main()
{
	Human firstHuman;
	Human secondHuman("Aghasi",26,150);
	
	//firstHuman.Set();
	//secondHuman.Set();
	
	firstHuman.Print();	
	cout << "=============================" << endl;
	secondHuman.Print();
	
		
	return 0;
}
