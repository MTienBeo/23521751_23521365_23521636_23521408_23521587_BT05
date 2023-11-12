#include<iostream>
using namespace std;

struct Ngay
{
	int Ngay;
	int Thang;
	int Nam;
};
typedef struct Ngay NGAY;

void Nhap(NGAY&);
int ktHopLe(NGAY);
int SoNgayToiDaTrongThang(NGAY);
int ktNhuan(NGAY);
void Xuat(NGAY);

int main()
{
	NGAY x;
	Nhap(x);
	if (!(ktHopLe(x) == 1))
	{
		cout << "Ngay khong hop le" << endl;
		return 0;
	}
	Xuat(x);
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

int ktHopLe(NGAY x)
{
	if (x.Nam < 1)
		return 0;
	if (x.Thang < 1 || x.Thang >12)
		return 0;
	if (x.Ngay<1 || x.Ngay>SoNgayToiDaTrongThang(x))
		return 0;
	return 1;
}

int ktNhuan(NGAY x)
{
	if ((x.Nam % 4 == 0) && (x.Nam % 100 != 0))
	{
		return 1;
	}
	if (x.Nam % 400 == 0)
	{
		return 1;
	}
	return 0;
}

int SoNgayToiDaTrongThang(NGAY x)
{
	int ngay[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (ktNhuan(x) == 0)
		ngay[1] = 29;
	return ngay[x.Thang - 1];
}
