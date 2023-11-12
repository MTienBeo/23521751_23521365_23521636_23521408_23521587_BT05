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
float KhoangCach(DIEMKHONGGIAN, DIEMKHONGGIAN);

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
	
	float kq = KhoangCach(A, B);
	cout << setw(6);
	cout << setprecision(3);
	cout << "\nKhoang cach: " << kq;
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

void Xuat(DIEMKHONGGIAN P)
{
	cout << setw(6);
	cout << setprecision(3);
	cout << "\nx = " << P.x;
	cout << "\ny = " << P.y;
	cout << "\ny = " << P.z;
}

float KhoangCach(DIEMKHONGGIAN P,DIEMKHONGGIAN Q)
{
	return sqrt((P.x - Q.x) * (P.x - Q.x) +
	            (P.y - Q.y) * (P.y - Q.y) + 
		        (P.z - Q.z) * (P.z - Q.z));
}
