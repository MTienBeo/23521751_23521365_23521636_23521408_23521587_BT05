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
int KiemTra(PHANSO);

int main()
{
	PHANSO x;
	Nhap(x);
	if (KiemTra(x) == 1)
		cout << "co nghia";
	else
		cout << "phan so khong ton tai";

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

int KiemTra(PHANSO x)
{
	if (x.Mau != 0)
		return 1;
	return 0;
}

