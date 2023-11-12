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

DATHUC DaoHam(DATHUC);

int main()
{
	DATHUC f;
	cout << "Nhap da thuc: ";
	Nhap(f);
	cout << "\nDa thuc: ";
	Xuat(f);

	cout << "\nDao ham cap 1 cua da thuc: ";
	Xuat(DaoHam(f));
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

DATHUC DaoHam(DATHUC f)
{
	DATHUC temp;
	temp.n = f.n - 1;
	for (int i = temp.n; i >= 0; i--)
	{
		temp.a[i] = f.a[i + 1] * (i+1);
	}
	return temp;
}