#include<iostream>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

void Nhap(DIEM&);
DIEM DoiXungTung(DIEM);
void Xuat(DIEM);


int main()
{
	DIEM p;
	Nhap(p);
	cout << "Diem doi xung qua truc tung " << endl;
	DIEM C = DoiXungTung(p);
	Xuat(C);
	return 0;
}

void Nhap(DIEM& p)
{
	cout << "Nhap hoanh do: ";
	cin >> p.x;
	cout << "Nhap tung do: ";
	cin >> p.y;
}

DIEM DoiXungTung(DIEM p)
{
	DIEM temp;
	temp.x = -p.x;
	temp.y = p.y;
	return temp;
}
void Xuat(DIEM p)
{
	cout << "Hoanh do: " << p.x << endl;
	cout << "Tung do: " << p.y << endl;
}