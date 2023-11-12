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


typedef struct DuongTron DUONGTRON;

void Nhap(DIEM a[], int& n);
void Xuat(DIEM a[], int);
void Nhap(DIEM&);
void Xuat(DIEM);
float KhoangCachGoc(DIEM);
DIEM GanGocNhat(DIEM[], int);

int main()
{
	DIEM a[100];
	int n;
	Nhap(a,n);
	Xuat(a,n);
	cout << "Diem gan goc nhat la: " << endl;
	Xuat(GanGocNhat(a, n));

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
	cout << "x= " << I.x << endl;
	cout << "y= " << I.y << endl;
}

void Nhap(DIEM a[], int& n)
{
	cout << "nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		Nhap(a[i]);
	}
}

void Xuat(DIEM a[], int n)
{
	for (int i = 0; i < n; i++)
		Xuat(a[i]);
}

float KhoangCachGoc(DIEM P)
{
	return sqrt(P.x * P.x - P.y * P.y);
}

DIEM GanGocNhat(DIEM a[], int n)
{
	DIEM lc = a[0];
	for (int i = 0; i < n; i++)
		if (KhoangCachGoc(a[i]) > KhoangCachGoc(lc))
			lc = a[i];
	return lc;
}