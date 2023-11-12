#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct diemkhonggian
{
	float x;
	float y;
	float z;
};
typedef struct diemkhonggian DIEMKHONGGIAN;

struct duongthang
{
	float a;
	float b;
	float c;
};
typedef struct duongthang DUONGTHANG;

void Nhap(DIEMKHONGGIAN&);
void Xuat(DIEMKHONGGIAN);

int main()
{
	DIEMKHONGGIAN A, B;
	cout << "Nhap toa do diem 1: ";
	Nhap(A);
	cout << "Nhap toa do diem 2: ";
	Nhap(B);
	cout << "\nToa do diem 1: ";
	Xuat(A);
	cout << "\nToa do diem 2: ";
	Xuat(B);
}

void Nhap(DIEMKHONGGIAN& P)
{
	cout << "\nNhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
	cout << "Nhap y: ";
	cin >> P.z;
}

void Xuat(DIEMKHONGGIAN P)
{
	cout << setw(6);
	cout << setprecision(3);
	cout << "\nx = " << P.x;
	cout << "\ny = " << P.y;
	cout << "\nz = " << P.z;
}

int ktTrung(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = d1.a * d2.b - d2.a * d1.b;
	float Dx = -d1.c * d2.b + d2.c * d1.b;
	if (D == 0 && Dx == 0)
		return 1;
	return 0;
}