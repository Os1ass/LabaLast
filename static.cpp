#include <iostream>
#include "readWrite.cpp"
#include "analys.cpp"

using namespace std;

int main()
{
	char c = 'y';
	while (c == 'y')
	{
		double a[30][30];			//создание двумерного массива
		int m, n;
		read(a, m, n);				//чтение двумерного массива
		analys(a, m, n);			//вывод двумерного массива
		cout << "Khotite prodolzhit?(y/n)?\n";
		cin >> c;
	}
}