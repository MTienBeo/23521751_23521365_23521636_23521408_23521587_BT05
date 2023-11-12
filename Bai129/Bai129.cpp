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

struct hinhcau
{
	DIEMKHONGGIAN I;
	float R;
};
typedef struct hinhcau HINHCAU;

void Nhap(DIEMKHONGGIAN&);
void Xuat(DIEMKHONGGIAN);

void Nhap(HINHCAU&);
void Xuat(HINHCAU);

int main()
{
	DIEMKHONGGIAN M;
	HINHCAU hc;
	cout << "Nhap hinh cau: ";
	Nhap(hc);
	cout << endl;
	cout << "Hinh cau la: ";
	Xuat(hc);
	return 1;
}

void Nhap(DIEMKHONGGIAN & P)
{
	cout << "\nNhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
	cout << "Nhap z: ";
	cin >> P.z;
}

void Nhap(HINHCAU & C)
{
	cout << "\nNhap tam I:";
	Nhap(C.I);
	cout << "Nhap R: ";
	cin >> C.R;
}

void Xuat(HINHCAU c)
{
	cout << "\nTam:";
	Xuat(c.I);
	cout << "\nBan kinh: " << c.R;
}

void Xuat(DIEMKHONGGIAN P)
{
	cout << setw(6);
	cout << setprecision(3);
	cout << "\nx = " << P.x;
	cout << "\ny = " << P.y;
	cout << "\nz = " << P.z;
}