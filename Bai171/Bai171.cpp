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

void Nhap(DIEM&);
void Xuat(DIEM);

void Nhap(DIEM[], int&);
void Xuat(DIEM[], int);

int main()
{
	DIEM A[1000];
	int n;
	cout << "Nhap mang toa do diem: ";
	Nhap(A, n);
	cout << endl;

	cout << "Mang toa do diem la: ";
	Xuat(A, n);

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

void Nhap(DIEM a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		Nhap(a[i]);
	}
}

void Xuat(DIEM a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
	{
		Xuat(a[i]);
		cout << endl;
	}
}