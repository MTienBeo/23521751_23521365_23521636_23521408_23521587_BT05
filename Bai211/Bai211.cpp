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

int main()
{
	DUONGTHANG dt;
	Nhap(dt);
	Xuat(dt);
}

void Nhap(DUONGTHANG a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap duong thang A[" << i << "]:\n";
		Nhap(a[i]);
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

int ktQuaDiem(DUONGTHANG a[], int n, DIEM P)
{
	int flag = 0;
	for (int i = 0; i < n; i++)
		if (ktThuoc(a[i], P))
			flag = 1;
	return flag;
}