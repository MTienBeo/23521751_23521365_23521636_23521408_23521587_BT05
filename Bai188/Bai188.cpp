#include<iostream>
using namespace std;

struct phanso
{
	int Tu;
	int Mau;
};
typedef struct phanso PHANSO;

void Nhap(PHANSO[], int&);
void Nhap(PHANSO&);
int ktDuong(PHANSO);
int SoSanh(PHANSO, PHANSO);
PHANSO DuongNhoNhat(PHANSO[], int n);
void Xuat(PHANSO);

int main()
{
	PHANSO a[100];
	int n;
	Nhap(a, n);
	PHANSO k = DuongNhoNhat(a, n);
	cout << "Phan so duong nho nhat trong mang la: " << endl;
	Xuat(k);
}

void Nhap(PHANSO a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: " << endl;
		Nhap(a[i]);
	}
}

void Nhap(PHANSO& x)
{
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}

void Xuat(PHANSO x)
{
	cout << "Tu: " << x.Tu << endl;
	cout << "Mau: " << x.Mau << endl;
}

PHANSO DuongNhoNhat(PHANSO a[], int n)
{
	if (n == 0)
	{
		PHANSO lc = { -1,1 };
		return lc;
	}
	PHANSO lc = DuongNhoNhat(a, n - 1);
	if (ktDuong(a[n - 1]) == 0)
		return lc;
	if (ktDuong(lc) == 0)
		return a[n - 1];
	if (SoSanh(a[n - 1], lc) == -1)
		lc = a[n - 1];
	return lc;
}

int ktDuong(PHANSO x)
{
	if (x.Tu * x.Mau > 0)
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