#include <iostream>
#include <iomanip>
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

void Nhap(DIEM&);
void Xuat(DIEM);

void Nhap(DUONGTRON&);
void Xuat(DUONGTRON);

float KhoangCach(DIEM, DIEM);
int TuongDoi(DUONGTRON, DIEM);

int main()
{
	DUONGTRON dt;
	cout << "\nNhap duong tron: ";
	Nhap(dt);
	DIEM P;
	cout << "\nNhap diem: ";
	Nhap(P);

	cout << "\nDuong tron: ";
	Xuat(dt);
	cout << "\nDiem: ";
	Xuat(P);

	cout << "\nVi tri tuong doi giua diem va duong tron : " << TuongDoi(dt, P);
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

void Nhap(DUONGTRON& c)
{
	cout << "Nhap tam: ";
	Nhap(c.I);
	cout << "Nhap ban kinh: ";
	cin >> c.R;
}

void Xuat(DUONGTRON c)
{
	cout << "\nTam: ";
	Xuat(c.I);
	cout << "\nBan kinh: " << c.R;
}

float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt((P.x - Q.x) * (P.x - Q.x) + (P.y - Q.y) * (P.y - Q.y));
}

int TuongDoi(DUONGTRON c, DIEM P)
{
	float kc = KhoangCach(c.I, P);
	if (kc > c.R)
		return 2;
	if (kc < c.R)
		return 0;
	return 1;
}