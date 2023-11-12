#include<iostream>
using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;
void Nhap(PHANSO&);
int UCLN(int, int);
int ktToiGian(PHANSO);


int main()
{
	PHANSO x, y;
	Nhap(x);
	if (ktToiGian(x) == 1)
		cout << "Phan so toi gian";
	else
		cout << "Phan so chua toi gian";
	return 0;
}

void Nhap(PHANSO& x)
{
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}

int UCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a * b != 0)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return a + b;
}

int ktToiGian(PHANSO x)
{
	if (UCLN(x.Tu, x.Mau) == 1)
		return 1;
	return 0;
}