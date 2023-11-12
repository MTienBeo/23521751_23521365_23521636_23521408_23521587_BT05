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

int main()
{
	THOIGIAN A;
	cout << "Nhap thoi gian: ";
	Nhap(A);
	cout << endl;
	cout << "Thoi gian la: ";
	Xuat(A);

	return 1;
}

void Nhap(THOIGIAN & x)
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
