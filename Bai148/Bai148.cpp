#include <iostream>
using namespace std;

struct duongthang
{
	float a, b, c;
};
typedef struct duongthang DUONGTHANG;

void Nhap(DUONGTHANG&);
void Xuat(DUONGTHANG);

int main()
{
	DUONGTHANG d;
	Nhap(d);
	cout << "Duong thang d: " << endl;
	Xuat(d);
	return 0;
}

void Nhap(DUONGTHANG& d)
{
	cout << "Nhap a: ";
	cin >> d.a;
	cout << "Nhap b: ";
	cin >> d.b;
	cout << "Nhap c: ";
	cin >> d.c;
}
void Xuat(DUONGTHANG d)
{
	cout << "a: " << d.a << endl;
	cout << "b: " << d.b << endl;
	cout << "c: " << d.c << endl;
}