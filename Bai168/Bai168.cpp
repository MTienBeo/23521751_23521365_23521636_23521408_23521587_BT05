#include<iostream>
#include<iomanip>
using namespace std;

struct DaThuc
{
	float a[100];
	int n;
};
typedef struct DaThuc DATHUC;

void Nhap(DATHUC&);
void Xuat(DATHUC);
DATHUC operator+(DATHUC, DATHUC);

int main()
{
	DATHUC ff, gg;
	cout << "Nhap da thuc thu nhat: " << endl;
	Nhap(ff);
	cout << "Nhap da thuc thu hai: " << endl;
	Nhap(gg);
	cout << "Tong hai da thuc: " << endl;
	DATHUC kk = ff + gg;
	Xuat(kk);
	return 0;
}

void Nhap(DATHUC& f)
{
	cout << "Nhap bac da thuc: ";
	cin >> f.n;
	for (int i = f.n; i >= 0; i--)
	{
		cout << "Nhap he so a[" << i << "]: ";
		cin >> f.a[i];
	}
}

void Xuat(DATHUC f)
{
	for (int i = f.n; i >= 1; i--)
	{
		cout << f.a[i];
		cout << "x^" << i;
		cout << " + ";
	}
	cout << f.a[0];
}

DATHUC operator+ (DATHUC f, DATHUC g)
{
	DATHUC temp = g;
	int lc = f.n;
	if (f.n > g.n)
	{
		temp = f;
		lc = g.n;
	}
	for (int i = lc; i >= 1; i--)
	{
		temp.a[i] = f.a[i] + g.a[i];
	}
	temp.a[0] = f.a[0] + g.a[0];
	return temp;
}