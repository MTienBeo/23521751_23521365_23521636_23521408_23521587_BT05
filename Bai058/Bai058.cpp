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
int ktPhanSo(PHANSO, PHANSO);


int main()
{
	PHANSO x, y;
	cout << "Nhap phan so thu nhat: " << endl;
	Nhap(x);
	cout << "Nhap phan so thu hai: " << endl;
	Nhap(y);
	switch (ktPhanSo(x, y))
	{
		case 1: 
			cout << "Phan so thu nhat lon hon phan so thu hai";
			break;
		case 0: 
			cout << "Phan so thu nhat bang phan so thu hai";
			break;
		case -1: 
			cout << "Phan so thu nhat nho hon phan so thu hai";
			break;
	}
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

int ktPhanSo(PHANSO x, PHANSO y)
{
	float a = (float)x.Tu / x.Mau;
	float b = (float)y.Tu / y.Mau;
	if (a>b)
		return 1;
	if (a < b)
		return -1;
	return 0;
}