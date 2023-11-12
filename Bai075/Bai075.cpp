#include <iostream>
using namespace std;

struct HonSo
{
	int Nguyen;
	int Tu;
	int Mau;
};
typedef struct HonSo HONSO;

void Nhap(HONSO&);
void Xuat(HONSO);
int UCLN(int, int);
void RutGon(HONSO&);
HONSO Tong(HONSO, HONSO);

int main()
{
	HONSO hs1;
	cout << "\nNhap hon so 1: ";
	Nhap(hs1);
	HONSO hs2;
	cout << "\nNhap hon so 2: ";
	Nhap(hs2);

	cout << "\nHon so 1: ";
	Xuat(hs1);
	cout << "\nHon so 2: ";
	Xuat(hs2);

	cout << "\nTong hai phan so: ";
	Xuat(Tong(hs1, hs2));

	return 0;
}

void Nhap(HONSO& x)
{
	cout << "\nNhap nguyen: ";
	cin >> x.Nguyen;
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}

void Xuat(HONSO x)
{
	cout << x.Nguyen << " " << x.Tu << "/" << x.Mau;
}

int UCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a * b != 0)
		if (a > b)
			a = a - b;
		else
			b = b - a;
	return a + b;
}

void RutGon(HONSO& x)
{
	int kq = UCLN(x.Tu, x.Mau);
	x.Tu = x.Tu / kq;
	x.Mau = x.Mau / kq;
	x.Nguyen = x.Nguyen + x.Tu / x.Mau;
	x.Tu = x.Tu % x.Mau;
}

HONSO Tong(HONSO x, HONSO y)
{
	HONSO temp;
	temp.Nguyen = x.Nguyen + y.Nguyen;
	temp.Tu = x.Tu * y.Mau + y.Tu * x.Mau;
	temp.Mau = x.Mau * y.Mau;
	RutGon(temp);
	return temp;
}