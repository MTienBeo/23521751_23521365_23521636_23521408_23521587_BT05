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
DIEMKHONGGIAN DoiXungGoc(DIEMKHONGGIAN);

int main()
{
	DIEMKHONGGIAN A, B;
	cout << "Nhap toa do diem A: ";
	Nhap(A);
	cout << "\nToa do diem A: ";
	Xuat(A);
	cout << "\nToa do diem doi xung qua goc toa do la: ";
	B = DoiXungGoc(A);
	Xuat(B);
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

void Xuat(DIEMKHONGGIAN P)
{
	cout << setw(6);
	cout << setprecision(3);
	cout << "\nx = " << P.x;
	cout << "\ny = " << P.y;
	cout << "\ny = " << P.z;
}

DIEMKHONGGIAN DoiXungGoc(DIEMKHONGGIAN P)
{
	DIEMKHONGGIAN temp;
	temp.x = -P.x;
	temp.y = -P.y;
	temp.z = -P.z;
	return temp;
}