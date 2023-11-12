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
int KiemTra(DIEM);

int main()
{
	DIEM P;
	cout << "nhap toa do diem P: ";
	Nhap(P);
	cout << "diem P: " << endl;
	Xuat(P);
	if (KiemTra(P) == 1)
		cout << "thuoc";
	else
		cout << "khong";
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

int KiemTra(DIEM P)
{
	if (P.x > 0 && P.y > 0)
		return 1;
	return 0;
}
