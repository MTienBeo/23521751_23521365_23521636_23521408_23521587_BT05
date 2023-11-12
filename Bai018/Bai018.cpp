#include<iostream>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

void Nhap(DIEM&);
float KhoangCachOx(DIEM, DIEM);

int main()
{
	DIEM p, q;
	cout << "Nhap toa do diem thu nhat: " << endl;
	Nhap(p);
	cout << "Nhap toa do diem thu hai: " << endl;
	Nhap(q);
	cout << "Khoang cach hai diem theo phuong Ox la: " << KhoangCachOx(p, q);
}

void Nhap(DIEM& p)
{
	cout << "Nhap hoanh do: ";
	cin >> p.x;
	cout << "Nhap tung do: ";
	cin >> p.y;
}

float KhoangCachOx(DIEM p, DIEM q)
{
	return abs(q.x - p.x);
}