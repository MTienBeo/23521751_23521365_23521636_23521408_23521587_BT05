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

void Nhap(PHANSO[], int&);
void Xuat(PHANSO[], int);

int ktAm(PHANSO);
int TimViTri(PHANSO[], int);

int main()
{
	PHANSO A[1000];
	int n;
	cout << "Nhap mang cac phan so: ";
	Nhap(A, n);
	cout << endl;

	cout << "Mang cac phan so la: ";
	Xuat(A, n);
	cout << endl;

	cout << "Vi tri co gia tri am lon nhat la: ";
	cout << TimViTri(A, n);
	return 1;
}

void Nhap(PHANSO& x)
{
	cout << "\nNhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}

void Xuat(PHANSO x)
{
	cout << "\nTu = " << x.Tu;
	cout << "\nMau = " << x.Mau;
}

void Nhap(PHANSO a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		Nhap(a[i]);
	}
}

void Xuat(PHANSO a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "\nPhan so a[" << i << "]:";
		Xuat(a[i]);
	}
}

int ktAm(PHANSO x)
{
	if (x.Tu * x.Mau < 0)
		return 1;
	return 0;
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

int TimViTri(PHANSO a[], int n)
{
	if (n == 0)
		return -1;
	int lc = TimViTri(a, n - 1);
	if (ktAm(a[n - 1]) == 0)
		return lc;
	
	if (SoSanh(a[n - 1], a[lc]) == -1)
		lc = n - 1;
	return lc;
}