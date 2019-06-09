#include <iostream>

using namespace std;

int main()
{
	int arr[6]={9,40,16,78,6,12};
	//int min=arr[0];
	for (int i=0; i < 6; i++)
	{
		cout << *(arr+i) <<endl;
	}

/*	for (int i=0;i<6;i++)
	{
		if (arr[i]<min)
			{
				min=arr[i];
			}
	}
	cout<<"min= "<<min<< endl;*/
}
