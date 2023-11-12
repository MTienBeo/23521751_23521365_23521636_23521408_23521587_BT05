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

void Nhap(SOPHUC[], int&);
void Xuat(SOPHUC[], int);

SOPHUC DauTien(SOPHUC[], int);

int main()
{
	SOPHUC A[1000];
	int n;
	cout << "Nhap mang so phuc :";
	Nhap(A, n);
	cout << endl;
	
	cout << "Mang so phuc:";
	Xuat(A, n);
	cout << endl;

	SOPHUC B;
	cout << "So phuc duong dau tien la: ";
	B = DauTien(A, n);
	Xuat(B);
	
	return 1;
}

void Nhap(SOPHUC& x)
{
	cout << "\nNhap thuc: ";
	cin >> x.Thuc;
	cout << "Nhap ao: ";
	cin >> x.Ao;
	cout << endl;
}

void Xuat(SOPHUC x)
{
	cout << setw(6);
	cout << setprecision(3);
	cout << "\nThuc = " << x.Thuc;
	cout << "\nAo = " << x.Ao << endl;
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

void Xuat(SOPHUC a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "So phuc a[" << i << "]: ";
		Xuat(a[i]);
	}
		
}

SOPHUC DauTien(SOPHUC a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		if (a[i].Thuc > 0 && a[i].Ao > 0)
			return a[i];
	SOPHUC lc = { 0,0 };
	return lc;
}