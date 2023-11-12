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

void Nhap(DIEM&);
void Xuat(DIEM);
float KhoangCachY(DIEM, DIEM);

int main()
{
	DIEM A, B;
	cout << "Nhap toa do diem 1: ";
	Nhap(A);
	cout << "Nhap toa do diem 2: ";
	Nhap(B);
	cout << "\nToa do diem 1: ";
	Xuat(A);
	cout << "\nToa do diem 2: ";
	Xuat(B);
	cout << "\nKhoang cac giua 2 diem theo phuong Oy la: ";
	cout << KhoangCachY(A, B);
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

float KhoangCachY(DIEM P, DIEM Q)
{
	return abs(Q.y - P.y);
}