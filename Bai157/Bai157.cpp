#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct DaThuc
{
	int n;
	float a[100];
};
typedef struct DaThuc DATHUC;

void Nhap(DATHUC&);

int main()
{
	DATHUC f;
	cout << "Nhap da thuc: " << endl;
	Nhap(f);
}

void Nhap(DATHUC& f)
{
	cout << "nhap n: ";
	cin >> f.n;
	for (int i = f.n; i >= 0; i--)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> f.a[i];
	}

}
