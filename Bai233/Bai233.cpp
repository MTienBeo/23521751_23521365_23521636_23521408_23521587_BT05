#include<iostream>
using namespace std;

struct phanso
{
	int Tu, Mau;
};
typedef struct phanso PHANSO;

void Nhap(PHANSO&);
void Nhap(PHANSO[][100], int&, int&);
int SoSanh(PHANSO, PHANSO);
int UCLN(int, int);
int ktToiGian(PHANSO);
void HoanVi(PHANSO&, PHANSO&);
void SapTang(PHANSO[], int);
void LietKe(PHANSO[][100], int, int);
void Xuat(PHANSO[], int);
void Xuat(PHANSO);
void Xuat(PHANSO[][100], int, int);

int main()
{
	PHANSO a[100][100];
	int n, m;
	Nhap(a, n, m);
	LietKe(a, n, m);
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

void LietKe(PHANSO a[][100], int n, int m)
{
	PHANSO b[1000];
	int k = 0;
	for (int i = 0; i < m; i++)
	{
		{
			for (int j = 0; j < n; j++)
			{
				if (ktToiGian(a[i][j]))
					b[k++] = a[i][j];
			}
		}
	}
	SapTang(b, k);
	cout << "Cac phan so toi gian theo thu tu tang dan la: " << endl;
	Xuat(b, k);
}

void SapTang(PHANSO a[], int n)
{
	for (int i = 0; i < n-1; i++)
	{
		{
			for (int j = i+1; j < n; j++)
			{
				if (SoSanh(a[i], a[j]) == 1)
					HoanVi(a[i],a[j]);
			}
		}
	}
}

int SoSanh(PHANSO x, PHANSO y)
{
	float a = (float)x.Tu / x.Mau;
	float b = (float)y.Tu / y.Mau;
	if (a > b)
		return 1;
	if (a < b)
		return -1;
	return 0;
}

void HoanVi(PHANSO& x, PHANSO& y)
{
	PHANSO temp = x;
	x = y;
	y = temp;
}

void Xuat(PHANSO a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Phan so a[" << i << "]: " << endl;
		Xuat(a[i]);
	}
}

int UCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a * b != 0)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return a + b;
}

int ktToiGian(PHANSO x)
{
	if (UCLN(x.Tu, x.Mau) == 1)
		return 1;
	return 0;
}