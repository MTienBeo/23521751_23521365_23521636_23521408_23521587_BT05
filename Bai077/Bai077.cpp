#include <iostream>
#include <iomanip>
#include <cmath>
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
void RutGon(HONSO);
HONSO Tich(HONSO, HONSO);

int main()
{
	HONSO x;
	Nhap(x);
	Xuat(x);
}
void Nhap(HONSO& x)
{
	cout << "nhap nguyen: ";
	cin >> x.Nguyen;
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "nhap mau: ";
	cin >> x.Mau;
}

void Xuat(HONSO x)
{
	cout << "Phan nguyen "<< x.Nguyen << endl;
	cout << "Phan tu: " << x.Tu << endl;
	cout << "Phan mau: " << x.Mau << endl;
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

void RutGon(HONSO& x)
{
	int kq = UCLN(x.Tu, x.Mau);
	x.Tu = x.Tu / kq;
	x.Mau = x.Mau / kq;
}

HONSO Tich(HONSO x, HONSO y)
{
	x.Tu = x.Nguyen * x.Mau + x.Tu;
	x.Nguyen = 0;
	y.Tu = y.Nguyen * y.Mau + y.Tu;
	y.Nguyen = 0;
	HONSO temp;
	temp.Tu = x.Tu * y.Tu;
	temp.Mau = x.Mau * y.Mau;
	temp.Nguyen = 0;
	RutGon(temp);
	return temp;
}