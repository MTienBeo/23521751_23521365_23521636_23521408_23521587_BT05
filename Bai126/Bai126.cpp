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

struct duongtron
{
	DIEM I;
	float R;
};
typedef struct duongtron DUONGTRON;

struct duongthang
{
	float a;
	float b;
	float c;
};
typedef struct duongthang DUONGTHANG;

void Nhap(DIEM&);
void Xuat(DIEM);

void Nhap(DUONGTRON&);
void Xuat(DUONGTRON);

float DienTich(DUONGTRON);
float ChuVi(DUONGTRON);

int main()
{
	DUONGTRON dt;
	Nhap(dt);
	Xuat(dt);
	float kq = DienTich(dt);
	cout << "Dien tich = " << kq;

	kq = ChuVi(dt);
	cout << "Dien tich = " << kq;
	return 1;
}

void Nhap(DUONGTRON& c)
{
	cout << "Nhap tam:\n";
	Nhap(c.I);
	cout << "Nhap ban kinh: ";
	cin >> c.R;
}

void Xuat(DUONGTRON c)
{
	cout << "\nTam:";
	Xuat(c.I);
	cout << "\nBan kinh: " << c.R;
}

int TuongDoi(DUONGTRON c, DUONGTHANG d)
{
	float kc = KhoangCach(d, c.I);
	if (kc > c.R)
		return 0;
	if (kc < c.R)
		return 2;
	return 1;
}