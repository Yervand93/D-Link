#include <iostream>

using namespace std;

void pppp(int a)
{
	a=464;
}


void ptr(int *paa)
{
	(*paa)=55;
}

int main()
{
	int a = 0;
	pppp(a);
	cout<< a <<endl;
	cout<< "======"<<endl;
	ptr(&a);
	cout<< a <<endl;
	


}
