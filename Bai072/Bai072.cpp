#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct HonSo
{
	int Nguyen;
	int Tu;
	int Mau;
};
typedef struct HonSo HONSO;

void Nhap(HONSO&);
int main()
{
	HONSO x;
	Nhap(x);
}
void Nhap(HONSO& x)
{
	cout << "nhap nguyen: ";
	cin >> x.Nguyen;
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "nhap mau: ";
	cin >> x.Mau;
}