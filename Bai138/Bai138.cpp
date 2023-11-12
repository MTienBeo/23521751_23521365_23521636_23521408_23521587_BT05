#include<iostream>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

struct tamgiac
{
	DIEM a;
	DIEM b;
	DIEM c;
};
typedef struct tamgiac TAMGIAC;

void Nhap(TAMGIAC&);
int KiemTra(TAMGIAC);
float KhoangCach(DIEM, DIEM);
void Nhap(DIEM&);

int main()
{
	TAMGIAC t;
	Nhap(t);
	if (KiemTra(t) == 1)
		cout << "A,B,C la dinh cua mot tam giac";
	else 
		cout << "A,B,C khong la dinh cua mot tam giac";
	return 0;
}

void Nhap(TAMGIAC& t)
{
	cout << "Toa do dinh A: " << endl;
	Nhap(t.a);
	cout << "Toa do dinh B: " << endl;
	Nhap(t.b);
	cout << "Toa do dinh C: " << endl;
	Nhap(t.c);
}

void Nhap(DIEM& x)
{
	cout << "x: ";
	cin >> x.x;
	cout << "y: ";
	cin >> x.y;
}

int KiemTra(TAMGIAC t)
{
	float a = KhoangCach(t.b, t.c);
	float b = KhoangCach(t.a, t.c);
	float c = KhoangCach(t.a, t.b);
	if (a + b > c && b + c > a && a + c > b)
		return 1;
	return 0;
}

float KhoangCach(DIEM x, DIEM y)
{
	return sqrt((x.x - y.x) * (x.x * y.x) + (x.y - y.y) * (x.y - y.y));
}