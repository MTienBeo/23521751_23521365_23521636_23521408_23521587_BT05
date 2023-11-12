#include <iostream>
#include <iomanip>
#include <iostream>
using namespace std;

struct phanso
{
	int Tu;
	int Mau;
};
typedef struct phanso PHANSO;

void Nhap(PHANSO&);
void Xuat(PHANSO);

int main()
{
	PHANSO A, B;
	cout << "Nhap phan so 1:";
	Nhap(A);
	cout << "Nhap phan so 2:";
	Nhap(B);
	cout << "Phan so 1:";
	Xuat(A);
	cout << "Phan so 2:";
	Xuat(B);
}

PHANSO Thuong(PHANSO A, PHANSO B)
{
	PHANSO temp;
	temp.Tu = A.Tu * B.Mau;
	temp.Mau = A.Mau * B.Tu;
	RutGon(temp);
	return temp;
}