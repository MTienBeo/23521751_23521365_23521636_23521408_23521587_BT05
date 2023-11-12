#include<iostream>
using namespace std;

struct diem
{
	float x;
	float y;
	float z;
};
typedef struct diem DIEM;

void Nhap(DIEM&);
void Xuat(DIEM);


int main()
{
	DIEM p;
	Nhap(p);
	Xuat(p);
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

void Xuat(DIEM p)
{
	cout << "x: " << p.x << endl;
	cout << "y: " << p.y << endl;
	cout << "z: " << p.z << endl;
}
