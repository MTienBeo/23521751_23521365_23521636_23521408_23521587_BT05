#include <iostream>
#include <cmath>
using namespace std;

struct phanso
{
	int Tu;
	int Mau;
};
typedef struct phanso PHANSO;

void Nhap(PHANSO&);
void Xuat(PHANSO);

void Nhap(PHANSO[][100], int&, int&);
void Xuat(PHANSO[][100], int, int);

int SoSanh(PHANSO, PHANSO);
PHANSO LonNhat(PHANSO[][100], int, int);

int main()
{
	PHANSO A[100][100];
	int m, n;
	cout << "Nhap ma tran phan so: \n";
	Nhap(A, m, n);
	cout << endl;

	cout << "Ma tran phan so la: \n";
	Xuat(A, m, n);
	cout << endl;

	PHANSO M;
	cout << "Phan so lon nhat trong ma tran la: ";
	M = LonNhat(A, m, n);
	Xuat(M);

	return 1;
}

void Nhap(PHANSO& x)
{
	cout << "\nNhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
	cout << endl;
}

void Xuat(PHANSO x)
{
	cout << "\nTu = " << x.Tu;
	cout << "\nMau = " << x.Mau << endl;
}

void Nhap(PHANSO a[][100], int& m, int& n)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]:";
			Nhap(a[i][j]);
		}
}

void Xuat(PHANSO a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "A[" << i << "][" << j << "]:";
			Xuat(a[i][j]);
			cout << endl;
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

PHANSO LonNhat(PHANSO a[][100], int m, int n)
{
	PHANSO lc = a[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (SoSanh(a[i][j], lc) == 1)
				lc = a[i][j];
	return lc;
}