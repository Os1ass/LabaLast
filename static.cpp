#include <iostream>
#include "readWrite.cpp"
#include "analys.cpp"

using namespace std;

int main()
{
	char c = 'y';
	while (c == 'y')
	{
		double a[30][30];			//�������� ���������� �������
		int m, n;
		read(a, m, n);				//������ ���������� �������
		analys(a, m, n);			//����� ���������� �������
		cout << "Khotite prodolzhit?(y/n)?\n";
		cin >> c;
	}
}