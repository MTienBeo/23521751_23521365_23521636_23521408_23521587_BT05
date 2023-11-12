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
void Xuat(PHANSO[][100], int, int);
void HoanVi(PHANSO, PHANSO);
int SoSanh(PHANSO, PHANSO);
void SapTang(PHANSO[][100], int, int);

int main()
{
    PHANSO a[100][100];
    int m, n;
    Nhap(a, m, n);
    Xuat(a, m, n);
    cout << "sau khi sap xep la: " << endl;
    Xuat(a, m, n);

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
    cout << x.Tu << "/" << x.Mau << setw(8);
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
void Xuat(PHANSO a[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            Xuat(a[i][j]);
            
        }
        cout << endl;
    }
}
void HoanVi(PHANSO x, PHANSO y)
{
    PHANSO temp;
    temp = x;
    x = y;
    y = temp;  
}

int SoSanh(PHANSO x, PHANSO y)
{
    if ((float)x.Tu / x.Mau > (float)y.Tu / y.Mau)
        return 1;
    else
        return -1;
    return 0;
}

void SapTang(PHANSO a[][100], int m, int n)
{
    for (int i = 0; i <= m * n - 2; i++)
        for (int j = i + 1; j <= m * n - 1; j++)
            if (SoSanh(a[i / n][i % n], a[j / n][j % n]) == 1)
                HoanVi(a[i / n][i % n], a[j / n][j % n]);

}
