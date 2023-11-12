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

void Xuat(PHANSO x)
{
	cout << "\nTu: " << x.Tu;
	cout << "\nMau: " << x.Mau;
}

PHANSO AmLonNhat(PHANSO a[][100], int m, int n)
{
	PHANSO temp = { 0,1 };
	PHANSO lc = temp;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			for (int j = 0; j < n; j++)
				if (SoSanh(lc, temp) == 0 ||
					(SoSanh(a[i][j], lc) == 1))
					lc = a[i][j];
	return lc;
}