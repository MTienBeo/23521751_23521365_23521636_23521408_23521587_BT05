#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO&);
void Xuat(PHANSO);
void Nhap(PHANSO[][100], int&, int&);

int main()
{
    PHANSO a[100][100];
    int m, n;
    Nhap(a, m, n);

}
void Nhap(PHANSO& x)
{
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}
void Xuat(PHANSO x)
{
	cout << "Tu so la: " << x.Tu << endl;
	cout << "Mau so la: " << x.Mau << endl;
}

void Nhap(PHANSO a[][100], int& m, int& n)
{
    cout << "Nhap so hang m: ";
    cin >> m;
    cout << "Nhap so cot n: ";
    cin >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Nhap a[" << i << "][" << j << "]: \n";
            Nhap(a[i][j]);
        }
    }
}
