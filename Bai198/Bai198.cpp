#include<iostream>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

struct DuongTron
{
	DIEM i;
	float r;
};
typedef struct DuongTron DUONGTRON;

void Nhap(DUONGTRON[], int& n);
void Nhap(DUONGTRON&);
void Nhap(DIEM&);
float KhoangCachGoc(DUONGTRON);
float KhoangCachGoc(DIEM);
DUONGTRON GanGocNhat(DUONGTRON[], int);
void Xuat(DuongTron);
void Xuat(DIEM);

int main()
{
	DUONGTRON a[100];
	int n;
	Nhap(a, n);
	DUONGTRON x = GanGocNhat(a, n);
	Xuat(x);
}

void Nhap(DUONGTRON a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout<<"Nhap duong trong a[" << i << "] :" << endl;
		Nhap(a[i]);
	}
}

void Nhap(DUONGTRON& c)
{
	cout << "Nhap tam duong tron: " << endl;
	Nhap(c.i);
	cout << "Nhap ban kinh duong tron: " << endl << "r: ";
	cin >> c.r;
}

void Nhap(DIEM& x)
{
	cout << "x: ";
	cin >> x.x;
	cout << "y: ";
	cin >> x.y;
}

float KhoangCachGoc(DUONGTRON c)
{
	float kc = KhoangCachGoc(c.i);
	return abs(kc - c.r);
}

float KhoangCachGoc(DIEM x)
{
	float kc = sqrt(x.x * x.x + x.y * x.y);
	return kc;
}

DUONGTRON GanGocNhat(DUONGTRON a[], int n)
{
	DUONGTRON lc = a[0];
	for (int i = 1; i < n; i++)
	{
		if (KhoangCachGoc(a[i]) < KhoangCachGoc(lc))
			lc = a[i];
	}
	return lc;
}

void Xuat(DUONGTRON c)
{
	cout << "Tam: " << endl;
	Xuat(c.i);
	cout << "Ban kinh: " << endl << "r: " << c.r;
}

void Xuat(DIEM x)
{
	cout << "x: " << x.x << endl;
	cout << "y: " << x.y << endl;
}
