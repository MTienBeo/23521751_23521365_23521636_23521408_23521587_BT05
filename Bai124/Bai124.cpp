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

void Nhap(DIEM&);
void Xuat(DIEM);

void Nhap(DUONGTRON&);
void Xuat(DUONGTRON);

float KhoangCach(DIEM, DIEM);
int ktThuoc(DUONGTRON, DIEM);

int main()
{
	DIEM M;
	cout << "Nhap diem M: ";
	Nhap(M);
	cout << endl;

	cout << "Diem M la: ";
	Xuat(M);
	cout << "\n\n";

	DUONGTRON dt;
	Nhap(dt);
	Xuat(dt);
	cout << endl;

	if (ktThuoc(dt, M) == 1)
		cout << "Diem M nam trong duong tron";
	else
		cout << "Diem M khong nam trong duong tron";

	return 1;
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
	return sqrt((P.x - Q.x) * (P.x - Q.x) +
		(P.y - Q.y) * (P.y - Q.y));
}

int ktThuoc(DUONGTRON c, DIEM P)
{
	float kc = KhoangCach(c.I, P);
	if (kc <= c.R)
		return 1;
	return 0;
}