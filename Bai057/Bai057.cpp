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
void QuiDongTu(PHANSO, PHANSO);

int main()
{
	PHANSO x;
	Nhap(x);
	Xuat(x);
	RutGon(x);
	cout << "Phan so sau khi rut gon la: ";
	Xuat(x);

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

void QuiDongTu(PHANSO& x, PHANSO& y)
{
	int tc = x.Tu * y.Tu;
	x.Mau = x.Mau * y.Tu;
	y.Mau = y.Mau * x.Tu;
	x.Tu = tc;
	y.Tu = tc;
}