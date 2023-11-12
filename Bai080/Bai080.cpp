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
void QuiDongMau(HONSO&, HONSO&);


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

	QuiDongMau(hs1, hs2);
	cout << "\nHon so 1 sau khi qui dong mau: ";
	Xuat(hs1);
	cout << "\nHon so 2 sau khi qui dong mau: ";
	Xuat(hs2);

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

void QuiDongMau(HONSO& x, HONSO& y)
{
	int mc = x.Mau * y.Mau;
	x.Tu = x.Tu * y.Mau;
	y.Tu = x.Mau * y.Tu;
	x.Mau = mc;
	y.Mau = mc;
}