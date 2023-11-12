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
int SoNgayToiDaTrongNam(NGAY);

int SoNgayToiDaTrongThang(NGAY);
NGAY TimNgay(int, int);

int SoThuTuTrongNam(NGAY);
NGAY TimNgay(int);


int main()
{
	int n;
	cout << "Nhap stt ngay:";
	cin >> n;
	cout << endl;

	NGAY A;
	A = TimNgay(n);
	cout << "Ngay la:";
	Xuat(A);

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

int	SoNgayToiDaTrongNam(NGAY x)
{
	if (ktNhuan(x))
		return 366;
	return 365;
}

NGAY TimNgay(int nam, int stt)
{
	NGAY temp = { 1,1,nam };
	temp.th = 1;
	while (stt - SoNgayToiDaTrongThang(temp) > 0)
	{
		stt = stt - SoNgayToiDaTrongThang(temp);
		temp.th++;
	}
	temp.ng = stt;
	return temp;
}

int SoNgayToiDaTrongThang(NGAY x)
{
	int ngaythang[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (ktNhuan(x))
		ngaythang[1] = 29; 
	return ngaythang[x.th - 1];
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
	return TimNgay(nam, stt);
}
