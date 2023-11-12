#include<iostream>
using namespace std;

struct Ngay
{
	int Ngay;
	int Thang;
	int Nam;
};
typedef struct Ngay NGAY;

void Nhap(NGAY&, int&);
NGAY TruocDo(NGAY, int);
int ktHopLe(NGAY);
int SoNgayToiDaTrongThang(NGAY);
int ktNhuan(NGAY);
int SoThuTu(NGAY);
int SoThuTuTrongNam(NGAY);
NGAY TimNgay(int);
NGAY TimNgay(int, int);
void Xuat(NGAY);

int main()
{
	NGAY x;
	int k;
	Nhap(x, k);
	if (!(ktHopLe(x) == 1))
	{
		cout << "Ngay khong hop le" << endl;
		return 0;
	}
	NGAY a = TruocDo(x, k);
	Xuat(a);
}

void Nhap(NGAY& x, int& k)
{
	cout << "Nhap ngay: ";
	cin >> x.Ngay;
	cout << "Nhap thang: ";
	cin >> x.Thang;
	cout << "Nhap nam: ";
	cin >> x.Nam;
	cout << "Nhap k ngay: ";
	cin >> k;
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
int SoNgayToiDaTrongNam(NGAY x)
{
	if (ktNhuan(x))
		return 366;
	return 365;
}
int SoThuTu(NGAY x)
{
	int stt = 0;
	for (int i = 1; i <= x.Nam-1; i++)
	{
		NGAY temp = { 1,1,i };
		stt = stt + SoNgayToiDaTrongNam(temp);
		
	}
	return (stt + SoThuTuTrongNam(x));
}
int SoThuTuTrongNam(NGAY x)
{
	int stt = 0;
	for (int i = 1; i <= x.Thang - 1; i++)
	{
		NGAY temp = { 1,i,x.Nam };
		stt = stt + SoNgayToiDaTrongThang(temp);
	}
	return (stt + x.Ngay);
}
NGAY TruocDo(NGAY x, int k)
{
	int stt = SoThuTu(x);
	if (stt - k < 1)
		stt = 1;
	else
		stt = stt - k;
	return TimNgay(stt);
}
NGAY TimNgay(int stt)
{
	int nam = 1;
	int sn = 365;
	while (stt - sn > 0)
	{
		stt = stt - sn;
		nam++;
		NGAY temp = { 1,1,nam };
		sn = SoNgayToiDaTrongNam(temp);
	}
	return TimNgay(stt, nam);
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
