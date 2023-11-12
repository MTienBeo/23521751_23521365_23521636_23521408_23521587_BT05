#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

struct SoPhuc
{
	float Thuc;
	float Ao;
};
typedef struct SoPhuc SOPHUC;

void Nhap(SOPHUC&);
void Xuat(SOPHUC);
void Nhap(SOPHUC[], int&);
void Xuat(SOPHUC[], int);

int main()
{
	int n;
	SOPHUC a[100];
	Nhap(a, n);
	Xuat(a, n);

}

void Nhap(SOPHUC& x)
{
	cout << "Nhap phan thuc: ";
	cin >> x.Thuc;
	cout << "Nhap phan ao: ";
	cin >> x.Ao;
}
void Xuat(SOPHUC x)
{
	cout << "Phan thuc la: " << x.Thuc << endl;
	cout << "Phan ao la: " << x.Ao << endl;
}

void Nhap(SOPHUC a[], int& n)
{
	cout << "nhap so phan tu: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		Nhap(a[i]);
	}
}
void Xuat(SOPHUC a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		Xuat(a[i]);
}


