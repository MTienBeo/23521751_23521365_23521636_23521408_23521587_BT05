#include <iostream>
using namespace std;

struct ngay
{
	int Ngay;
	int Thang;
	int Nam;
};
typedef struct ngay NGAY;

void Nhap(NGAY&);
void Xuat(NGAY);
void Nhap(NGAY[], int&);
void Xuat(NGAY[], int);

int main()
{
	NGAY a[100];
	int n;

	Nhap(a, n);
	cout << "\nMang cac ngay: ";
	Xuat(a, n);

	return 0;
}

void Nhap(NGAY& x)
{
	cout << "\nNhap ngay:";
	cin >> x.Ngay;
	cout << "Nhap thang:";
	cin >> x.Thang;
	cout << "Nhap Nam:";
	cin >> x.Nam;
}

void Xuat(NGAY x)
{
	cout << x.Ngay << "/" << x.Thang << "/" << x.Nam;
}

void Nhap(NGAY a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		Nhap(a[i]);
	}
}

void Xuat(NGAY a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
	{
		cout << endl;
		Xuat(a[i]);
	}
}