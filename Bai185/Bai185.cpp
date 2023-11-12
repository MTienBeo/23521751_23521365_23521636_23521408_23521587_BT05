#include <iostream>
#include <cmath>
using namespace std;

struct phanso
{
	int Tu;
	int Mau;
};
typedef struct phanso PHANSO;

void Nhap(PHANSO&);
void Xuat(PHANSO);
void Nhap(PHANSO[], int&);
void Xuat(PHANSO[], int);
void QuyDongMau(PHANSO&, PHANSO&);
bool SoSanh(PHANSO, PHANSO);
int ucln(int, int);
PHANSO RutGon(PHANSO&);
PHANSO LonNhat(PHANSO[], int);

int main()
{
    PHANSO a[500];
    int n;
    Nhap(a, n);
    
    cout << "\nMang cac phan so: ";
    Xuat(a, n);

    cout << "\nPhan so lon nhat trong mang: ";
    Xuat(LonNhat(a, n));

    return 0;
}

void Nhap(PHANSO& x)
{
	cout << "\nNhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}

void Xuat(PHANSO x)
{
	cout << x.Tu << "/" << x.Mau;
}

void Nhap(PHANSO a[], int& n)
{
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap a[" << i << "]: ";
        Nhap(a[i]);
    }
}

void Xuat(PHANSO a[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        cout << " ";
        Xuat(a[i]);
    }
}

void QuyDongMau(PHANSO& x, PHANSO& y)
{
    int mc = x.Mau * y.Mau;
    x.Tu = x.Tu * y.Mau;
    y.Tu = y.Tu * x.Mau;
    x.Mau = mc;
    y.Mau = mc;
}

bool SoSanh(PHANSO x, PHANSO y)
{
    QuyDongMau(x, y);
    if (x.Tu < y.Tu)
        return 0;
    return 1;
}

int ucln(int a,int b)
{
    int m = abs(a);
    int n = abs(b);
    while (m * n != 0)  
    {
        if (m > n)
            m = m - n;
        else
            n = n - m;
    }
    return m + n;
}

PHANSO RutGon(PHANSO& x)
{
    PHANSO temp;
    int kq = ucln(x.Tu, x.Mau);
    temp.Mau = x.Mau / kq;
    temp.Tu = x.Tu / kq;
    return temp;
}

PHANSO LonNhat(PHANSO a[], int n)
{
    PHANSO lc = a[0];
    for (int i = 0; i <= n - 1; i++)
        if (SoSanh(a[i], lc) == 1)
            lc = a[i];
    return (RutGon(lc));
}