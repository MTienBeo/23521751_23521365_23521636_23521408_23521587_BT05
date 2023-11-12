#include <iostream>
using namespace std;

struct duongthang
{
	float a, b, c;
};
typedef struct duongthang DUONGTHANG;

void Nhap(DUONGTHANG&);
int ktCat(DUONGTHANG, DUONGTHANG);

int main()
{
	DUONGTHANG d1, d2;
	cout << "Nhap duong thang thu nhat: " << endl;;
	Nhap(d1);
	cout << "Nhap duong thang thu hai: " << endl;;
	Nhap(d2);
	if (ktCat(d1, d2) == 1)
		cout << "Hai duong thang cat nhau";
	else cout << "Hai duong thang khong cat nhau";
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

int ktCat(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = d1.a * d2.b - d2.a * d1.b;
	if (D != 0)
		return 1;
	return 0;
}