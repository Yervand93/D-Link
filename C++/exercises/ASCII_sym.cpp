#include <iostream>

using namespace std;

void fun(int h, int w, char c)
{
	int pos=0;
	for(int i=1; i<=h; i++)
	{
		for(int j=1; j<=w; j++)
		{
			if(j==(w/2+1+pos)||j==(w/2+1-pos))
				 cout << c;
			else
				 cout << " ";
		}
	cout << endl;
	if(i<h/2+1)
		 pos++;
	else
		 pos--;
	}
}

int main()
{
	int n, h, w;
	cout << "To output * write 1, + write 2, # write 3: ";
	cin >> n;
	cout << "Please input only odd numbers: " << endl;
	cout << "Input height: ";
	cin >> h;
	cout << "Input Weight: ";
	cin >> w;
	char ch;
	switch(n)
	{
		case 1:
			 ch='*';
			 break;
		case 2:
			 ch='+';
			 break;
		case 3:
			 ch='#';
				 break;
		default:
			 ch='s';
			 break;
	}
	fun(h, w, ch);
	cin.get();

	return 0;
}
