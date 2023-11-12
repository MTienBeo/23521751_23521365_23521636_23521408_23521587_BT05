#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct Diem
{
    float x;
    float y;
};

typedef struct Diem DIEM;

void Nhap(DIEM&);
void Xuat(DIEM);
void Nhap(DIEM[][100], int&, int&);
void Xuat(DIEM[][100], int, int);
int ktTrung(DIEM, DIEM);
int TanSuat(DIEM[][100], int, int, DIEM);
int DemKhongTrung(DIEM[][100], int, int);


int main()
{
    int m, n;
    DIEM a[100][100];
    Nhap(a, m, n);
    Xuat(a, m, n);
    cout << "So diem khong trung la: " << DemKhongTrung(a, m, n) << endl;
}

void Nhap(DIEM& I)
{
    cout << "Nhap x: ";
    cin >> I.x;
    cout << "Nhap y: ";
    cin >> I.y;
}

void Xuat(DIEM I)
{
    cout << "Diem: " << endl;
    cout << "x = " << I.x << endl;
    cout << "y = " << I.y << endl;
}

void Nhap(DIEM a[][100], int& m, int& n)
{
    cout << "Nhap so hang m: ";
    cin >> m;
    cout << "Nhap so cot n: ";
    cin >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Nhap a[" << i << "][" << j << "]: ";
            Nhap(a[i][j]);
        }
    }
}

void Xuat(DIEM a[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            Xuat(a[i][j]);
        }
    }
}

int ktTrung(DIEM P, DIEM Q)
{
    if (P.x == Q.x && P.y == Q.y)
        return 1;
    return 0;
}

int TanSuat(DIEM a[][100], int m, int n, DIEM P)
{
    int dem = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (ktTrung(a[i][j], P))
                dem++;
        }
    }
    return dem;
}

int DemKhongTrung(DIEM a[][100], int m, int n)
{
    int dem = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (TanSuat(a, m, n, a[i][j]) == 1)
                dem++;
        }
    }
    return dem;
}


