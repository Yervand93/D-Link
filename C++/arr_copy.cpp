#include <iostream>

using namespace std;

void lic_array(int* const arr,const int size)
{
	for (int i=0; i < size; i++ )
	{
		arr[i]=rand()%20;
	}
}
	
void show_array(const int* const arr,const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "\t" << arr[i];
	}
	cout <<endl;
}

int main()
{
	int size = 5;
	int *first_array=new int [size];
	int *second_array=new int [size];
	
	lic_array(first_array,size);
	lic_array(second_array,size);
	
	cout << "first_array= " ;
	show_array(first_array,size);
	cout << "second_array= ";
	show_array(second_array,size);
	
	delete [] first_array;
	
	cout << "====================" << endl;
	first_array=new int [size];
	for (int i = 0; i < size; i++)
	{
		first_array[i]=second_array[i];
	}

	cout << "first_array= " ;
	show_array(first_array,size);
	cout << "second_array= ";
	show_array(second_array,size);
	
	cout << "first_array link= \t" << first_array
	<< "\nsecond_array link= \t" << second_array << endl;	

	delete [] first_array;
	delete [] second_array;
	return 0;
}
