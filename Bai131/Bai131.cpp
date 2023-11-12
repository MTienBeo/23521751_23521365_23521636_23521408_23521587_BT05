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
	cout << "Nhap diem M: ";
	Nhap(M);
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

float DienTich(HINHCAU c)
{
	return float(4 * 3.14 * c.R * c.R);
}