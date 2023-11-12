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
void Xuat(DATHUC);
float TinhGiaTri(DATHUC f, float x0);

int main()
{
	DATHUC f;
	int x0;
	cout << "Nhap da thuc: " << endl;
	Nhap(f);
	cout << "Da thuc la: ";
	Xuat(f);
	cout << "nhap gia tri: ";
	cin >> x0;
	cout << "Gia tri tai x0 la: " << TinhGiaTri(f, x0);
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
void Xuat(DATHUC f)
{
	for (int i = f.n; i >= 1; i--)
	{
		cout << setw(8) << "(" << f.a[i] << ")";
		cout << "x^" << i << " + ";
	}
	cout << setw(8) << "(" << f.a[0] << ") " << endl;
}

float TinhGiaTri(DATHUC f, float x0)
{
	float s = f.a[0];
	float t = 1;
	for (int i = 1; i <=f.n; i++)
	{
		t = t * x0;
		s = s + f.a[i] * t;
	}
	return s;
}