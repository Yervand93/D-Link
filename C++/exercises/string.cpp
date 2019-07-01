#include <iostream>
#include <cstring>

using namespace std;

class String
{
private:
	char* str;
public:
	String()
	{
		str = nullptr;
	}
	String(const char* str)
	{
		int length = strlen(str);
		this->str = new char [length];
		for (int i = 0; i < length; i++)
		{
			this->str[i]=str[i];
		}
	}
	void Print()
	{
		cout << str << endl;
	}
	~String()
	{
		delete[] this->str;
	}
	String& operator =(const String &other)
	{
		if (this->str!=nullptr)
		{
			delete[] str;
		}
		int length = strlen(other.str);
		this->str = new char [length];
		for (int i = 0; i < length; i++)
		{
			this->str[i]=other.str[i];
		}
		
		return *this;
	}
};



int main()
{
	String a("Hello World!!!");
	String str2("Barevner")
	a=str2;
	return 0;
}
