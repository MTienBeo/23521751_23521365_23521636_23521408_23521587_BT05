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
int SoNgayToiDaTrongThang(NGAY);
int SoNgayToiDaTrongNam(NGAY);
int SoThuTu(NGAY);
int SoThuTuTrongNam(NGAY);
NGAY TimNgay(int,int);
NGAY TimNgay(int);
NGAY KeTiep(NGAY x, int);

int main()
{
	NGAY x;
	Nhap(x);
	cout << "Ngay la: " << endl;
	Xuat(x);
	int k;
	cout << "nhap so ngay ke tiep: ";
	cin >> k;
	cout << "Ngay ke tiep la: " << endl;
	Xuat(KeTiep(x, k));


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
int SoNgayToiDaTrongThang(NGAY x)
{
	int ngaythang[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (ktNhuan(x))
		ngaythang[1] = 29;
	return ngaythang[x.Thang - 1];
}
int SoNgayToiDaTrongNam(NGAY x)
{
	if (ktNhuan(x))
		return 366;
	return 365;
}
int SoThuTuTrongNam(NGAY x)
{
	int stt = 0;
	for (int i = 1; i < x.Thang - 1; i++)
	{
		NGAY temp = { 1,i,x.Nam };
		stt += SoNgayToiDaTrongThang(temp);
	}
	return (stt + x.Ngay);
}

int SoThuTu(NGAY x)
{
	int stt = 0;
	for (int i = 1; i <= x.Nam - 1; i++)
	{
		NGAY temp = { 1,1,i };
		stt = stt + SoNgayToiDaTrongNam(temp);
	}
	return (stt + SoThuTuTrongNam(x));
}

NGAY TimNgay(int nam, int stt)
{
	NGAY temp = { 1,1,nam };
	temp.Thang = 1;
	while (stt - SoNgayToiDaTrongThang(temp) > 0)
	{
		stt = stt - SoNgayToiDaTrongThang(temp);
		temp.Thang++;
	}
	temp.Ngay = stt;
	return temp;

}

NGAY TimNgay(int stt)
{
	int nam = 1;
	int sn = 365;
	while (stt - sn > 0)
	{
		stt = stt - sn;
		nam++;
		NGAY temp{ 1,1,nam };
		sn = SoNgayToiDaTrongNam(temp);
	}
	return TimNgay(nam, stt);
}

NGAY KeTiep(NGAY x, int k)
{
	int stt = SoThuTu(x);
	stt = stt + k;
	return TimNgay(stt);
}