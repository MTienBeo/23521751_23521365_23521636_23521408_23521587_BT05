#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

struct duongthang
{
	float a;
	float b;
	float c;
};
typedef struct duongthang DUONGTHANG;

void Nhap(DIEM&);
void Xuat(DIEM);

void Nhap(DUONGTHANG&);
void Xuat(DUONGTHANG);

float KhoangCach(DUONGTHANG, DIEM);

int main()
{
	DUONGTHANG d;
	cout << "Nhap duong thang: ";
	Nhap(d);

	DIEM P;
	cout << "\nNhap diem : ";
	Nhap(P);

	cout << "\nDuong thang: ";
	Xuat(d);
	cout << "\nDiem: ";
	Xuat(P);

	cout << "\nKhoang cach tu diem den duong thang: " << setprecision(2) << KhoangCach(d, P);

	return 0;
}

void Nhap(DIEM& P)
{
	cout << "\nNhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}

void Xuat(DIEM P)
{
	cout << "(" << P.x << ";" << P.y << ")";
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
	cout << d.a << "x + " << d.b << "y + " << d.c<<" = 0";
}

float KhoangCach(DUONGTHANG d, DIEM P)
{
	float tu = abs(d.a * P.x + d.b * P.y + d.c);
	float mau = sqrt(d.a * d.a + d.b * d.b);
	return tu / mau;
}