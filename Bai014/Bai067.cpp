#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct SoPhuc
{
	float Thuc;
	float Ao;
};
typedef struct SoPhuc SOPHUC;

void Nhap(SOPHUC&);
void Xuat(SOPHUC);
SOPHUC Hieu(SOPHUC, SOPHUC);

int main()
{
	SOPHUC x;
	SOPHUC y;
	cout << "nhap so phuc thu nhat: ";
	Nhap(x);
	cout << "nhap so phuc thu hai: ";
	Nhap(y);
	cout << "so phuc thu nhat :" << endl;
	Xuat(x);
	cout << "so phuc thu hai: " << endl;
	Xuat(y);
	cout << "Hieu hai so phuc la: ";
	Xuat(Hieu(x, y));

}

void Nhap(SOPHUC& x)
{
	cout << "Nhap phan thuc: ";
	cin >> x.Thuc;
	cout << "Nhap phan ao: ";
	cin >> x.Ao;
}

void Xuat(SOPHUC x)
{
	cout << "\nPhan thuc: " << x.Thuc;
	cout << "\nPhan ao: " << x.Ao << endl;
}

SOPHUC Hieu(SOPHUC x, SOPHUC y)
{
	SOPHUC temp;
	temp.Thuc = x.Thuc - y.Thuc;
	temp.Ao = x.Ao - y.Ao;
	return temp;
}

