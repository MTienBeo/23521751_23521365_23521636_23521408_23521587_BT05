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
float KhoangCach(DIEM, DIEM);
int TuongDoi(DUONGTRON, DUONGTRON);

int main()
{
	DUONGTRON c1;
	DUONGTRON c2;
	Nhap(c1);
	Nhap(c2);
	Xuat(c1);
	Xuat(c2);
	int kq = TuongDoi(c1, c2);
	if (kq == 0)
		cout << "trung nhau ";
	else if (kq == 1)
		cout << "roi nhau";
	else if (kq == 2)
		cout << "tiep xuc ngoai";
	else if (kq == 3)
		cout << "cat nhau ";
	else if (kq == 4)
		cout << "tiep xuc trong";
	else
		cout << "chua nhau";

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
	cout << "Ban kinh: " << c.R << endl;
}

float KhoangCach(DIEM P,DIEM Q )
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
	if(kc<(c1.R+c2.R)&&kc>abs(c1.R-c2.R))
		return 3;
	if (kc = (c1.R + c2.R))
		return 2;
	if (kc == abs(c1.R - c2.R))
		return 4;
	return 5;
}
