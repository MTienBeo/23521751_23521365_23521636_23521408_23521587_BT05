#include <iostream>
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
int ktDuong(PHANSO);

int main()
{
	PHANSO A;
	cout << "Nhap phan so:";
	Nhap(A);
	cout << endl;
	cout << "Phan so:";
	Xuat(A);
	if (ktDuong(A) == 1)
		cout << "Phan so duong";
	else
		cout << "Phan so am";
	return 1;
}

void Nhap(PHANSO& x)
{
	cout << "\nNhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}

void Xuat(PHANSO x)
{
	cout << "\nTu = " << x.Tu;
	cout << "\nMau = " << x.Mau << endl;
}

int ktDuong(PHANSO x)
{
	if (x.Tu * x.Mau > 0)
		return 1;
	return 0;
}
