#include<iostream>
using namespace std;

struct DonThuc
{
	float a;
	int n;
};
typedef DonThuc DONTHUC;

void Nhap(DONTHUC&);
void Xuat(DONTHUC);
DONTHUC operator/(DONTHUC, DONTHUC);

int main()
{
	DONTHUC x, y;
	cout << "Nhap don thuc thu nhat: " << endl;
	Nhap(x);
	cout << "Nhap don thuc thu hai: " << endl;
	Nhap(y);
	DONTHUC z = x/y;
	cout << "Thuong cua hai don thuc la" << endl;
	Xuat(z);
}

void Nhap(DONTHUC& x)
{
	cout << "Nhap he so: ";
	cin >> x.a;
	cout << "Nhap so mu: ";
	cin >> x.n;
}

void Xuat(DONTHUC x)
{
	cout << x.a << "x^" << x.n;
}
DONTHUC operator / (DONTHUC x, DONTHUC y)
{
	DONTHUC temp;
	temp.a = x.a / y.a;
	temp.n = x.n - y.n;
	return temp;
}