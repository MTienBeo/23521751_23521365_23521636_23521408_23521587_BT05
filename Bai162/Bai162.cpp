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
DATHUC Tich(DATHUC, DATHUC);

int main()
{
	DATHUC f;
	DATHUC g;
	cout << "Nhap da thuc: " << endl;
	Nhap(f);
	cout << "Nhap da thuc: " << endl;
	Nhap(g);
	cout << "Da thuc thu nhat: ";
	Xuat(f);
	cout << "Da thuc thu hai: ";
	Xuat(g);
	cout << "tich hai da thuc la: ";
	Xuat(Tich(f, g));
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

DATHUC Tich(DATHUC f, DATHUC g)
{
	DATHUC temp;
	temp.n = f.n + g.n;
	for (int i = temp.n; i >= 0; i--)
		temp.a[i] = 0;
	for (int i = 0; i <= g.n; i++)
		for (int j = 0; j <= f.n; j++)
			temp.a[i + j] += g.a[i] * f.a[j];
	return temp;
}