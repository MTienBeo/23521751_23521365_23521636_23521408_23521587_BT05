#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct honso
{
	int Nguyen;
	int Tu;
	int Mau;
};
typedef struct honso HONSO;

void Nhap(HONSO&);
void Xuat(HONSO);

int main()
{
	HONSO x, y;
	cout << "Nhap hon so 1:";
	Nhap(x);
	cout << "Nhap hon so 2:";
	Nhap(y);
	cout << "Honn so 1:";
	Xuat(x);
	cout << "Hon so 2:";
	Xuat(y);
}

void QuiDongTu(HONSO& x, HONSO& y)
{
	int tc = x.Tu * y.Tu;
	x.Mau = x.Mau * y.Tu;
	y.Mau = y.Mau * x.Tu;
	x.Tu = tc;
	y.Tu = tc;
}