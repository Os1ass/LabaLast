#include <iostream>
#include <iomanip>

using namespace std;

void read(double(&a)[30], int n)				//чтение строки(одномерного массива)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

void read(double(&a)[30][30], int& m, int& n)	//чтение массива массивов(двумерного)
{
	cout << "Vvedite kolichestvo strok:\n";
	cin >> m;
	cout << "Vvedite kolichestvo stolbtsov:\n";
	cin >> n;
	cout << "Vvedite massiv:\n";
	for (int i = 0; i < m; i++)
		read(a[i], n);							//чтение одномерного массива(строки двумерного массива)
}

void write(double a[30], int n)
{
	cout << fixed << setprecision(1);			//вывод одного знака после запятой
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";					//вывод одномерного массива(строки двумерного массива)
	cout << endl;
}

void write(double a[30][30], int m, int n)
{
	for (int i = 0; i < m; i++)
		write(a[i], n);							//вывод одномерного массива(строки двумерного массива)
}			