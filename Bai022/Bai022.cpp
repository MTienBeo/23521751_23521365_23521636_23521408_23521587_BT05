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
DIEM DoiXungHoanh(DIEM);

int main()
{
	DIEM P;
	cout << "nhap toa do diem P: ";
	Nhap(P);
	cout << "diem P: " << endl;
	Xuat(P);
	cout << "Diem doi xung la: " << endl;
	Xuat(DoiXungHoanh(P));
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

DIEM DoiXungHoanh(DIEM P)
{
	DIEM temp;
	temp.x = P.x;
	temp.y = -P.y;
	return temp;
}