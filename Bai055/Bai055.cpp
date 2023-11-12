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
bool ktAm(PHANSO);

int main()
{
    PHANSO ps;
    cout << "Nhap phan so: ";
    Nhap(ps);

    cout << "\nPhan so : ";
    Xuat(ps);

    if (ktAm(ps))
        cout << "\nPhan so am";
    else
        cout << "\nPhan so khong am";

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

bool ktAm(PHANSO x)
{
    if (x.Tu * x.Mau < 0)
        return 1;
    return 0;
}