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

int main()
{
	NGAY ng, th, nm;
	cout << "Nhap ngay: ";
	Nhap(ng);
	cout << "Nhap thang: ";
	Nhap(th);
	cout << "Nhap nam: ";
	Nhap(nm);
	cout << "NGAY ng: ";
	Xuat(ng);
	cout << "NGAY th: ";
	Xuat(th);
	cout << "NGAY nm: ";
	Xuat(nm);
}

void Nhap(NGAY& x)
{
	cout << "Nhap ngay: ";
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
	cout << "\nNam: " << x.nm;
}

NGAY TruocDo(NGAY x)
{
	if (x.ng == 1 && x.th == 1 && x.nm == 1)
		return x;
	int stt = SoThuTu(x);
	stt = stt - 1;
	return TimNgay(stt);
}