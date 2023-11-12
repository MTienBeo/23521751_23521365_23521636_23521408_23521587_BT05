#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct ThoiGian
{
	int Gio;
	int Phut;
	int Giay;
};
typedef struct ThoiGian THOIGIAN;

void Nhap(THOIGIAN&);
void Xuat(THOIGIAN);
THOIGIAN TruocDo(THOIGIAN);

int main()
{
	THOIGIAN x;
	Nhap(x);
	Xuat(x);
	cout << "Giay truoc do la: " << endl;
	Xuat(TruocDo(x));

}
void Nhap(THOIGIAN& x)
{
	cout << "Nhap Gio: ";
	cin >> x.Gio;
	cout << "Nhap phut: ";
	cin >> x.Phut;
	cout << "Nhap giay: ";
	cin >> x.Giay;
}

void Xuat(THOIGIAN x)
{
	cout << "Gio: " << x.Gio << endl;
	cout << "Phut " << x.Phut << endl;
	cout << "Giay: " << x.Giay<<endl;
}

THOIGIAN TruocDo(THOIGIAN x)
{
	x.Giay--;
	if (x.Giay < 0)
	{
		x.Phut--;
		if (x.Phut < 0)
		{
			x.Gio--;
			if (x.Gio < 0)
				x.Gio = 23;
			x.Phut = 59;
		}
		x.Giay = 59;
	}
	return x;

}