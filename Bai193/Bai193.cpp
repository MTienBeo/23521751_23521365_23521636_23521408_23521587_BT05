#include <iostream>
using namespace std;

struct sophuc
{
	float Thuc;
	float Ao;
};
typedef sophuc SOPHUC;

void Nhap(SOPHUC[], int&);
void Nhap(SOPHUC&);
SOPHUC Tong(SOPHUC[], int);
SOPHUC Tong(SOPHUC, SOPHUC);
void Xuat(SOPHUC);

int main()
{
	SOPHUC a[100];
	int n;
	Nhap(a, n);
	cout << "Tong cac so phuc trong mang la: " << endl;
	SOPHUC x = Tong(a, n);
	Xuat(x);
}

void Nhap(SOPHUC a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap so phuc a[" << i << "] :" << endl;
		Nhap(a[i]);
	}
}

void Nhap(SOPHUC& x)
{
	cout << "Nhap thuc: ";
	cin >> x.Thuc;
	cout << "Nhap ao: ";
	cin >> x.Ao;
}

SOPHUC Tong(SOPHUC a[], int n)
{
	SOPHUC s = { 0,0 };
	for (int i = 0; i < n; i++)
	{
		s = Tong(s, a[i]);
	}
	return s;
}

SOPHUC Tong(SOPHUC x, SOPHUC y)
{
	SOPHUC temp;
	temp.Thuc = x.Thuc + y.Thuc;
	temp.Ao = x.Ao + y.Ao;
	return temp;
}

void Xuat(SOPHUC x)
{
	cout << "Thuc: " << x.Thuc << endl;
	cout << "Ao: " << x.Ao << endl;
}