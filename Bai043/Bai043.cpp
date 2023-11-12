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
bool ktTrung(DIEM, DIEM);

int main()
{
	DIEM p, q;
	cout << "Nhap toa do diem thu nhat: " << endl;
	Nhap(p);
	cout << "Nhap toa do diem thu hai: " << endl;
	Nhap(q);
	if (ktTrung(p, q))
		cout << "Hai diem trung";
	else
		cout << "Hai diem khong trung";
	
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

bool ktTrung(DIEM p, DIEM q)
{
	if ((p.x == q.x) && (p.y = q.y) && (p.z == q.z))
		return true;
	return false;
}