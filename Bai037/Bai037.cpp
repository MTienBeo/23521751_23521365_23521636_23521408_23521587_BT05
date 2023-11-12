#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct DiemKhongGian
{
	float x;
	float y;
	float z;
};
typedef struct DiemKhongGian DIEMKHONGGIAN;

void Nhap(DIEMKHONGGIAN&);
void Xuat(DIEMKHONGGIAN);
float KhoangCach(DIEMKHONGGIAN, DIEMKHONGGIAN);

int main()
{
	DIEMKHONGGIAN P;
	cout << "nhap toa do diem P: " << endl;
	Nhap(P);
	DIEMKHONGGIAN Q;
	cout << "nhap toa do diem Q: " << endl;
	Nhap(Q);
	cout << "Toa do P: " << endl;
	Xuat(P);
	cout << "Toa do Q: " << endl;
	Xuat(Q);
	cout << "Khoang cach la: " << KhoangCach(P, Q);
}

void Nhap(DIEMKHONGGIAN& P)
{
	cout << "nhap x: ";
	cin >> P.x;
	cout << "nhap y: ";
	cin >> P.y;
	cout << "Nhap z: ";
	cin >> P.z;
}
void Xuat(DIEMKHONGGIAN P)
{
	cout << "x: " << P.x << endl;
	cout << "y: " << P.y << endl;
	cout << "z: " << P.z << endl;
}
float KhoangCach(DIEMKHONGGIAN P, DIEMKHONGGIAN Q)
{
	return abs(Q.z - P.z);
}