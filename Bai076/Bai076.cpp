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

HONSO Hieu(HONSO x, HONSO y)
{
	HONSO temp;
	temp.Nguyen = x.Nguyen - y.Nguyen;
	temp.Tu = x.Tu * y.Mau - y.Tu * x.Mau;
	temp.Mau = x.Mau * y.Mau;
	RutGon(temp);
	return temp;
}