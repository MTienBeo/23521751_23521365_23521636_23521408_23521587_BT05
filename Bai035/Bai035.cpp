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

void Nhap(DIEMKHONGGIAN&);
void Xuat(DIEMKHONGGIAN);
float KhoangCachX(DIEMKHONGGIAN, DIEMKHONGGIAN);

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
	
	float kq = KhoangCachX(A, B);
	cout << setw(6);
	cout << setprecision(3);
	cout << "\nKhoang cach x :" << kq;
	return 0;
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

void Xuat(DIEMKHONGGIAN P)
{
	cout << "(" << P.x << ";" << P.y << ";" << P.z << ")";
}


float KhoangCachX(DIEMKHONGGIAN P, DIEMKHONGGIAN Q)
{
	return abs(Q.x - P.x);
}