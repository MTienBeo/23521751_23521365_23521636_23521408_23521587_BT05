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

DATHUC operator-(DATHUC&, DATHUC&);

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

	DATHUC ff3 = ff1 - ff2;
	cout << "Ket qua la: ";
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

DATHUC operator-(DATHUC& daThuc1, DATHUC& daThuc2) {
	DATHUC hieu;
	hieu.n = max(daThuc1.n, daThuc2.n);

	for (int i = 0; i <= hieu.n; ++i)
	{
		float heSo1;
		if (i <= daThuc1.n)
			heSo1 = daThuc1.a[i];
		else
			heSo1 = 0.0;

		float heSo2;
		if (i <= daThuc2.n)
			heSo2 = daThuc2.a[i];
		else
			heSo2 = 0.0;

		hieu.a[i] = heSo1 - heSo2;
	}

	while (hieu.n >= 0 && hieu.a[hieu.n] == 0.0)
		hieu.n--;

	return hieu;
}
