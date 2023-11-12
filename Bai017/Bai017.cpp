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

void Nhap(DIEM&);
void Xuat(DIEM);
float KhoangCach(DIEM, DIEM);

int main()
{
	DIEM P;
	DIEM Q;
	cout << "nhap toa do diem P: ";
	Nhap(P);
	cout << "nhap toa do diem Q: ";
	Nhap(Q);
	cout << "diem P: " << endl;
	Xuat(P);
	cout << "diem Q: " << endl;
	Xuat(Q);
	cout << "khoang cach la: " << KhoangCach(P, Q);
}

void Nhap(DIEM& P)
{
	cout << "nhap x: ";
	cin >> P.x;
	cout << "nhap y: ";
	cin >> P.y;
}

void Xuat(DIEM P)
{
	cout << "x: " << P.x << endl;
	cout << "y: " << P.y << endl;
}
float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt((P.x - Q.x) * (P.x - Q.x) + (P.y - Q.y) * (P.y - Q.y));
}