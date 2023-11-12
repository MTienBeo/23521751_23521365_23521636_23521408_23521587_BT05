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
int ktThuoc3(DIEM P);

int main()
{
	DIEM A;
	cout << "Nhap toa do diem A: ";
	Nhap(A);
	cout << "\nToa do diem A: ";
	Xuat(A);
	if (ktThuoc3(A) == 1)
		cout << "\nThuoc phan tu thu III";
	else
		cout << "\nKhong thuoc phan tu thu III";
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

int ktThuoc3(DIEM P)
{
	if (P.x < 0 && P.y < 0)
		return 1;
	return 0;
}