#include <iostream>
//amen jam@ mek 0.5 kavelna parkovki gumar@
using namespace std;

int main()
{
	float cash = 0;
	float time;
	int count = 0;
	int size = 3;
	float arr_time[size],arr_plata[size];
	float sum_time = 0,sum_plata = 0;
	while (count < size)
	{
		cout << "Qani jam eq parkovka linelu? ";
		cin >> time;
		if (time <=3 && time > 0)
		{
			cash = 2.00;
			arr_time[count]=time;
			arr_plata[count]=cash;
		}
		else if (time == 24)
		{
			cash = 10.00;
			arr_time[count]=time;
			arr_plata[count]=cash;
		}
		else if (time > 3 && time < 24)
		{
			for (float i = 0; i < time; i++)
			{
				cash = 1 + (0.5 * i);
				arr_time[count]=time;
				arr_plata[count]=cash;
			}
		}
		count++;
	}
	cout << endl << "Cars\t" << "Time\t" << "Plata" << endl;
	for (int element = 0; element < 3;element++)
	{
		cout << element+1 <<"\t" << arr_time[element] << "\t" << arr_plata[element] << endl;
		sum_time+=arr_time[element];
		sum_plata+=arr_plata[element];
	}
	cout << "SUMMA\t" << sum_time << "\t" << sum_plata << endl;
	return 0;
}
