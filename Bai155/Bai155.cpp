#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct duongthang
{
	float a;
	float b;
	float c;
};
typedef struct duongthang DUONGTHANG;

void Nhap(DUONGTHANG&);
void Xuat(DUONGTHANG);

int ktVuongGoc(DUONGTHANG, DUONGTHANG);

int main()
{
	DUONGTHANG d1;
	cout << "Nhap duong thang 1: ";
	Nhap(d1);
	DUONGTHANG d2;
	cout << "Nhap duong thang 2: ";
	Nhap(d2);

	cout << "\nDuong thang 1: ";
	Xuat(d1);
	cout << "\nDuong thang 2: ";
	Xuat(d2);

	if (ktVuongGoc(d1, d2))
		cout << "\nHai duong thang vuong goc";
	else 
		cout << "\nHai duong thang khong vuong goc";

	return 0;
}

void Nhap(DUONGTHANG& d)
{
	cout << "\nNhap a: ";
	cin >> d.a;
	cout << "Nhap b: ";
	cin >> d.b;
	cout << "Nhap c: ";
	cin >> d.c;
}

void Xuat(DUONGTHANG d)
{
	cout << d.a << "x + " << d.b << "y + " << d.c << " = 0";
}

int ktVuongGoc(DUONGTHANG d1, DUONGTHANG d2)
{
	if ((d1.a * d2.a + d1.b * d2.b) == 0)
		return 1;
	return 0;
}