#include <iostream>
using namespace std;

struct DonThuc
{
	float a;
	int n;
};
typedef DonThuc DONTHUC;

void Nhap(DONTHUC&);
void Xuat(DONTHUC);

int main()
{
	DONTHUC g;
	Nhap(g);
	cout << "Don thuc vua nhap" << endl;
	Xuat(g);
	return 0;
}

void Nhap(DONTHUC& g)
{
	cout << "Nhap he so: ";
	cin >> g.a;
	cout << "Nhap so mu: ";
	cin >> g.n;
}

void Xuat(DONTHUC g)
{
	cout << "He so: " << g.a << endl;
	cout << " So mu: " << g.n << endl;
}