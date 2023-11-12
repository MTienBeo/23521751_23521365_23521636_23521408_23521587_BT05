#include<iostream>
using namespace std;

struct HonSo
{
	int Nguyen;
	int Tu;
	int Mau;
};
typedef struct HonSo HONSO;

void Nhap(HONSO&);
void Xuat(HONSO);

int main()
{
	HONSO x;
	Nhap(x);
	Xuat(x);
}

void Nhap(HONSO& x)
{
	cout << "Nhap nguyen: ";
	cin >> x.Nguyen;
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau : ";
	cin >> x.Mau;
}

void Xuat(HONSO x)
{
	cout << "Nguyen: " << x.Nguyen << endl;
	cout << "Tu: " << x.Tu << endl;
	cout << "Mau: " << x.Mau << endl;
}