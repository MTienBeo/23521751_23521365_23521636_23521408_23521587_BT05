#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO&);
void Xuat(PHANSO);
void Nhap(PHANSO[], int&);
void Xuat(PHANSO[], int);
bool ktDuong(PHANSO);
PHANSO DuongDau(PHANSO[], int);

int main()
{
	int n;
	PHANSO a[100];
	Nhap(a, n);
	Xuat(a, n);
	cout << "phan so duong dau tien la: " << endl;
	Xuat(DuongDau(a, n));

}

void Nhap(PHANSO& x)
{
	cout << "nhap tu: ";
	cin >> x.Tu;
	cout << "nhap mau: ";
	cin >> x.Mau;

}

void Xuat(PHANSO x)
{
	cout << "Tu so la: " << x.Tu << endl;
	cout << "Mau so la: " << x.Mau << endl;
}

void Nhap(PHANSO a[], int& n)
{
	cout << "nhap so phan tu: ";
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
		Xuat(a[i]);
}

bool ktDuong(PHANSO x)
{
	if (x.Tu * x.Mau > 0)
		return true;
	return false;
}

PHANSO DuongDau(PHANSO a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		if (ktDuong(a[i]))
		{
			return a[i];
			break;
		}
	PHANSO lc = { 0,1 };
	return lc;
}