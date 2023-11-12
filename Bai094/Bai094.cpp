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

int main()
{
	NGAY A;
	cout << "Nhap ngay:";
	Nhap(A);
	cout << endl;
	cout << "Ngay la:";
	Xuat(A);
	cout << endl;
	if (ktNhuan(A) == 1)
		cout << "Nam nhuan";
	else
		cout << "Nam khong nhuan";
	return 1;
}

void Nhap(NGAY& x)
{
	cout << "\nNhap ngay: ";
	cin >> x.ng;
	cout << "Nhap thang: ";
	cin >> x.th;
	cout << "Nhap nam: " ;
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