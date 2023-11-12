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

int ViTriNhoNhat(PHANSO a[], int n)
{
	int lc = 0;
	for (int i = 0; i <= n - 1; i++)
		if (SoSanh(a[i], a[lc]) == -1)
			lc = i;
	return lc;
}