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

PHANSO operator*(PHANSO x, PHANSO y)
{
	PHANSO temp;
	temp.Tu = x.Tu * y.Tu;
	temp.Mau = x.Mau * y.Mau;
	RutGon(temp);
	return temp;
}