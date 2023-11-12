#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct DonThuc
{
	float a;
	int n;
};
typedef struct DonThuc DONTHUC;
void Nhap(DONTHUC&);
void Xuat(DONTHUC);
DONTHUC Tich(DONTHUC, DONTHUC);

int main()
{
	DONTHUC f;
	DONTHUC g;
	cout << "nhap don thuc thu nhat: " << endl;
	Nhap(f);
	cout << "NHap don thuc thu hai: " << endl;
	Nhap(g);
	cout << "Don thuc thu nhat: " << endl;
	Xuat(f);
	cout << "Don thuc thu hai: " << endl;
	Xuat(g);
	cout << "Tich hai don thuc: " << endl;
	Xuat(Tich(f, g));


}

void Nhap(DONTHUC& f)
{
	cout << "Nhap he so: ";
	cin >> f.a;
	cout << "Nhap so mu: ";
	cin >> f.n;
}
void Xuat(DONTHUC f)
{
	cout << "\n He so: " << f.a;
	cout << "\n So mu: " << f.n;
}

DONTHUC Tich(DONTHUC f, DONTHUC g)
{
	DONTHUC temp;
	temp.a = f.a * g.a;
	temp.n = f.n + g.n;
	return temp;
}


