#include <iostream>
#include <cmath>
using namespace std;

struct dathuc
{
	float a[500];
	int n;
};
typedef struct dathuc DATHUC;

void Nhap(DATHUC&);
void Xuat(DATHUC);

DATHUC operator*(DATHUC, DATHUC);

int main()
{
	DATHUC f1;
	cout << "Nhap da thuc 1: ";
	Nhap(f1);
	DATHUC f2;
	cout << "\nNhap da thuc 2: ";
	Nhap(f2);
	cout << "\nDa thuc 1: ";
	Xuat(f1);
	cout << "\nDa thuc 2: ";
	Xuat(f2);

	DATHUC f3 = f1 * f2;
	cout << "\nTich 2 da thuc: ";
	Xuat(f3);
	return 0;
}

void Nhap(DATHUC& f)
{
	cout << "\nNhap bac da thuc: ";
	cin >> f.n;
	for (int i = f.n; i >= 0; i--)
	{
		cout << "Nhap he so bac " << i << ": ";
		cin >> f.a[i];
	}
}

void Xuat(DATHUC f)
{
	for (int i = f.n; i >= 2; i--)
		cout << f.a[i] << "x^" << i << " + ";
	cout << f.a[1] << "x + " << f.a[0];
}

DATHUC operator*(DATHUC f, DATHUC g)
{
	DATHUC temp;
	temp.n = f.n + g.n;
	for (int k = temp.n; k >= 0; k--)
		temp.a[k] = 0;
	for (int k = temp.n; k >= 0; k--)
		for (int i = f.n; i >= 0; i--)
			for (int j=g.n;j>=0;j--)
				if (k == i + j)
					temp.a[k] += f.a[i] * g.a[j];
	return temp;
}