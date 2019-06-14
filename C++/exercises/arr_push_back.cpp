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

void push_back(int *&arr, int &size,const int value,int element)
{
	int *newArray=new int[size+1];
	for (int i = 0; i < element; i++)
	{
		newArray[i]=arr[i];
	}
	for (int i = element; i < size; i++)
	{
		newArray[i+1]=arr[i];
		newArray[element]=value;
	}
	//newArray[size++]=value;
	if (element==size)
	{
		newArray[size]=value;
	}
	size++;
	
	delete [] arr;
	arr=newArray;
}

void pop_back(int *&arr,int &size)
{
	size--;
	int *newArray=new int[size];
	for (int i = 0; i < size; i++)
	{
		newArray[i]=arr[i];
	}
	delete [] arr;
	arr=newArray;
}

int main()
{
	int size = 5;
	int *arr=new int [size];
	lic_array(arr,size);
	
	cout << "first_array= " ;
	show_array(arr,size);
	push_back(arr,size,564,5);
	cout << "first_array= " ;
	show_array(arr,size);
	//pop_back(arr,size);
	//cout << "first_array= " ;
	//show_array(arr,size);
	
	delete [] arr;
	
	return 0;
}
