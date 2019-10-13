#include <iostream>

using namespace std;

template <typename T>
void swap(T *arr,T *arr_add)
{
	T temp = *arr;
	*arr = *arr_add;
	*arr_add = temp;
}

template <typename T>
void Print_array(T *arr, int &size)
{
	for (int i = 0; i < size; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

template <typename T>
void my_bubble_sort(T arr[],int size)
{
	while(size > 0)	
	{
		for(int i = 0; i < size-1; ++i)
		{
			if(arr[i] > arr[i+1])
			{
				swap(&arr[i],&arr[i+1]);
			}
		}
		--size;
	}
}

int main()
{
	int size = 6;
	int arr[size] = {77,45,2,12,3,1};
	Print_array(arr,size);

	my_bubble_sort(arr,size);


	Print_array(arr,size);	
	return 0;
}
