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

int ktDuong(PHANSO);
int DemDuong(PHANSO[], int);

int main()
{
	PHANSO A[1000];
	int n;
	cout << "Nhap mang cac phan so: ";
	Nhap(A,n);
	cout << endl;

	cout << "Mang cac phan so la: ";
	Xuat(A,n);
	cout << endl;

	cout << "So luong phan so duong trong mang la: ";
	cout << DemDuong(A, n);
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

int ktDuong(PHANSO x)
{
	if (x.Tu * x.Mau > 0)
		return 1;
	return 0;
}

int DemDuong(PHANSO a[], int n)
{
	int dem = 0;
	for (int i = 0; i <= n - 1; i++)
		if (ktDuong(a[i]))
			dem++;
	return dem;
}