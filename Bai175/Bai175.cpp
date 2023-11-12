#include <iostream>
#include <iomanip>

using namespace std;

struct Diem
{
    float x;
    float y;
};
typedef struct Diem DIEM;

void Nhap(DIEM&);
void Xuat(DIEM);
void Nhap(DIEM[], int&);
void Xuat(DIEM[], int);
int DemDiem(DIEM[], int);

int main()
{
    DIEM a[500];
    int n;
    Nhap(a, n);

    cout << "\nMang cac diem:";
    Xuat(a, n);

    cout << "\nSo luong diem co hoanh do duong: " << DemDiem(a, n);

    return 0;
}

void Nhap(DIEM& P)
{
    cout << "\nNhap x: ";
    cin >> P.x;
    cout << "Nhap y: ";
    cin >> P.y;
}

void Xuat(DIEM P)
{
    cout << "(" << P.x << ";" << P.y << ")";
}

void Nhap(DIEM a[], int& n)
{
   cout << "Nhap n: ";
   cin >> n;
   for (int i = 0; i < n; i++)
   {
       cout << "Nhap a[" << i << "]: ";
       Nhap(a[i]);
   }
}

void Xuat(DIEM a[], int n)
{
    for (int i = 0; i <= n - 1; i++)
        Xuat(a[i]);
}

int DemDiem(DIEM a[], int n)
{
    int dem = 0;
    for (int i = 0; i <= n - 1; i++)
        if (a[i].x > 0)
            dem++;
    return dem;
}