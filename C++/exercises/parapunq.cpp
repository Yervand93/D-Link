#include <iostream>
//erku massivneri gumarn e,ete ka kent tvov masiv uremn chi kisvum,isk ete zuyg tvov massiv e kisvum e havasar u arjeqneri gumarn e hamematvum.

using namespace std;

void pr_arr1(int arr[],int size)
{
	for (int i = 0; i < size/2; i++)
	{
		cout << arr[i] << " ";	
	}
	cout << endl;
}

void pr_arr2(int arr[],int size)
{
	for (int i = size/2; i < size; i++)
	{
		cout << arr[i] << " ";	
	}
	cout << endl;
}

void cycle_cin(int &num)
{
	while (!(cin >> num))
	{
		cin.clear();
		cin.ignore(123,'\n');
	}
}
int main()
{
	int size;
	cout << "Write size array: ";
	cin >> size;
	if (size > 0)
	{
		int num;
		int arr[size];
		if (size%2==0)
		{
			arr[size/2];
			int arr2[size/2];
			int res1=0,res2=0;
			cout << "Write numbers for array every each line." << endl;
			for (int i = 0; i < size/2; i++)
			{
				cycle_cin(num);
				arr[i]=num;
				res1+=arr[i];
			}
			for (int i = size/2; i < size; i++)
			{
				cycle_cin(num);
				arr2[i]=num;
				res2+=arr2[i];
			}
			cout << "Array1 = ";
			pr_arr1(arr,size);
			cout << "Array2 = ";
			pr_arr2(arr2,size);
			if (res1 < res2)
			{
				cout << "The first array(" <<res1<< ") LESS then second array(" << res2 <<")!" << endl;
			}
			else if (res1 > res2)
			{
				cout << "The first array(" <<res1<< ") GREAT then second array(" << res2 <<")!" << endl;
			}
			else
			{
				cout << "The first array(" <<res1<< ") EQUAL second array(" << res2 <<")!" << endl;
			}
		}
		else
		{
			for (int i = 0; i < size; i++)
			{
				cin >> num;
				arr[i]=num;
				cout << arr[i] << " "; 
			}
			cout << endl;
		}
		
	}
	else
	{
		while (!(cin && size > 1))
		{
			cout << "Your number is less 1 or you are typing not integer!" << endl;
			cin.clear();
			cin.ignore(123,'\n');
			main();
		}	
	}

	return 0;
}
