#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct sophuc
{
	float Thuc;
	float Ao;
};
typedef struct sophuc SOPHUC;

void Nhap(SOPHUC&);
void Xuat(SOPHUC);
SOPHUC Tich(SOPHUC, SOPHUC);
SOPHUC LuyThua(SOPHUC, int);

int main()
{
	SOPHUC A;
	cout << "Nhap so phuc: ";
	Nhap(A);
	cout << "So phuc: ";
	Xuat(A);

	int n;
	cout << "\nNhap bac luy thua: ";
	cin >> n;
	SOPHUC B = LuyThua(A, n);
	cout << "\nLuy thua bac " << n << " cua ";
	Xuat(A);
	cout << " la ";
	Xuat(B);

	return 0;
}

void Nhap(SOPHUC& x)
{
	cout << "\nNhap thuc: ";
	cin >> x.Thuc;
	cout << "Nhap ao: ";
	cin >> x.Ao;
}

void Xuat(SOPHUC x)
{
	cout << x.Thuc << " + " << x.Ao << "i";
}

SOPHUC Tich(SOPHUC x, SOPHUC y)
{
	SOPHUC temp;
	temp.Thuc = x.Thuc * y.Thuc - x.Ao * y.Ao;
	temp.Ao = x.Thuc * y.Ao + x.Ao * y.Thuc;
	return temp;
}

SOPHUC LuyThua(SOPHUC x, int n)
{
	SOPHUC temp = { 1,0 };
	for (int i = 0; i <= n; i++)
		temp = Tich(temp, x);
	return temp;
}