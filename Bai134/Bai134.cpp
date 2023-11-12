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

float TuongDoi(HINHCAU, HINHCAU);

int main()
{
	DIEMKHONGGIAN M;
	HINHCAU hc1, hc2;
	cout << "Nhap hinh cau 1: ";
	Nhap(hc1);
	cout << "Nhap hinh cau 2: ";
	Nhap(hc2);
	cout << endl;

	cout << "Hinh cau 1 la: \n";
	Xuat(hc1);
	cout << "Hinh cau 2 la: ";
	cout << endl;
	Xuat(hc2);
	cout << endl;

	cout << "Vi tri tuong doi giua hai hinh cau: ";
	cout << TuongDoi(hc1, hc2);
	return 1;
}

void Nhap(DIEMKHONGGIAN& P)
{
	cout << "\nNhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
	cout << "Nhap z: ";
	cin >> P.z;
}

void Nhap(HINHCAU& C)
{
	cout << "\nNhap tam I:";
	Nhap(C.I);
	cout << "Nhap R: ";
	cin >> C.R;
}

void Xuat(HINHCAU c)
{
	cout << "Tam:";
	Xuat(c.I);
	cout << "\nBan kinh: " << c.R << endl;
}

void Xuat(DIEMKHONGGIAN P)
{
	cout << setw(6);
	cout << setprecision(3);
	cout << "\nx = " << P.x;
	cout << "\ny = " << P.y;
	cout << "\nz = " << P.z;
}

float KhoangCach(DIEMKHONGGIAN P,DIEMKHONGGIAN Q)
{
	return sqrt((Q.x - P.x) * (Q.x - P.x) +
			    (Q.y - P.y) * (Q.y - P.y) +
		        (Q.z - P.z) * (Q.z - P.z));
}

float TuongDoi(HINHCAU c1, HINHCAU c2)
{
	float kc = KhoangCach(c1.I, c2.I);
	if (kc == 0 && c1.R == c2.R)
		return 0;
	if (kc > (c1.R + c2.R))
		return 1;
	if (kc == (c1.R + c2.R))
		return 2;
	if (kc < (c1.R + c2.R) && kc>abs(c1.R - c2.R))
		return 3;
	if (kc == abs(c1.R - c2.R))
		return 4;
	return 5;
}