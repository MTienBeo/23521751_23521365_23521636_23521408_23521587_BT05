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

struct duongtron
{
	DIEM I;
	float R;
};
typedef struct duongtron DUONGTRON;

void Nhap(DIEM&);
void Xuat(DIEM);

void Nhap(DUONGTRON&);
void Xuat(DUONGTRON);

float DienTich(DUONGTRON);
float ChuVi(DUONGTRON);

int main()
{
	DUONGTRON dt;
	Nhap(dt);
	Xuat(dt);
	float kq = DienTich(dt);
	cout << "Dien tich = " << kq;

	kq = ChuVi(dt);
	cout << "Dien tich = " << kq;
	return 1;
}

void Nhap(DUONGTRON& c)
{
	cout << "Nhap tam:\n";
	Nhap(c.I);
	cout << "Nhap ban kinh: ";
	cin >> c.R;
}

void Xuat(DUONGTRON c)
{
	cout << "\nTam:";
	Xuat(c.I);
	cout << "\nBan kinh: " << c.R;
}

int ktTiepXucOy(DUONGTRON c)
{
	if (abs(c.I.x) == c.R)
		return 1;
	return 0;
}

int KiemTra(DUONGTRON a[], int n)
{
	int flag = 0;
	for (int i = 0; i < n; i++)
		if (ktTiepXucOy(a[i]) == 1)
			flag = 1;
	return flag;
}