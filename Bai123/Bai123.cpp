#include<iostream>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

struct DuongTron
{
	DIEM i;
	float r;
};
typedef struct DuongTron DUONGTRON;

void Nhap(DUONGTRON&);
void Nhap(DIEM&);
float DienTich(DuongTron);

int main()
{
	DUONGTRON c;
	Nhap(c);
	cout << "Dien tich duong tron la: " << DienTich(c);
	return 0;
}

void Nhap(DUONGTRON& c)
{
	cout << "Nhap tam duong tron: " << endl;
	Nhap(c.i);
	cout << "Nhap ban kinh duong tron: " << endl << "r: ";
	cin >> c.r;
}

void Nhap(DIEM& x)
{
	cout << "x: ";
	cin >> x.x;
	cout << "y: ";
	cin >> x.y;
}

float DienTich(DUONGTRON c)
{
	return (3.14 * c.r * c.r);
}