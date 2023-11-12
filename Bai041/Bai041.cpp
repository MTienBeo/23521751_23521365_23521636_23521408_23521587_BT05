#include <iostream>
#include <iomanip>
#include <iostream>
using namespace std;

struct diemkhonggian
{
	float x;
	float y;
	float z;
};
typedef struct diemkhonggian DIEMKHONGGIAN;

void Nhap(DIEMKHONGGIAN&);
void Xuat(DIEMKHONGGIAN);

DIEMKHONGGIAN DoiXungOxz(DIEMKHONGGIAN);

int main()
{
	DIEMKHONGGIAN P, Q;
	cout << "Nhap toa do diem 1: ";
	Nhap(P);
	cout << "\nToa do diem 1: ";
	Xuat(P);
}

DIEMKHONGGIAN DoiXungOxz(DIEMKHONGGIAN P)
{
	DIEMKHONGGIAN temp;
	temp.x = P.x;
	temp.y = -P.y;
	temp.z = P.z;
	return temp;
}