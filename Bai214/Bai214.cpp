#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct ngay
{
	int ng;
	int th;
	int nm;
};
typedef struct ngay NGAY;

void Nhap(NGAY&);
void Xuat(NGAY);

void Nhap(NGAY[], int&);
void Xuat(NGAY[], int);

int main()
{
	NGAY A[1000];
	int n;
	cout << "Nhap mang ngay: ";
	Nhap(A, n);
	cout << endl;

	cout << "Mang ngay la: \n";
	Xuat(A, n);
	
	return 1;
}

void Nhap(NGAY& x)
{
	cout << "\nNhap ngay: ";
	cin >> x.ng;
	cout << "Nhap thang: ";
	cin >> x.th;
	cout << "Nhap nam: ";
	cin >> x.nm;
	cout << endl;
}

void Xuat(NGAY x)
{
	cout << "\nNgay: " << x.ng;
	cout << "\nThang: " << x.th;
	cout << "\nNam: " << x.nm << endl;
}

void Nhap(NGAY a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap ngay A[" << i << "]:";
		Nhap(a[i]);
	}
}

void Xuat(NGAY a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Ngay a[" << i << "]:";
		Xuat(a[i]);
		cout << endl;
	}
}