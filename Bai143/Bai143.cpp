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
void Nhap(DIEM&);
DIEM TungNhoNhat(TAMGIAC);
void Xuat(DIEM);

int main()
{
	TAMGIAC t;
	Nhap(t);
	cout << "Dinh co tung do nho nhat: " << endl;
	DIEM d = TungNhoNhat(t);
	Xuat(d);
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

DIEM TungNhoNhat(TAMGIAC t)
{
	DIEM lc = t.a;
	if (t.a.y < lc.y)
		lc = t.b;
	if (t.c.y < lc.y)
		lc = t.c;
	return lc;
}

void Xuat(DIEM x)
{
	cout << "x: " << x.x << endl;
	cout << "y: " << x.y << endl;
}