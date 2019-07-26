#include <iostream>

using namespace std;

int main()
{
	int num = 0;
	int size = 0;
	int *arr = new int[1];  
	while (num >= 0)
	{
		cout << "Write integer: ";
		cin >> num;
		if(num < 0)
			break;
		if(size == 0)
		{
			arr[size]=num;
			cout << arr[size] << endl;
			size++;
		}
		else
		{
			int *arr_new = new int[size+1];
			for (int j = 0;j < size; j++)
			{
				arr_new[j]=arr[j];
			}
			arr_new[size]=num;
			delete[] arr;
			arr= new int[size+1];
			for(int i = 0; i < (size+1); i++)
			{
				arr[i]=arr_new[i];
				cout << arr[i] << " ";
			}
			cout << endl;
			delete[] arr_new;
			size++;
		}
	}
		delete[] arr;
	return 0;
}
