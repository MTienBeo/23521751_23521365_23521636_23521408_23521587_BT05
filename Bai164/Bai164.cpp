#include <iostream>
#include <iomanip>
using namespace std;

struct DaThuc
{
	int n;
	float a[100];
};
typedef struct DaThuc DATHUC;

void Nhap(DATHUC&);
void Xuat(DATHUC);

DATHUC ThuongLayDu(DATHUC, DATHUC);

int main()
{
	DATHUC ff1;
	cout << "Nhap da thuc 1: ";
	Nhap(ff1);
	cout << "Da thuc thu 1 la: ";
	Xuat(ff1);
	cout << endl;

	DATHUC ff2;
	cout << "Nhap da thuc 2: ";
	Nhap(ff2);
	cout << "Da thuc thu 2 la: ";
	Xuat(ff2);
	cout << endl;

	DATHUC ff3 = ThuongLayDu(ff1, ff2);
	cout << "Da thuc du la: ";
	Xuat(ff3);

	return 0;
}

void Nhap(DATHUC& f)
{
	cout << "Nhap n: ";
	cin >> f.n;
	for (int i = f.n; i >= 0; i--)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> f.a[i];
	}
}

void Xuat(DATHUC f)
{
	for (int i = f.n; i >= 1; i--)
	{
		cout << setw(8) << "(" << f.a[i] << ")";
		cout << "x^" << i << " + ";
	}
	cout << setw(8) << "(" << f.a[0] << ") ";
}

DATHUC ThuongLayDu(DATHUC daThuc1, DATHUC daThuc2)
{
	DATHUC du;
	du.n = 0;
	du.a[0] = 0.0;

	for (int i = daThuc1.n; i >= daThuc2.n; --i)
	{
		du.a[i - daThuc2.n] = daThuc1.a[i] / daThuc2.a[daThuc2.n];
		for (int j = 0; j <= daThuc2.n; ++j)
		{
			daThuc1.a[i - j] -= du.a[i - daThuc2.n] * daThuc2.a[j];
		}
	}

	du.n = daThuc1.n;
	return du;
}