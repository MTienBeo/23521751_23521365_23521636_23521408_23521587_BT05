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
bool ktHopLe(THOIGIAN);

int main()
{
	THOIGIAN A;
	cout << "Nhap thoi gian: ";
	Nhap(A);

	cout << "\nThoi gian: ";
	Xuat(A);

	if (ktHopLe(A))
		cout << "\nThoi gian hop le";
	else 
		cout << "\nThoi gian khong hop le";

	return 0;
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
	cout << x.Gio << ":" << x.Phut << ":" << x.Giay;
}

bool ktHopLe(THOIGIAN x)
{
	if (!(x.Gio >= 0 && x.Gio <= 23))
		return 0;
	if (!(x.Phut >= 0 && x.Phut <= 59))
		return 0;
	if (!(x.Giay >= 0 && x.Giay <= 59))
		return 0;
	return 1;
}