#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

struct tamgiac
{
	DIEM A;
	DIEM B;
	DIEM C;
};
typedef struct tamgiac TAMGIAC;

void Nhap(DIEM&);
void Xuat(DIEM);

void Nhap(TAMGIAC&);
void Xuat(TAMGIAC);

float KhoangCach(DIEM, DIEM);
float TongKhoangCach(TAMGIAC, DIEM);

int main()
{
	TAMGIAC tg;
	Nhap(tg);
	Xuat(tg);
	cout << endl;

	DIEM M;
	cout << "Nhap diem M: ";
	Nhap(M);
	cout << "Diem M la: ";
	Xuat(M);
	cout << endl;

	cout << "Tong khoang cach tu M toi 3 dinh tam giac la: ";
	cout << TongKhoangCach(tg, M);

	return 1;
}

void Nhap(DIEM& P)
{
	cout << "\nNhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}

void Xuat(DIEM P)
{
	cout << setw(6);
	cout << setprecision(3);
	cout << "\nx = " << P.x;
	cout << "\ny = " << P.y;
}

void Nhap(TAMGIAC& t)
{
	cout << "Nhap dinh A: ";
	Nhap(t.A);
	cout << "Nhap dinh B: ";
	Nhap(t.B);
	cout << "Nhap dinh C: ";
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

float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt((P.x - Q.x) * (P.x - Q.x) +
		(P.y - Q.y) * (P.y - Q.y));
}


float TongKhoangCach(TAMGIAC t, DIEM P)
{
	float a = KhoangCach(t.A, P);
	float b = KhoangCach(t.B, P);
	float c = KhoangCach(t.C, P);
	return a + b + c;
}