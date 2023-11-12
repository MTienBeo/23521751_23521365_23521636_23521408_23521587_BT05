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
void XuatThu(NGAY);

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

void XuatThu(NGAY x)
{
	int stt = SoThuTu(x);
	switch (stt % 7)
	{
	   case 0: cout << "Chu Nhat";
		   break;
	   case 1: cout << "Thu Hai";
		   break;
	   case 2: cout << "Thu Ba";
		   break;
	   case 3: cout << "Thu Tu";
		   break;
	   case 4: cout << "Thu Nam";
		   break;
	   case 5: cout << "Thu Sau";
		   break;
	   case 6: cout << "Thu Bay";
		   break;
	}
}