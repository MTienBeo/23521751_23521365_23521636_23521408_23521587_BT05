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
int SoNgayToiDa(NGAY x);
int ktHopLe(NGAY);

int main()
{
	NGAY x;
	Nhap(x);
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


