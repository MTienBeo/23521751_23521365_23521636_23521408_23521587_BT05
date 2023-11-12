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
int UCLN(int, int);
void RutGon(PHANSO&);
PHANSO operator/(PHANSO, PHANSO);


int main()
{
	PHANSO x;
	PHANSO y;
	cout << "nhap phan so x: ";
	Nhap(x);
	cout << "nhap phan so y: ";
	Nhap(y);
	Xuat(x);
	Xuat(y);
	Xuat(x / y);

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
	cout << "Phan so la: " << x.Tu << "/" << x.Mau << endl;
}
int UCLN(int a, int b)
{
	while (a * b != 0)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return a + b;
}

void RutGon(PHANSO & x)
{
	int kq = UCLN(x.Tu, x.Mau);
	x.Tu = x.Tu / kq;
	x.Mau = x.Mau / kq;
}

PHANSO operator/(PHANSO x, PHANSO y)
{
	PHANSO temp;
	temp.Tu = x.Tu * y.Mau;
	temp.Mau = x.Mau * y.Tu;
	RutGon(temp);
	return temp;
}