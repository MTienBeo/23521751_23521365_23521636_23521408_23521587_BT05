#include <iostream>
using namespace std;

struct SoPhuc
{
	float Thuc;
	float Ao;
};
typedef struct SoPhuc SOPHUC;

void Nhap(SOPHUC&);
void Xuat(SOPHUC);

int main()
{
	SOPHUC x;
	Nhap(x);
	Xuat(x);
}

void Nhap(SOPHUC& x)
{
	cout << "Nhap phan thuc: ";
	cin >> x.Thuc;
	cout << "Nhap phan ao: ";
	cin >> x.Ao;
}
void Xuat(SOPHUC x)
{
	cout << "Phan thuc: " << x.Thuc << endl;
	cout << "Phan ao: " << x.Ao << endl;
}