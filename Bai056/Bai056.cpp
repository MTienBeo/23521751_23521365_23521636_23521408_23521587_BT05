#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct phanso
{
	int Tu;
	int Mau;
};
typedef struct phanso PHANSO;

void Nhap(PHANSO&);
void Xuat(PHANSO);

int main()
{
	PHANSO x, y;
	cout << "Nhap phan so 1:";
	Nhap(x);
	cout << "Nhap phan so 2:";
	Nhap(y);
	cout << "Phan so 1:";
	Xuat(x);
	cout << "Phan so 2:";
	Xuat(y);
}

void QuiDongMau(PHANSO& x, PHANSO& y)
{
	int mc = x.Mau * y.Mau;
	x.Tu = x.Tu * y.Mau;
	y.Tu = x.Mau * y.Tu;
	x.Mau = mc;
	y.Mau = mc;
}