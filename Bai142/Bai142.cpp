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

struct TamGiac
{
	DIEM A;
	DIEM B;
	DIEM C;

};
typedef struct TamGiac TAMGIAC;

void Nhap(DIEM&);
void Xuat(DIEM);
void Nhap(TAMGIAC&);
void Xuat(TAMGIAC);
DIEM HoanhDoLonNhat(TAMGIAC);

int main()
{
	TAMGIAC t;
	Nhap(t);
	Xuat(t);
	cout << "Diem la co hoanh do lon nhat";
	Xuat(HoanhDoLonNhat(t));

}
void Nhap(DIEM& A)
{
	cout << "Nhap x: ";
	cin >> A.x;
	cout << "Nhap y: ";
	cin >> A.y;
}

void Xuat(DIEM A)
{
	cout << "x= " << A.x << endl;
	cout << "y= " << A.y << endl;
}

void Nhap(TAMGIAC& t)
{
	cout << "Nhap dinh A:\n";
	Nhap(t.A);
	cout << "Nhap dinh B:\n";
	Nhap(t.B);
	cout << "Nhap dinh C:\n";
	Nhap(t.C);
}

void Xuat(TAMGIAC t)
{
	cout << "\nToa do dinh A:";
	Xuat(t.A);
	cout << "\nToa do dinh B:";
	Xuat(t.B);
	cout << "\nToa do dinh C:";
	Xuat(t.C);
}

DIEM HoanhDoLonNhat(TAMGIAC t)
{
	DIEM lc = t.A;
	if (t.B.x > lc.x)
		lc = t.B;
	if (t.C.x > lc.x)
		lc = t.C;
	return lc;
}