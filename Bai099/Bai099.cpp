#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct ngay
{
	int ng;
	int th;
	int nm;
};
typedef struct ngay NGAY;

void Nhap(NGAY&);
void Xuat(NGAY);
int ktNhuan(NGAY);
int SoNgayToiDaTrongThang(NGAY);
int SoThuTuTrongNam(NGAY);

int main()
{
	NGAY A;
	cout << "Nhap ngay:";
	Nhap(A);
	cout << endl;
	cout << "Ngay la:";
	Xuat(A);
	cout << endl;
	cout << "So thu tu ngay trong nam la: ";
	cout << SoThuTuTrongNam(A);
	return 1;
}

void Nhap(NGAY& x)
{
	cout << "\nNhap ngay: ";
	cin >> x.ng;
	cout << "Nhap thang: ";
	cin >> x.th;
	cout << "Nhap nam: ";
	cin >> x.nm;
}

void Xuat(NGAY x)
{
	cout << "\nNgay: " << x.ng;
	cout << "\nThang: " << x.th;
	cout << "\nNam: " << x.nm << endl;
}

int ktNhuan(NGAY x)
{
	if (x.nm % 4 == 0 && x.nm % 100 != 0)
		return 1;
	if (x.nm % 400 == 0)
		return 1;
	return 0;
}

int SoNgayToiDaTrongThang(NGAY x)
{
	int ngaythang[12] = { 31, 28, 31, 30, 31, 30,
	31, 31, 30, 31, 30, 31 };
	if (ktNhuan(x))
		ngaythang[1] = 29; 
		
		return ngaythang[x.th - 1];
}

int SoThuTuTrongNam(NGAY x)
{
	int stt = 0;
	for (int i = 1; i <= x.th - 1; i++)
		{
			NGAY temp = { 1,i,x.nm };
			stt += SoNgayToiDaTrongThang(temp);
		}
	return (stt + x.ng);
}