#include <iostream>

using namespace std;

int main()
{
	int a,b,f;
	cout << "Write numbers for a,b and f: " << endl;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "f=";
	cin >> f;
	
	cout << "Banadzev: x=(а + b — f / а) + f * a * a — (a + b)" << endl;
	int x=(a +b - f / a ) + f * a * a - ( a + b );
	cout << "x=" << x << endl;
	return 0; 
}
