#include <iostream>
	
using namespace std; 

int main()
{
	cout << "Enter the number : ";
	int number;
	cin >> number;
	for (int i = 0; i < number; i++)
	{ // это строки рисунка их число равно количеству треугольников (и их высоте)
		for (int k = 0; k < number; k++)
		{ // количество фрагментов, которые будем рисовать
			for (int j = 0; j <= (2 * number - 1); j++)
			{ // ширина фрагмента рисунка, она же ширина основания треугольника = (2 * number - 1)
				if ((j <= (number + i)) && (j >= (number - i))) //диапазон вывода символа * в зависимости от номера строки рисунка
					cout << "*";
				else // все, что не заполнили символом *, заполняем пробелами
					cout << " ";
			}
		}
	cout << endl;
	}
	return 0;
}
