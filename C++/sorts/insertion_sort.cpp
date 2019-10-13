#include <iostream>

using namespace std;

void swap(int *arr,int *arr_add)
{
	int temp = *arr;
	*arr = *arr_add;
	*arr_add = temp;
}

void print_array(int arr[],int &size)
{
	for(int i = 0;i < size;i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

}

int main()
{
	int size = 6;
	int arr [size] = {8,2,4,9,3,6};
	print_array(arr,size);

	for(int i = 0; i < size; i++)
	{
		for (int j = 0; j < size -1;j++)
		{
			while(arr[j] >= arr[j+1])
			{
				swap(&arr[j],&arr[j+1]);
			} 
		}
	}
	
	print_array(arr,size);
	

	return 0;
}
