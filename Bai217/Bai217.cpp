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
void Nhap(NGAY[], int& n);
void Xuat(NGAY[], int n);
bool ktNhuan(NGAY);
int SoNgayToiDaTrongThang(NGAY);
int SoNgayToiDaTrongNam(NGAY);
int SoThuTuTrongNam(NGAY);
int SoThuTu(NGAY x);
int KhoangCach(NGAY, NGAY);
void XaNhauNhat(NGAY[], int, NGAY&, NGAY&);

int main()
{
	int n;
	NGAY a[100];
	NGAY x = a[0];
	NGAY y = a[1];
	Nhap(a, n);
	Xuat(a, n);
	XaNhauNhat(a, n, x, y);
	cout << "2 ngay xa nhau nhat la: " << endl;
	Xuat(x);
	Xuat(y);

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
void Nhap(NGAY a[], int& n)
{
	cout << "nhap so phan tu: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		Nhap(a[i]);
	}
}
void Xuat(NGAY a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		Xuat(a[i]);
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
int SoNgayToiDaTrongNam(NGAY x)
{
	if (ktNhuan(x))
		return 366;
	return 365;
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

int KhoangCach(NGAY x, NGAY y)
{
	int a = SoThuTu(x);
	int b = SoThuTu(y);
	return abs(a - b);
}
void XaNhauNhat(NGAY a[], int n, NGAY& x, NGAY& y)
{
	x = a[0];
	y = a[1];
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (KhoangCach(a[i], a[j]) > KhoangCach(x, y))
			{
				x = a[i];
				y = a[j];
			}
}