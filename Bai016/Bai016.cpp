#include <iostream>
#include <iomanip>
#include <iostream>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

void Xuat(DIEM);

int main()
{
	DIEM P;
	cout << "/nXuat toa do diem: ";
	Xuat (P);
	return 1;
}

void Xuat(DIEM P)
{
	cout << "x: " << P.x << endl;
	cout << "y: " << P.y << endl;
}








