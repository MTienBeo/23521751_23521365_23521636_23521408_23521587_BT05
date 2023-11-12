#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

struct DuongTron
{
	DIEM I;
	float R;

};
typedef struct DuongTron DUONGTRON;

void Nhap(DUONGTRON&);
void Xuat(DUONGTRON);
void Nhap(DIEM&);
void Xuat(DIEM);
float ChuVi(DUONGTRON);

int main()
{
	DUONGTRON c;
	Nhap(c);
	Xuat(c);
	cout << "Chu vi la: " << ChuVi(c);

}

void Nhap(DIEM& I)
{
	cout << "nhap x: ";
	cin >> I.x;
	cout << "nhap y: ";
	cin >> I.y;
}
void Xuat(DIEM I)
{
	cout << "Tam la: " << endl;
	cout << "x= " << I.x << endl;
	cout << "y= " << I.y<<endl;
}
void Nhap(DUONGTRON& c)
{
	cout << "Nhap tam: \n";
	Nhap(c.I);
	cout << "nhap ban kinh: ";
	cin >> c.R;
}
void Xuat(DUONGTRON c)
{
	Xuat(c.I);
	cout << "Ban kinh: " << c.R;
}

float ChuVi(DUONGTRON c)
{
	return (M_PI * 2 * c.R);
}