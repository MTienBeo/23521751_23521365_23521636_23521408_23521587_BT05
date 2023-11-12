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

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

void Nhap(DUONGTHANG&);
void Xuat(DUONGTHANG);

DIEM GiaoDiem(DUONGTHANG, DUONGTHANG);
void Xuat(DIEM);

int main()
{
	DUONGTHANG d1, d2;
	cout << "Nhap duong thang d1: ";
	Nhap(d1);
	cout << "Nhap duong thang d2: ";
	Nhap(d2);
	cout << endl;
	cout << "Duong thang d1 la: ";
	Xuat(d1);
	cout << "Duong thang d2 la: ";
	Xuat(d2);
	cout << endl;

	cout << "Giao diem 2 duong thang la: ";
	DIEM M;
	M = GiaoDiem(d1, d2);
	Xuat(M);
	
	return 1;
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
	cout << "\na: " << d.a;
	cout << "\nb: " << d.b;
	cout << "\nc: " << d.c << endl;
}

void Xuat(DIEM P)
{
	cout << setw(6);
	cout << setprecision(3);
	cout << "\nx = " << P.x;
	cout << "\ny = " << P.y;
}

DIEM GiaoDiem(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = d1.a * d2.b - d2.a * d1.b;
	float Dx = -d1.c * d2.b + d2.c * d1.b;
	float Dy = -d1.a * d2.c + d2.a * d1.c;
	
	DIEM temp;
	temp.x = Dx / D;
	temp.y = Dy / D;
	return temp;
}