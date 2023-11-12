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
void Nhap(DUONGTRON[], int);
void Xuat(DUONGTRON[], int);
float KhoangCach(DUONGTRON, DUONGTRON);
int TuongDoi(DUONGTRON, DUONGTRON);
int ktDoiMotCatNhau(DUONGTRON[], int);

int main()
{
	DUONGTRON a[100];
	int n = 0;
	Nhap(a, n);
	Xuat(a, n);
	int kq = ktDoiMotCatNhau(a, n);
	if (kq == 1)
		cout << "Doi mot cat nhau";
	else
		cout << "Khong";

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
	cout << "y= " << I.y << endl;
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
void Nhap(DUONGTRON a[], int n)
{

	cout << "nhap so phan tu: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		Nhap(a[i]);
	}
}
void Xuat(DUONGTRON a[], int n)
{
c
}
float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt((P.x - Q.x) * (P.x - Q.x) + (P.y - Q.y) * (P.y - Q.y));
}
int TuongDoi(DUONGTRON c1, DUONGTRON c2)
{
	float kc = KhoangCach(c1.I, c2.I);
	if (kc == 0 && c1.R == c2.R)
		return 0;
	if (kc > (c1.R + c2.R))
		return 1;
	if (kc<(c1.R + c2.R) && kc>abs(c1.R - c2.R))
		return 3;
	if (kc = (c1.R + c2.R))
		return 2;
	if (kc == abs(c1.R - c2.R))
		return 4;
	return 5;
}

int ktDoiMotCatNhau(DUONGTRON a[], int n)
{
	int flag = 1;
	for (int i = 0; i <= n - 2; i++)
	{
		for (int j = i + 1; j <= n - 1; j++)
			if (TuongDoi(a[i], a[j]) != 3)
				flag = 0;
	}
	return flag;
}