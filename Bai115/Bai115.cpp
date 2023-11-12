#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct donthuc
{
	float a;
	int n;
};
typedef struct donthuc DONTHUC;

void Nhap(DONTHUC&);
void Xuat(DONTHUC);
DONTHUC DaoHam(DONTHUC);
DONTHUC DaoHam(DONTHUC, int);

int main()
{
	DONTHUC f;
	cout << "Nhap don thuc: ";
	Nhap(f);

	cout << "\nDon thuc: ";
	Xuat(f);

	int k;
	cout << "\nNhap bac dao ham: ";
	cin >> k;

	cout << "\nDao ham cap " << k << " cua ";
	Xuat(f);
	cout << " la ";
	Xuat(DaoHam(f, k));

	return 0;
}

void Nhap(DONTHUC& f)
{
	cout << "\nNhap he so: ";
	cin >> f.a;
	cout << "Nhap so mu: ";
	cin >> f.n;
}

void Xuat(DONTHUC f)
{
	cout << f.a << "x^" << f.n;
}

DONTHUC DaoHam(DONTHUC f)
{
	DONTHUC temp;
	temp.a = f.a * f.n;
	temp.n = f.n - 1;
	return temp;
}

DONTHUC DaoHam(DONTHUC f, int k)
{
	DONTHUC temp = f;
	for (int i = 1; i <= k; i++)
		temp = DaoHam(temp);
	return temp;
}