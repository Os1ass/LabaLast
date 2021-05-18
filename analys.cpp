#include <iostream>

using namespace std;

bool check(double a[30][30], int m, int n)	
{
	double sum = 0, avg = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			sum += a[i][j];						//сумма элементов массива 
	}
	avg = sum / (n * m);						//среднее арифметическое элементов массива
	if (avg >= 0)
		return true;
	else
		return false;
}

void analys(double a[30][30], int m, int n)
{
	if (check(a, m, n))							//проверка на среднее арифметическое
	{
		cout << "Srednee ariphmeticheskoe bolshe nulya\n";
		write(a, m, n);
		return;
	}
	double b[30][30];							//создание нового массива B
	for (int i = 0; i < m; i++)
	{
		double l = INT_MAX;						//наименьший по абсолютной величине элемент в строке
		int num = 0;							//его номер
		for (int j = 0; j < n; j++)
		{					
			b[i][j] = a[i][j];					//формирование массива B
			if (abs(b[i][j]) < l)				//если абсолютное значение элемента меньше минимального
			{
				l = abs(b[i][j]);				//то перезаписываем минимальный
				num = j;						//и его номер
			}
		}
		if (i < n)								//если диагональный элемент присутствует в строке
		{
			b[i][num] = b[i][i];				//если диагональный элемент присутствует в строке
			b[i][i] = a[i][num];
		}
	}
	cout << "Srednee ariphmeticheskoe menshe nulya\n";
	cout << "Novyj massiv B:\n";
	write(b, m, n);								//вывод массива B
	return;
}
