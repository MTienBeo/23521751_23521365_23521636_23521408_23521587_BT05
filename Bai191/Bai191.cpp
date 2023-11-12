#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct sophuc
{
	float Thuc;
	float Ao;
};
typedef struct sophuc SOPHUC;

void Nhap(SOPHUC&);
void Xuat(SOPHUC);

int main()
{
	SOPHUC x, y;
	cout << "Nhap so phuc 1:";
	Nhap(x);
	cout << "Nhap so phuc 2:";
	Nhap(y);
	cout << "So phuc 1:";
	Xuat(x);
	cout << "So phuc 2:";
	Xuat(y);
}

void Nhap(SOPHUC a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		Nhap(a[i]);
	}
}