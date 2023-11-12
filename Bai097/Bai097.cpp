#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct Ngay
{
	int Ngay;
	int Thang;
	int Nam;

};
typedef struct Ngay NGAY;

void Nhap(NGAY&);
void Xuat(NGAY);
bool ktNhuan(NGAY);
int SoNgayToiDa(NGAY x);
int ktHopLe(NGAY);

int main()
{
	NGAY x;
	Nhap(x);
	Xuat(x);
	if (ktHopLe(x) == 1)
		cout << "Hop le";
	else
		cout << "khong hop le";
}

void Nhap(NGAY& x)
{
	cout << "Nhap ngay: ";
	cin >> x.Ngay;
	cout << "Nhap thang: ";
	cin >> x.Thang;
	cout << "Nhap nam: ";
	cin >> x.Nam;
}

void Xuat(NGAY x)
{
	cout << "Ngay: " << x.Ngay << endl;
	cout << "Thang: " << x.Thang << endl;
	cout << "Nam: " << x.Nam << endl;
}

bool ktNhuan(NGAY x)
{
	if ((x.Nam % 4 == 0 && x.Nam % 100 != 0) || x.Nam % 400 == 0)
		return true;
	return false;
}

int SoNgayToiDa(NGAY x)
{
	int ngaythang[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (ktNhuan(x))
		ngaythang[1] = 29;
	return ngaythang[x.Thang - 1];
}

int ktHopLe(NGAY x)
{
	if (x.Nam < 1)
		return 0;
	if (x.Thang < 1 || x.Thang>12)
		return 0;
	if (x.Ngay < 1)
		return 0;
	if (x.Ngay > SoNgayToiDa(x))
		return 0;
	return 1;
}