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

int main()
{
	DONTHUC f;
	cout << "Nhap don thuc: ";
	Nhap(f);

	cout << "\nDon thuc: ";
	Xuat(f);
	
	return 0;
}

void Nhap(DONTHUC & f)
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