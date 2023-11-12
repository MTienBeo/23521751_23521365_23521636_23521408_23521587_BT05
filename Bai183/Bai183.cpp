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
void Xuat(PHANSO[], int);
void Xuat(PHANSO);

int main()
{
	PHANSO a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
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

void Xuat(PHANSO a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Phan so a[" << i << "]: " << endl;
		Xuat(a[i]);
	}
}

void Xuat(PHANSO x)
{
	cout << "Tu: " << x.Tu << endl;
	cout << "Mau: " << x.Mau << endl;
}
