#include<iostream>
using namespace std;

struct diemkhonggian
{
	float x;
	float y;
	float z;
};
typedef struct diemkhonggian DIEM;

struct hinhcau
{
	DIEM i;
	float r;
};
typedef struct hinhcau HINHCAU;

void Nhap(HINHCAU&);
void Nhap(DIEM&);
void Xuat(HINHCAU);
void XUAT(DIEM);

int main()
{
	HINHCAU c;
	Nhap(c);
	Xuat(c);
}

void Nhap(HINHCAU& c)
{
	cout << "Nhap tam: " << endl;
	Nhap(c.i);
	cout << "Nhap ban kinh: " << endl << "r: ";
	cin >> c.r;
}

void Nhap(DIEM& x)
{
	cout << "x: ";
	cin >> x.x;
	cout << "y: ";
	cin >> x.y;
	cout << "z: ";
	cin >> x.z;
}

void Xuat(DIEM x)
{
	cout << "x: " << x.x << endl;
	cout << "y: " << x.y << endl;
	cout << "z: " << x.z << endl;
}

void Xuat(HINHCAU c)
{
	cout << "Tam: " << endl;
	Xuat(c.i);
	cout << "Ban kinh: " << endl << "r: " << c.r;
}

