#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct sophuc
{
	float Thuc;
	float Ao;
};
typedef struct sophuc SOPHUC; 

void Nhap(SOPHUC&);
void Xuat(SOPHUC);

int main()
{
	SOPHUC A, B;
	cout << "Nhap so phuc:";
	Nhap(A);
	cout << endl;
	
	cout << "So phuc la:";
	Xuat(A);
	
	return 1;
}

void Nhap(SOPHUC & x)
{
	cout << "\nNhap thuc: ";
	cin >> x.Thuc;
	cout << "Nhap ao: ";
	cin >> x.Ao;
}

void Xuat(SOPHUC x)
{
	cout << setw(6);
	cout << setprecision(3);
	cout << "\nThuc = " << x.Thuc; 
	cout << "\nAo = " << x.Ao << endl;
}
