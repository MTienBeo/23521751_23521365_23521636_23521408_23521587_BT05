#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct sophuc
{
	float Thuc;
	float Ao;
};
typedef struct sophuc SOPHUC;

void Nhap(SOPHUC&);
void Xuat(SOPHUC);

int main()
{
	SOPHUC x, y;
	cout << "Nhap so phuc 1:";
	Nhap(x);
	cout << "Nhap so phuc 2:";
	Nhap(y);
	cout << "So phuc 1:";
	Xuat(x);
	cout << "So phuc 2:";
	Xuat(y);
}

SOPHUC Tong(SOPHUC x, SOPHUC y)
{
	SOPHUC temp;
	temp.Thuc = x.Thuc + y.Thuc;
	temp.Ao = x.Ao + y.Ao;
	return temp;
}