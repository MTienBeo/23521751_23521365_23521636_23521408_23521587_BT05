#include <iostream>
using namespace std;

struct SoPhuc
{
	float Thuc;
	float Ao;
};
typedef struct SoPhuc SOPHUC;

void Nhap(SOPHUC&);
SOPHUC Tong(SOPHUC, SOPHUC);
void Xuat(SOPHUC);

int main()
{
	SOPHUC x,y;
	cout << "Nhap so phuc thu nhat: " << endl;
	Nhap(x);
	cout << "Nhap so phuc thu hai: " << endl;
	Nhap(y);
	SOPHUC z = Tong(x,y);
	cout << "Tong cua hai so" << endl;
	Xuat(z);

}

void Nhap(SOPHUC& x)
{
	cout << "Nhap phan thuc: ";
	cin >> x.Thuc;
	cout << "Nhap phan ao: ";
	cin >> x.Ao;
}
SOPHUC Tong(SOPHUC x, SOPHUC y)
{
	SOPHUC temp;
	temp.Thuc = x.Thuc * y.Thuc - x.Ao * y.Ao;
	temp.Ao = x.Thuc * y.Ao + x.Ao * y.Thuc;
	return temp;
}
void Xuat(SOPHUC x)
{
	cout << "Phan thuc: " << x.Thuc << endl;
	cout << "Phan ao: " << x.Ao << endl;
}