#include <iostream>
#include <iomanip>
using namespace std;

struct DIEM
{
	float x;
	float y;
};

struct DuongThang
{
	float a;
	float b;
	float c;
};
typedef struct DuongThang DUONGTHANG;

void Nhap(DUONGTHANG&);
void Xuat(DUONGTHANG);
void Nhap(DUONGTHANG[], int&);
void Xuat(DUONGTHANG[], int);

int main()
{
	DUONGTHANG a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);

}

void Nhap(DUONGTHANG& l)
{
	cout << "nhap a: ";
	cin >> l.a;
	cout << "nhap b: ";
	cin >> l.b;
	cout << "nhap c: ";
	cin >> l.c;

}

void Xuat(DUONGTHANG l)
{
	cout << setw(6);
	cout << setprecision(3);
	cout << "\na: " << l.a;
	cout << "\nb: " << l.b;
	cout << "\nc: " << l.c;
}

void Nhap(DUONGTHANG a[], int& n)
{
	cout << "nhap so phan tu: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		Nhap(a[i]);
	}
}

void Xuat(DUONGTHANG a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		Xuat(a[i]);
}