#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct honso
{
	int Nguyen;
	int Tu;
	int Mau;
};
typedef struct honso HONSO;

void Nhap(HONSO&);
void Xuat(HONSO);
int UCLN(int, int);
int ktToiGian(HONSO);

int main()
{
	HONSO A;
	cout << "Nhap hon so:";
	Nhap(A);
	cout << endl;
	cout << "hon so:";
	Xuat(A);
	cout << "\n\n";
	if (ktToiGian(A) == 1)
		cout << "Hon so toi gian";
	else
		cout << "Hon so chua toi gian";

	return 1;
}

void Nhap(HONSO& x)
{
	cout << "\nNhap nguyen: ";
	cin >> x.Nguyen;
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}

void Xuat(HONSO x)
{
	cout << "\nNguyen: " << x.Nguyen;
	cout << "\nTu: " << x.Tu;
	cout << "\nMau: " << x.Mau;
}

int UCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a * b != 0)
		if (a > b)
			a = a - b;
		else
			b = b - a;
	return a + b;
}

int ktToiGian(HONSO x)
{
	if (UCLN(x.Tu, x.Mau) == 1 && x.Tu / x.Mau == 0)
		return 1;
	return 0;
}