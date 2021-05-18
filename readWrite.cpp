#include <iostream>
#include <iomanip>

using namespace std;

void read(double(&a)[30], int n)				//������ ������(����������� �������)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

void read(double(&a)[30][30], int& m, int& n)	//������ ������� ��������(����������)
{
	cout << "Vvedite kolichestvo strok:\n";
	cin >> m;
	cout << "Vvedite kolichestvo stolbtsov:\n";
	cin >> n;
	cout << "Vvedite massiv:\n";
	for (int i = 0; i < m; i++)
		read(a[i], n);							//������ ����������� �������(������ ���������� �������)
}

void write(double a[30], int n)
{
	cout << fixed << setprecision(1);			//����� ������ ����� ����� �������
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";					//����� ����������� �������(������ ���������� �������)
	cout << endl;
}

void write(double a[30][30], int m, int n)
{
	for (int i = 0; i < m; i++)
		write(a[i], n);							//����� ����������� �������(������ ���������� �������)
}			