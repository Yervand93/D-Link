#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double X,Y,Z;
	cout << "Write X: ";
	cin >> X;
	cout << "Write Y: ";
	cin >> Y;
	cout << "Write Z: ";
	cin >> Z;
	cout << endl;
	double vector =sqrt(X*X + Y*Y + Z*Z);
	cout << "You Write : X = " << X << "; Y = " << Y << "; Z = " << Z << endl;
	cout << "The Vector width: " << vector << endl; 
	return 0;
}
