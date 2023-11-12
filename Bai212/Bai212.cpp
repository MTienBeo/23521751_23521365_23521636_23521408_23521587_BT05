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
float KhoangCach(DUONGTHANG, DIEM);
DUONGTHANG GanDiemNhat(DUONGTHANG a[], int n, DIEM P);

int main()
{
	DUONGTHANG a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	DIEM P;
	cout << "Nhap toa do diem: ";
	cout << "Nhap x: " << endl;
	cin >> P.x;
	cout << "Nhap y: " << endl;
	cin >> P.y;
	cout << "Duong thang gan diem nhat la: " << endl;
	Xuat(GanDiemNhat(a, n, P));

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

float KhoangCach(DUONGTHANG d, DIEM P)
{
	float tu = abs(d.a * P.x + d.b * P.y + d.c);
	float mau = sqrt(d.a * d.a + d.b * d.b);
	return tu / mau;
}

DUONGTHANG GanDiemNhat(DUONGTHANG a[], int n, DIEM P)
{
	DUONGTHANG lc = a[0];
	for (int i = 0; i < n; i++)
		if (KhoangCach(a[i], P) < KhoangCach(lc, P))
			lc = a[i];
	return lc;
}