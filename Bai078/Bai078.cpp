#include<iostream>
using namespace std;

struct HonSo
{
	int Nguyen;
	int Tu;
	int Mau;
};
typedef struct HonSo HONSO;

void Nhap(HONSO&);
int UCLN(int a, int b);
void RutGon(HONSO&);
HONSO Thuong(HONSO, HONSO);
void Xuat(HONSO);

int main()
{
	HONSO x,y;
	cout << "Nhap hon so thu nhat: " << endl;
	Nhap(x);
	cout << "Nhap hon so thu hai: " << endl;
	Nhap(y);
	HONSO z= Thuong(x,y);
	cout << "Thuong hai hon so: " << endl;
	Xuat(z);
}

void Nhap(HONSO& x)
{
	cout << "Nhap nguyen: ";
	cin >> x.Nguyen;
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau : ";
	cin >> x.Mau;
	
}

int UCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
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
	x.Nguyen = x.Nguyen + x.Tu / x.Mau;
	x.Tu = x.Tu % x.Mau;
}

HONSO Thuong(HONSO x, HONSO y)
{
	x.Tu = x.Nguyen * x.Mau + x.Tu;
	x.Nguyen = 0;
	y.Tu = y.Nguyen * y.Mau + y.Tu;
	y.Nguyen = 0;
	HONSO temp;
	temp.Tu = x.Tu * y.Mau;
	temp.Mau = y.Tu * x.Mau;
	temp.Nguyen = 0;
	RutGon(temp);
	return temp;
}

void Xuat(HONSO x)
{
	cout << "Nguyen: " << x.Nguyen << endl;
	cout << "Tu: " << x.Tu << endl;
	cout << "Mau: " << x.Mau << endl;
}