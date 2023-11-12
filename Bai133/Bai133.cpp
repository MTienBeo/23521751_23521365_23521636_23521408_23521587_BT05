#include<iostream>
using namespace std;

struct diemkhonggian
{
	float x;
	float y;
	float z;
};
typedef struct diemkhonggian DIEM;

struct hinhcau
{
	DIEM i;
	float r;
};
typedef struct hinhcau HINHCAU;

void Nhap(HINHCAU&);
void Nhap(DIEM&);
float KhoangCach(DIEM, DIEM);
int ktThuoc(HINHCAU, DIEM);
void Xuat(HINHCAU);
void XUAT(DIEM);

int main()
{
	HINHCAU c;
	DIEM p;
	Nhap(c);
	cout << "Nhap toa do diem: " << endl;
	Nhap(p);
	if (ktThuoc(c, p) == 1)
		cout << "Diem nam ben trong hinh cau";
	else
		cout << "Diem nam khong nam ben trong hinh cau";
	
}

void Nhap(HINHCAU& c)
{
	cout << "Nhap tam: " << endl;
	Nhap(c.i);
	cout << "Nhap ban kinh: " << endl << "r: ";
	cin >> c.r;
}

void Nhap(DIEM& x)
{
	cout << "x: ";
	cin >> x.x;
	cout << "y: ";
	cin >> x.y;
	cout << "z: ";
	cin >> x.z;
}

float KhoangCach(DIEM x, DIEM y)
{
	return sqrt((x.x - y.x) * (x.x * (y.x) + (x.y - y.y) * (x.y - y.y) + (x.z - y.z) * (x.z - y.z)));
}

int ktThuoc(HINHCAU c, DIEM p)
{
	float kc = KhoangCach(c.i, p);
	if (kc <= c.r)
		return 1;
	return 0;
}