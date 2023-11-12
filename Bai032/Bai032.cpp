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

int main()
{
	DIEMKHONGGIAN P;
	cout << "nhap toa do diem P: ";
	Nhap(P);
}

void Nhap(DIEMKHONGGIAN & P)
{
	cout << "nhap x: ";
	cin >> P.x;
	cout << "nhap y: ";
	cin >> P.y;
	cout << "Nhap z: ";
	cin >> P.z;
}