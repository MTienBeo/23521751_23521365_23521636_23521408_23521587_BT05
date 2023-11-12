#include <iostream>
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
int UCLN(int, int);
void RutGon(PHANSO&);
PHANSO Tich(PHANSO, PHANSO);

int main()
{
    PHANSO ps1;
    cout << "Nhap phan so 1: ";
    Nhap(ps1);
    PHANSO ps2;
    cout << "Nhap phan so 2: ";
    Nhap(ps2);

    cout << "\nPhan so 1: ";
    Xuat(ps1);
    cout << "\nPhan so 2: ";
    Xuat(ps2);

    cout << "\nTich 2 phan so: ";
    Xuat(Tich(ps1, ps2));

    return 0;
}

void Nhap(PHANSO& x)
{
    cout << "\nNhap tu so: ";
    cin >> x.Tu;
    cout << "Nhap mau so: ";
    cin >> x.Mau;
}

void Xuat(PHANSO x)
{
    cout << x.Tu << "/" << x.Mau;
}

int UCLN(int a, int b)
{
    a = abs(a);
    b = abs(b);
    while (a * b != 0)
        if (a > b)
            a = a - b;
        else
            b = b - a;
    return a + b;
}

void RutGon(PHANSO & x)
{
    int kq = UCLN(x.Tu, x.Mau);
    x.Tu = x.Tu / kq;
    x.Mau = x.Mau / kq;
}

PHANSO Tich(PHANSO x, PHANSO y)
{
    PHANSO temp;
    temp.Tu = x.Tu * y.Tu;
    temp.Mau = x.Mau * y.Mau;
    RutGon(temp);
    return temp;
}