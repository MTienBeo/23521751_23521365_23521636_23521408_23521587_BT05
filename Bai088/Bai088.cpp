#include <iostream>
using namespace std;

struct ThoiGian
{
	int Gio;
	int Phut;
	int Giay;
};
typedef struct ThoiGian THOIGIAN;

void Nhap(THOIGIAN&);
int ktHopLe(THOIGIAN);
int SoThuTu(THOIGIAN);

int main()
{
	THOIGIAN x;
	Nhap(x);
	if (!(ktHopLe(x) == 1))
	{
		cout << "Thoi gian khong hop le" << endl;
		return 0;
	}
	cout << "So thu tu giay ke tu 00:00:00 la " << SoThuTu(x);
}

void Nhap(THOIGIAN& x)
{
	cout << "Nhap gio: ";
	cin >> x.Gio;
	cout << "Nhap phut: ";
	cin >> x.Phut;
	cout << "Nhap giay: ";
	cin >> x.Giay;
}

int ktHopLe(THOIGIAN x)
{
	if (!((x.Giay >= 0) && (x.Giay <= 59)))
		return 0;
	if (!((x.Phut >= 0) && (x.Phut <= 59)))
		return 0;
	if (!((x.Gio >= 0) && (x.Gio <= 23)))
		return 0;
	return 1;
}

int SoThuTu(THOIGIAN x)
{
	return (x.Gio * 3600 + x.Phut * 60 + x.Giay);
}