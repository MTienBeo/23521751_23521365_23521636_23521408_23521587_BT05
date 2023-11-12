#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct Diem
{
	float x;
	float y;
	float z;
};
typedef struct Diem DIEM;

struct HinhCau
{
	DIEM I;
	float R;

};
typedef struct HinhCau HINHCAU;

void Nhap(HINHCAU&);
void Xuat(HINHCAU);
void Nhap(DIEM&);
void Xuat(DIEM);
float TheTich(HINHCAU);

int main()
{
	HINHCAU c;
	Nhap(c);
	Xuat(c);
	cout << "The tich la: " << TheTich(c);

}

void Nhap(DIEM& I)
{
	cout << "nhap x: ";
	cin >> I.x;
	cout << "nhap y: ";
	cin >> I.y;
	cout << "Nhap z: ";
	cin >> I.z;
}
void Xuat(DIEM I)
{
	cout << "Tam la: " << endl;
	cout << "x= " << I.x << endl;
	cout << "y= " << I.y << endl;
	cout << "z= " << I.z << endl;
}
void Nhap(HINHCAU& c)
{
	cout << "Nhap tam: \n";
	Nhap(c.I);
	cout << "nhap ban kinh: ";
	cin >> c.R;
}
void Xuat(HINHCAU c)
{
	Xuat(c.I);
	cout << "Ban kinh: " << c.R;
}

float TheTich(HINHCAU c)
{
	return float(4 / 3 * M_PI * c.R * c.R);
}