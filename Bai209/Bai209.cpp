#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct duongthang
{
	float a;
	float b;
	float c;
};
typedef struct duongthang DUONGTHANG;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

void Nhap(DUONGTHANG&);
void Xuat(DUONGTHANG);

void Nhap(DUONGTHANG[], int&);
void Xuat(DUONGTHANG[], int);

int ktSongSong(DUONGTHANG, DUONGTHANG);
int ktSongSong(DUONGTHANG[], int);
int ktCapSongSong(DUONGTHANG[], int);

int main()
{
	DUONGTHANG d[1000];
	int n;
	cout << "Nhap mang duong thang d: ";
	Nhap(d, n);
	cout << endl;

	cout << "Mang duong thang d la: \n";
	Xuat(d, n);
	cout << endl;

	if (ktCapSongSong(d, n) == 1)
		cout << "Co cap duong thang cung song song";
	else
		cout << "Khong co cap duong thang cung song song";
	return 1;
}

void Nhap(DUONGTHANG& d)
{
	cout << "\nNhap a: ";
	cin >> d.a;
	cout << "Nhap b: ";
	cin >> d.b;
	cout << "Nhap c: ";
	cin >> d.c;
}

void Xuat(DUONGTHANG d)
{
	cout << "\na: " << d.a;
	cout << "\nb: " << d.b;
	cout << "\nc: " << d.c;
}

void Nhap(DUONGTHANG a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap duong thang A[" << i << "]:";
		Nhap(a[i]);
		cout << endl;
	}
}

void Xuat(DUONGTHANG a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Duong thang A[" << i << "]:";
		Xuat(a[i]);
		cout << endl;
	}
}

int ktSongSong(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = d1.a * d2.b - d2.a * d1.b;
	float Dx = -d1.c * d2.b + d2.c * d1.b;
	if (D == 0 && Dx != 0)
		return 1;
	return 0;
}

int ktSongSong(DUONGTHANG a[], int n)
{
	int flag = 1;
	for (int i = 0; i <= n - 1; i++)
		if (!ktSongSong(a[i], a[0]))
			flag = 0;;
	return flag;
}

int ktCapSongSong(DUONGTHANG a[], int n)
{
	int flag = 0;
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
		if (ktSongSong(a[i], a[j]))
			flag = 1;
	return flag;
}