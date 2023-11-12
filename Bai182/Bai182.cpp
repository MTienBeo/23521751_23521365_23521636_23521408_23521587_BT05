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

int main()
{
	int n;
	PHANSO a[100];
	Nhap(a, n);

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