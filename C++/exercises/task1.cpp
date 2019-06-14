#include <iostream>

using namespace std;

int main()
{
	int number;
	int b = 0;
	int count = 0;
	cout << "Write 5 numbers" << endl;
	cin >> number;
	if (number > 9999 && number < 100000)
	{
		cout << "1 Number is: " << (number/10000)%10 << endl;
		cout << "2 Number is: " << (number/1000)%10 << endl;
		cout << "3 Number is: " << (number/100)%10 << endl;
		cout << "4 Number is: " << (number/10)%10 << endl;
		cout << "5 Number is: " << number%10 << endl;
	}
	cout << "===================" << endl;
	cout << number%10 << endl;
	while (number!=0)
	{
		b = b*10+number%10;
		number=number/10;
		count++;
	}
	number=b;
	for (int i = 1; i <= count; i++)
	{
		number = b%10;
		b = b/10; 
		cout << i << " Number is: " << number << endl;
	}  
	return 0;
}
