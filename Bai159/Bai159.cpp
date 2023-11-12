#include <iostream>
#include <iomanip>
using namespace std;

struct DaThuc
{
	int n;
	float a[100];
};
typedef struct DaThuc DATHUC;

void Nhap(DATHUC&);
void Xuat(DATHUC);

void DieuChinhBac(DATHUC&);

int main()
{
	DATHUC ff;
	Nhap(ff);
	cout << "Da thuc ban dau la: ";
	Xuat(ff);
	cout << endl;

	cout << "Da thuc da duoc dieu chinh la: ";
	DieuChinhBac(ff);
	Xuat(ff);

	return 0;
}

void Nhap(DATHUC& f)
{
	cout << "Nhap n: ";
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
	cout << setw(8) << "(" << f.a[0] << ") ";
}

void DieuChinhBac(DATHUC& f)
{
	for (int i = f.n; i >= 0; --i)
	{
		if (f.a[i] != 0.0)
		{
			f.n = i;
			return;
		}
	}
	f.n = 0;
}