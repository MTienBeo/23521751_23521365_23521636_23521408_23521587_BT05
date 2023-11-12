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
int SoThuTu(THOIGIAN);
int KhoangCach(THOIGIAN, THOIGIAN);

int main()
{
	THOIGIAN A,B;
	cout << "Nhap thoi gian 1: ";
	Nhap(A);
	cout << "Nhap thoi gian 2: ";
	Nhap(B);
	cout << endl;
	cout << "Thoi gian 1 la: ";
	Xuat(A);
	cout << "Thoi gian 2 la: ";
	Xuat(B);
	cout << "Khoang cach giua 2 thoi gian la: ";
	cout << KhoangCach(A, B);
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
	cout << "\nGiay: " << x.Giay << endl;
}

int SoThuTu(THOIGIAN x)
{
	return x.Gio * 3600 + x.Phut * 60 + x.Giay;
}

int KhoangCach(THOIGIAN x, THOIGIAN y)
{
	int a = SoThuTu(x);
	int b = SoThuTu(y);
	return abs(a - b);
}
