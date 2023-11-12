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

float KhoangCachY(DIEMKHONGGIAN, DIEMKHONGGIAN);

int main()
{
	DIEMKHONGGIAN P, Q;
	cout << "Nhap toa do diem 1: ";
	Nhap(P);
	cout << "Nhap toa do diem 2: ";
	Nhap(Q);
	cout << "\nToa do diem 1: ";
	Xuat(P);
	cout << "\nToa do diem 2: ";
	Xuat(Q);
	
	float kq = KhoangCachY(P, Q);
	cout << setw(6);
	cout << setprecision(3);
	cout << "\nKhoang cach x :" << kq;
	return 1;
}

float KhoangCachY(DIEMKHONGGIAN P,
	                DIEMKHONGGIAN Q)
{
	return abs(Q.y - P.y);
}
