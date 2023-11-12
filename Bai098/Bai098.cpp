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
int SoSanh(NGAY, NGAY);
void Xuat(NGAY);

int main()
{
	NGAY x,y;
	cout << "Nhap ngay thu nhat: " << endl;
	Nhap(x);
	cout << "Nhap ngay thu hai: " << endl;
	Nhap(y);
	if ((ktHopLe(x) != 1) || (ktHopLe(y) != 1))
	{
		cout << "Ngay khong hop le" << endl;
		return 0;
	}
	switch (SoSanh(x, y))
	{
	case 1: 
		cout << "Ngay thu nhat lon hon ngay thu hai";
		break;
	case 0:
		cout << "Ngay thu nhat bang ngay thu hai: ";
		break;
	case -1:
		cout << "Ngay thu nhat nho hon ngay thu hai";
		break;
	}
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
	if (ktNhuan(x) == 1)
		ngay[1] = 29;
	return ngay[x.Thang - 1];
}

int SoSanh(NGAY x, NGAY y)
{
	if (x.Nam > y.Nam)
		return 1;
	if (x.Nam < y.Nam)
		return -1;
	if (x.Thang > y.Thang)
		return 1;
	if (x.Thang < y.Thang)
		return -1;
	if (x.Ngay > y.Ngay)
		return 1;
	if (x.Ngay < y.Ngay)
		return -1;
	return 0;
}