#include <iostream>
#include <iomanip>
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

float KhoangCachGoc(DIEM);
int ktQuaGoc(DUONGTRON);
int ktTonTai(DUONGTRON[], int);

int main()
{
	DUONGTRON dt[1000];
	int n;
	cout << "Nhap mang duong tron Oxy: ";
	Nhap(dt, n);
	cout << endl;

	cout << "Mang duong tron Oxy la: ";
	Xuat(dt, n);
	cout << endl;

	if (ktTonTai(dt, n) == 1)
		cout << "Co duong tron di qua goc toa do";
	else
		cout << "Khong co duong tron di qua goc toa do ";
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

void Nhap(DUONGTRON& c)
{
	cout << "Nhap tam: ";
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

void Nhap(DUONGTRON a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: \n";
		Nhap(a[i]); 
	}
}

void Xuat(DUONGTRON a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		Xuat(a[i]);
}

float KhoangCachGoc(DIEM P)
{
	return sqrt(P.x * P.x + P.y * P.y);
}

int ktQuaGoc(DUONGTRON c)
{
	float kc = KhoangCachGoc(c.I);
	if (kc == c.R)
		return 1;
	return 0;
}

int ktTonTai(DUONGTRON a[], int n)
{
	int flag = 0;
	for (int i = 0; i < n; i++)
		if (ktQuaGoc(a[i]) == 1)
			flag = 1;
	return flag;
}