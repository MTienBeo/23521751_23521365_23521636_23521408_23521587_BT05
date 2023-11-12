#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

struct DuongTron
{
	DIEM I;
	float R;

};
typedef struct DuongTron DUONGTRON;

void Nhap(DUONGTRON&);
void Xuat(DUONGTRON);
void Nhap(DIEM&);
void Xuat(DIEM);
void Nhap(DUONGTRON[], int);
void Xuat(DUONGTRON [], int);

int main()
{
	DUONGTRON a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);

}

void Nhap(DIEM& I)
{
	cout << "nhap x: ";
	cin >> I.x;
	cout << "nhap y: ";
	cin >> I.y;
}
void Xuat(DIEM I)
{
	cout << "Tam la: " << endl;
	cout << "x= " << I.x << endl;
	cout << "y= " << I.y << endl;
}
void Nhap(DUONGTRON& c)
{
	cout << "Nhap tam: \n";
	Nhap(c.I);
	cout << "nhap ban kinh: ";
	cin >> c.R;
}
void Xuat(DUONGTRON c)
{
	Xuat(c.I);
	cout << "Ban kinh: " << c.R;
}
void Nhap(DUONGTRON a[], int n)
{

	cout << "nhap so phan tu: ";
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