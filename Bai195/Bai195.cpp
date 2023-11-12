#include <iostream>
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
void HoanVi(SOPHUC&, SOPHUC&);
void SapTang(SOPHUC[], int);

int main()
{
	SOPHUC a[500];
	int n;
	Nhap(a, n);
	cout << "\nMang cac so phuc: ";
	Xuat(a, n);

	SapTang(a, n);
	cout << "\nMang cac so phuc tang dan: ";
	Xuat(a, n);

	return 0;
}

void Nhap(SOPHUC& x)
{
	cout << "\nNhap phan thuc: ";
	cin >> x.Thuc;
	cout << "Nhap phan ao: ";
	cin >> x.Ao;
}

void Xuat(SOPHUC x)
{
	cout << x.Thuc << " + " << x.Ao << "i";
}

void Nhap(SOPHUC a[], int& n)
{
	cout << "\nNhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		Nhap(a[i]);
	}
}

void Xuat(SOPHUC a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		Xuat(a[i]);
		cout << ", ";
	}
}

void HoanVi(SOPHUC& a, SOPHUC& b)
{
	SOPHUC temp;
	temp.Thuc = a.Thuc;
	temp.Ao = a.Ao;
	a.Ao = b.Ao;
	a.Thuc = b.Thuc;
	b.Thuc = temp.Thuc;
	b.Ao = temp.Ao;
}

void SapTang(SOPHUC a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i].Thuc > a[j].Thuc)
				HoanVi(a[i], a[j]);
}