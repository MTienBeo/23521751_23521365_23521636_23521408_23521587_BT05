#include <iostream>

using namespace std;

struct PhanSo
{
    int Tu;
    int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO&);
void Xuat(PHANSO);

int main()
{
    PHANSO ps;
    cout << "Nhap phan so: ";
    Nhap(ps);

    cout << "\nPhan so vua nhap: ";
    Xuat(ps);

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