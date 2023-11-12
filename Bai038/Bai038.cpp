#include<iostream>
#include<cmath>
using namespace std;

struct diem
{
	float x;
	float y;
	float z;
};
typedef struct diem DIEM;

void Nhap(DIEM&);
float KhoangCachGoc(DIEM);


int main()
{
	DIEM p;
	Nhap(p);
	cout << "Khoang cach den goc toa do " << KhoangCachGoc(p);
	return 0;
}

void Nhap(DIEM& p)
{
	cout << "Nhap hoanh do: ";
	cin >> p.x;
	cout << "Nhap tung do: ";
	cin >> p.y;
	cout << "Nhap cao do: ";
	cin >> p.z;
}

float KhoangCachGoc(DIEM p)
{
	return sqrt(p.x * p.x + p.y * p.y + p.z * p.z);
}