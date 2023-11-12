#include <iostream>
#include <cmath>
using namespace std;

struct dathuc
{
	float a[500];
	int n;
};
typedef struct dathuc DATHUC;

void Nhap(DATHUC&);
void Xuat(DATHUC);

DATHUC Tong(DATHUC, DATHUC);

int main()
{
	DATHUC f1;
	cout << "Nhap da thuc 1: ";
	Nhap(f1);
	DATHUC f2;
	cout << "\nNhap da thuc 2: ";
	Nhap(f2);
	cout << "\nDa thuc 1: ";
	Xuat(f1);
	cout << "\nDa thuc 2: ";
	Xuat(f2);

	cout << "\nTong 2 da thuc: ";
	Xuat(Tong(f1, f2));
	return 0;
}

void Nhap(DATHUC& f)
{
	cout << "\nNhap bac da thuc: ";
	cin >> f.n;
	for (int i = f.n; i >=0; i--)
	{
		cout << "Nhap he so bac " << i<<": ";
		cin >> f.a[i];
	}
}

void Xuat(DATHUC f)
{
	for (int i = f.n; i >= 2; i--)
		cout << f.a[i] << "x^" << i << " + ";
	cout << f.a[1] << "x + " << f.a[0];
}

DATHUC Tong(DATHUC f,DATHUC g)
{
	DATHUC temp;
	if (f.n < g.n)
	{
		temp.n = g.n;
		for (int i = temp.n; i >= g.n - f.n; i--)
			temp.a[i] = g.a[i];
		for (int i=f.n;i>=0;i--)
			temp.a[i] = g.a[i] + f.a[i];
	}
	else
	{
		temp.n = f.n;
		for (int i = temp.n; i >= f.n - g.n; i--)
			temp.a[i] = f.a[i];
		for (int i = g.n; i >= 0; i--)
			temp.a[i] = g.a[i] + f.a[i];
	}
	return temp;
}