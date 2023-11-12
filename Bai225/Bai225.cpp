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

struct duongthang
{
    float a;
    float b;
    float c;
};
typedef struct duongthang DUONGTHANG;

void Nhap(DIEM&);
void Xuat(DIEM);

void Nhap(DUONGTHANG&);
void Xuat(DUONGTHANG);
void Nhap(DIEM[][100], int&, int&);
void Xuat(DIEM[][100], int, int);
float KhoangCach(DUONGTHANG, DIEM);
DIEM TimDiem(DIEM[][100], int, int, DUONGTHANG);

int main()
{
    DIEM a[100][100];
    int m, n;
    Nhap(a, m, n);
    DUONGTHANG c;
    cout << "\nNhap duong thang: ";
    Nhap(c);

    cout << "\nMa tran cac diem: ";
    Xuat(a, m, n);
    cout << "\nDuong thang: ";
    Xuat(c);

    cout << "\nDiem gan duong thang nhat: ";
    Xuat(TimDiem(a, m, n, c));

    return 0;
}

void Nhap(DIEM& P)
{
    cout << "Nhap x: ";
    cin >> P.x;
    cout << "Nhap y: ";
    cin >> P.y;
}

void Xuat(DIEM P)
{
    cout << "(" << P.x << ";" << P.y << ")";
}

void Nhap(DIEM a[][100], int& m, int& n)
{
    cout << "Nhap so hang: ";
    cin >> m;
    cout << "Nhap so cot: ";
    cin >> n;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            cout << "Nhap a[" << i << "][" << j << "]:\n";
            Nhap(a[i][j]);
        }
}

void Xuat(DIEM a[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            cout << "Diem A[" << i << "][" << j << "]:";
            Xuat(a[i][j]);
            cout << endl;
        }
}

void Nhap(DUONGTHANG& d)
{
    cout << "\nNhap a: ";
    cin >> d.a;
    cout << "Nhap b: ";
    cin >> d.b;
    cout << "Nhap c: ";
    cin >> d.c;
}

void Xuat(DUONGTHANG d)
{
    cout << d.a << "x + " << d.b << "y + " << d.c << " = 0";
}

float KhoangCach(DUONGTHANG d, DIEM P)
{
    float tu = abs(d.a * P.x + d.b * P.y + d.c);
    float mau = sqrt(d.a * d.a + d.b * d.b);
    return tu / mau;
}

DIEM TimDiem(DIEM a[][100], int m, int n, DUONGTHANG c)
{
    DIEM diemGanNhat = a[0][0];
    float kcMin = KhoangCach(c, diemGanNhat);

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            float kc = KhoangCach(c, a[i][j]);
            if ((kc < kcMin && kc !=0) || kcMin == 0)
            {
                kcMin = kc;
                diemGanNhat = a[i][j];
            }
        }

    return diemGanNhat;
}
