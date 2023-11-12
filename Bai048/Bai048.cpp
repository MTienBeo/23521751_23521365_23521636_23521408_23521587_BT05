#include<iostream>
using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;
void Nhap(PHANSO&);
int UCLN(int, int);
void RutGon(PHANSO&);
void Xuat(PHANSO);
PHANSO Tong(PHANSO, PHANSO);

int main()
{
	PHANSO x,y;
	cout << "Nhap phan so thu nhat: " << endl;
	Nhap(x);
	cout << "Nhap phan so thu hai: " << endl;
	Nhap(y);
	PHANSO z = Tong(x, y);
	cout<<"Tong cua 2 phan so " << endl;
	Xuat(z);
	return 0;
}

void Nhap(PHANSO& x)
{
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}

PHANSO Tong(PHANSO x, PHANSO y)
{
	PHANSO temp;
	temp.Tu = x.Tu * y.Mau + y.Tu * x.Mau;
	temp.Mau = x.Mau * y.Mau;
	RutGon(temp);
	return temp;
}

void Xuat(PHANSO x)
{
	cout << "Tu: " << x.Tu << endl;
	cout << "Mau: " << x.Mau << endl;
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

void RutGon(PHANSO& x)
{
	int kq = UCLN(x.Tu, x.Mau);
	x.Tu = x.Tu / kq;
	x.Mau = x.Mau / kq;
}