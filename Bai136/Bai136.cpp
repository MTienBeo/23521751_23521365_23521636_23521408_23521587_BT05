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

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

struct hinhcau
{
	DIEMKHONGGIAN I;
	float R;
};
typedef struct hinhcau HINHCAU;

struct tamgiac
{
	DIEM A;
	DIEM B;
	DIEM C;
};
typedef struct tamgiac TAMGIAC;
void Nhap(DIEMKHONGGIAN&);
void Xuat(DIEMKHONGGIAN);

void Nhap(HINHCAU&);
void Xuat(HINHCAU);

void Nhap(TAMGIAC&);
void Xuat(TAMGIAC);

int main()
{
	TAMGIAC tg;
	Nhap(tg);
	Xuat(tg);

	DIEMKHONGGIAN M;
	HINHCAU hc;

	cout << "Nhap hinh cau: ";
	Nhap(hc);
	cout << "Nhap diem M: ";
	Nhap(M);
}

void Nhap(DIEMKHONGGIAN& P)
{
	cout << "\nNhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
	cout << "Nhap y: ";
	cin >> P.z;
}

void Nhap(TAMGIAC& t)
{
	cout << "Nhap dinh A:\n";
	Nhap(t.A);
	cout << "Nhap dinh B:\n";
	Nhap(t.B);
	cout << "Nhap dinh C:\n";
	Nhap(t.C);
}