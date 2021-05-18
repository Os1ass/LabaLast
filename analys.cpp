#include <iostream>

using namespace std;

bool check(double a[30][30], int m, int n)	
{
	double sum = 0, avg = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			sum += a[i][j];						//����� ��������� ������� 
	}
	avg = sum / (n * m);						//������� �������������� ��������� �������
	if (avg >= 0)
		return true;
	else
		return false;
}

void analys(double a[30][30], int m, int n)
{
	if (check(a, m, n))							//�������� �� ������� ��������������
	{
		cout << "Srednee ariphmeticheskoe bolshe nulya\n";
		write(a, m, n);
		return;
	}
	double b[30][30];							//�������� ������ ������� B
	for (int i = 0; i < m; i++)
	{
		double l = INT_MAX;						//���������� �� ���������� �������� ������� � ������
		int num = 0;							//��� �����
		for (int j = 0; j < n; j++)
		{					
			b[i][j] = a[i][j];					//������������ ������� B
			if (abs(b[i][j]) < l)				//���� ���������� �������� �������� ������ ������������
			{
				l = abs(b[i][j]);				//�� �������������� �����������
				num = j;						//� ��� �����
			}
		}
		if (i < n)								//���� ������������ ������� ������������ � ������
		{
			b[i][num] = b[i][i];				//���� ������������ ������� ������������ � ������
			b[i][i] = a[i][num];
		}
	}
	cout << "Srednee ariphmeticheskoe menshe nulya\n";
	cout << "Novyj massiv B:\n";
	write(b, m, n);								//����� ������� B
	return;
}
