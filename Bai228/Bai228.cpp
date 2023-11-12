#include<iostream>
using namespace std;

struct phanso
{
	int Tu, Mau;
};
typedef struct phanso PHANSO;

void Nhap(PHANSO&);
void Nhap(PHANSO[][100], int&, int&);
void Xuat(PHANSO);
void Xuat(PHANSO[][100], int, int);

int main()
{
	PHANSO a[100][100];
	int n, m;
	Nhap(a, n, m);
	Xuat(a, n, m);
}

void Xuat(PHANSO p)
{
	cout << "Tu: " << p.Tu << endl;
	cout << "Mau: " << p.Mau << endl;
}

void Nhap(PHANSO& p)
{
	cout << "Nhap Tu: ";
	cin >> p.Tu;
	cout << "Nhap Mau: ";
	cin >> p.Mau;
}

void Nhap(PHANSO a[][100], int& n, int& m)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap phan so a[" << i << "][" << j << "]: " << endl;
			Nhap(a[i][j]);
		}
	}
}

void Xuat(PHANSO a[][100], int n, int m)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Phan so a[" << i << "][" << j << "]: " << endl;
			Xuat(a[i][j]);
			cout << endl;
		}
	}
}