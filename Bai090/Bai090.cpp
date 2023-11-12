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
int SoSanh(THOIGIAN, THOIGIAN);

int main()
{
	THOIGIAN A;
	cout << "Nhap thoi gian 1: ";
	Nhap(A);
	THOIGIAN B;
	cout << "Nhap thoi gian 2: ";
	Nhap(B);

	cout << "\nThoi gian 1: ";
	Xuat(A);
	cout << "\nThoi gian 2: ";
	Xuat(B);

	cout << "\nKet qua tra ve khi so sanh 2 thoi gian: " << SoSanh(A, B);

	return 0;
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
	cout << x.Gio << ":" << x.Phut << ":" << x.Giay;
}

int SoSanh(THOIGIAN x, THOIGIAN y)
{
	if (x.Gio > y.Gio)
		return 1;
	if (x.Gio < y.Gio)
		return -1;
	if (x.Phut > y.Phut)
		return 1;
	if (x.Phut < y.Phut)
		return -1;
	if (x.Giay > y.Giay)
		return 1;
	if (x.Giay < y.Giay)
		return -1;
	return 0;
}