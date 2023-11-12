#include<iostream>
using namespace std;

struct Ngay
{
	int Ngay;
	int Thang;
	int Nam;
};
typedef struct Ngay NGAY;

void Nhap(int&, int&);
int SoNgayToiDaTrongThang(NGAY);
int ktNhuan(NGAY);
NGAY TimNgay(int, int);
void Xuat(NGAY);

int main()
{
	int stt, y;
	Nhap(stt,y);
	NGAY x = TimNgay(stt, y);
	Xuat(x);
}

void Nhap(int& stt, int& y)
{
	cout << "Nhap so thu tu: ";
	cin >> stt;
	cout << "Nhap nam: ";
	cin >> y;
}

void Xuat(NGAY x)
{
	cout << "Ngay: " << x.Ngay << endl;
	cout << "Thang: " << x.Thang << endl;
	cout << "Nam: " << x.Nam << endl;
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

NGAY TimNgay(int stt, int y)
{
	NGAY temp = { 1,1,y };
	while ((stt - SoNgayToiDaTrongThang(temp)) > 0)
	{
		stt = stt - SoNgayToiDaTrongThang(temp);
		temp.Thang++;
	}
	temp.Ngay = stt;
	return temp;
}

