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

void Nhap(DUONGTRON[], int&);
void Xuat(DUONGTRON[], int);
float KhoangCach(DIEM, DIEM);
bool ktThuoc(DUONGTRON, DIEM);
bool ktThuocTatCa(DUONGTRON[], int, DIEM);
DIEM TimDiem(DUONGTRON[], int);

int main()
{
	DUONGTRON a[100];
	int n;
	Nhap(a, n);
	cout << "\nMang cac duong tron: ";
	Xuat(a, n);

	cout << "\nDiem thuoc tat ca duong tron: ";
	Xuat(TimDiem(a, n));

	return 0;
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
	cout << "(" << P.x << ";" << P.y << ")";
}

void Nhap(DUONGTRON& c)
{
	cout << "\nNhap tam: ";
	Nhap(c.I);
	cout << "Nhap ban kinh: ";
	cin >> c.R;
}

void Xuat(DUONGTRON c)
{
	cout << "\nTam: ";
	Xuat(c.I);
	cout << "\nBan kinh: " << c.R;
}

void Nhap(DUONGTRON a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		Nhap(a[i]);
	}
}

void Xuat(DUONGTRON a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		Xuat(a[i]);
}

float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt((P.x - Q.x) * (P.x - Q.x) + (P.y - Q.y) * (Q.y - P.y));
}

bool ktThuoc(DUONGTRON c, DIEM P)
{
	float kc = KhoangCach(c.I, P);
	if (kc < c.R)
		return 1;
	return 0;
}

bool ktThuocTatCa(DUONGTRON a[], int n, DIEM P)
{
	for (int i = 0; i < n; i++)
		if (!(ktThuoc(a[i], P)))
			return 0;
	return 1;
}

int TuongDoi(DUONGTRON c1, DUONGTRON c2)
{
	float kc = KhoangCach(c1.I, c2.I);
	if (kc == 0 && c1.R == c2.R)
		return 1;
	if (kc > (c1.R + c2.R))
		return 0;
	if (kc == (c1.R + c2.R))
		return 0;
	if (kc < (c1.R + c2.R) && kc > abs(c1.R -c2.R)) 
		return 1;
	if (kc == abs(c1.R - c2.R))
		return 1;
	return 1;
}

DIEM TimDiem(DUONGTRON a[], int n)
{
	DIEM P;
	P.x = 0;
	P.y = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (!TuongDoi(a[i], a[j]))
			{
				P.x = NULL;
				P.y = NULL;
				return P;
			}
	while (!ktThuocTatCa(a, n, P))
	{
		for (float x = a[0].I.x - a[0].R; x <= a[0].I.x + a[0].R; x += 0.1)
			for (float y = a[0].I.y - a[0].R; y <= a[0].I.y + a[0].R; y += 0.1)
			{
				P.x = x;
				P.y = y;
			}
	}

	return P;
}