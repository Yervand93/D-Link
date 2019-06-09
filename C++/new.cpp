#include <iostream>
#include <string>

using namespace std;

int main(){
	int *ptrarray = new int[5];
	for (int i=0; i<5; i++){
		cin>> ptrarray[i];
	}
	for (int i=0;i<5;i++){
		cout << *(ptrarray+i) << endl;
	}
/*	string x,y;
	cout<<"What is your name? "<<endl;
	getline(cin, x);
	cout<<"Hello  "<<x<<endl;
	//cin>>y;*/
	return 0;
}
