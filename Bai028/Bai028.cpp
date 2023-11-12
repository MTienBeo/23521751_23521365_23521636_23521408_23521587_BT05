#include<iostream>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

void Nhap(DIEM&);
bool ktThuoc2(DIEM);


int main()
{
	DIEM p;
	Nhap(p);
	if (ktThuoc2(p))
		cout << "Diem thuoc phan tu thu 2";
	else
		cout << "Diem khong thuoc phan tu thu 2";
	return 0;
}

void Nhap(DIEM& p)
{
	cout << "Nhap hoanh do: ";
	cin >> p.x;
	cout << "Nhap tung do: ";
	cin >> p.y;
}

bool ktThuoc2(DIEM p)
{
	if ((p.x < 0) && (p.y > 0))
		return true;
	return false;
}
