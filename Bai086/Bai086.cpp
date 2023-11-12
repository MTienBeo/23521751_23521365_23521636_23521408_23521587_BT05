#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct thoigian
{
	int Gio;
	int Phut;
	int Giay;
};
typedef struct thoigian THOIGIAN;

void Nhap(THOIGIAN&);
void Xuat(THOIGIAN);
int TinhSoGiay(THOIGIAN);
THOIGIAN KeTiep(THOIGIAN);

int main()
{
	THOIGIAN A;
	cout << "Nhap thoi gian: ";
	Nhap(A);

	int kq = TinhSoGiay(A);
	cout << "\nSo giay: " << kq;

	THOIGIAN B;
	B = KeTiep(A);
	cout << "\nThoi gian ke tiep: ";
	Xuat(B);
	return 1;
}

void Nhap(THOIGIAN& x)
{
	cout << "\nNhap gio: ";
	cin >> x.Gio;
	cout << "Nhap phut: ";
	cin >> x.Phut;
	cout << "Nhap giay: ";
	cin >> x.Giay;
}

void Xuat(THOIGIAN x)
{
	cout << "\nGio: " << x.Gio;
	cout << "\nPhut: " << x.Phut;
	cout << "\nGiay: " << x.Giay;
}

THOIGIAN KeTiep(THOIGIAN x)
{
	x.Giay++;
	if (x.Giay > 59)
	{
		x.Phut++;
		if (x.Phut > 59)
		{
			x.Gio++;
			if (x.Gio > 23)
				x.Gio = 0;
			x.Phut = 0;		
		}
		x.Giay = 0;
	}
	return x;
}