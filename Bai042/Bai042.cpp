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
DIEMKHONGGIAN DoiXungOyz(DIEMKHONGGIAN);

int main()
{
	DIEMKHONGGIAN P;
	cout << "nhap toa do diem P: " << endl;
	Nhap(P);
	cout << "Diem doi xung la: " << endl;
	Xuat(DoiXungOyz(P));
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

DIEMKHONGGIAN DoiXungOyz(DIEMKHONGGIAN P)
{
	DIEMKHONGGIAN temp;
	temp.x = -P.x;
	temp.y = P.y;
	temp.z = P.z;
	return temp;
}