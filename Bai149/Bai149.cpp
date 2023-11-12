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

void Nhap(DIEM&);
void Xuat(DIEM);

int ktThuoc(DUONGTHANG, DIEM);

int main()
{
	DUONGTHANG d;
	cout << "Nhap duong thang d: ";
	Nhap(d);
	cout << endl;
	cout << "Duong thang d la: ";
	Xuat(d);
	cout << endl;
	
	DIEM M;
	cout << "Nhap diem M: ";
	Nhap(M);
	cout << "Diem M la:";
	Xuat(M);
	cout << endl;

	if (ktThuoc(d, M) == 1)
		cout << "Diem M thuoc duong thang d";
	else
		cout << "Diem M khong thuoc duong thang d";
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
	cout << "\nc: " << d.c;
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
	cout << setw(6);
	cout << setprecision(3);
	cout << "\nx = " << P.x;
	cout << "\ny = " << P.y;
}

int ktThuoc(DUONGTHANG d, DIEM P)
{
	if ((d.a * P.x + d.b * P.y + d.c) == 0)
		return 1;
	return 0;
}