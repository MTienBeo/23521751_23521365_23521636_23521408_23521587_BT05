#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct diem
{
    float x;
    float y;
};
typedef struct diem DIEM;

struct duongtron
{
    DIEM I;
    float R;
};
typedef struct duongtron DUONGTRON;

void Nhap(DIEM&);
void Xuat(DIEM);

void Nhap(DUONGTRON&);
void Xuat(DUONGTRON);

void Nhap(DUONGTRON[], int&);
void Xuat(DUONGTRON[], int);

float TinhDienTich(DUONGTRON);
float TinhDienTichPhuBoiCacDuongTron(DUONGTRON[], int);
float TinhDienTichChongLan(DUONGTRON, DUONGTRON, float);

int main()
{
    DUONGTRON dt[1000];
    int n;
    cout << "Nhap mang duong tron Oxy: ";
    Nhap(dt, n);
    cout << endl;

    cout << "Mang duong tron Oxy la: ";
    Xuat(dt, n);
    cout << endl;

    return 1;
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
    cout << setw(6);
    cout << setprecision(3);
    cout << "\nx = " << P.x;
    cout << "\ny = " << P.y;
}

void Nhap(DUONGTRON& c)
{
    cout << "Nhap tam: ";
    Nhap(c.I);
    cout << "Nhap ban kinh: ";
    cin >> c.R;
}

void Xuat(DUONGTRON c)
{
    cout << "\nTam:";
    Xuat(c.I);
    cout << "\nBan kinh: " << c.R;
}

void Nhap(DUONGTRON a[], int& n)
{
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap a[" << i << "]: \n";
        Nhap(a[i]);
    }
}

void Xuat(DUONGTRON a[], int n)
{
    for (int i = 0; i <= n - 1; i++)
        Xuat(a[i]);
}

float TinhDienTich(DUONGTRON dt)
{
    return 3.14 * dt.R * dt.R;
}

float TinhDienTichPhuBoiCacDuongTron(DUONGTRON dt[], int n)
{
    float dienTichPhuBoi = 0;

    for (int i = 0; i < n; i++)
    {
        dienTichPhuBoi += TinhDienTich(dt[i]);

        for (int j = i + 1; j < n; j++)
        {
            float khoangCachGiuaTam = sqrt(pow(dt[i].I.x - dt[j].I.x, 2) + pow(dt[i].I.y - dt[j].I.y, 2));

            if (khoangCachGiuaTam + dt[j].R <= dt[i].R)
            {
                dienTichPhuBoi -= TinhDienTich(dt[j]);
            }
            else if (khoangCachGiuaTam + dt[i].R <= dt[j].R)
            {
                dienTichPhuBoi -= TinhDienTich(dt[i]);
                break;
            }
            else if (khoangCachGiuaTam < dt[i].R + dt[j].R)
            {
                float dienTichChongLan = TinhDienTichChongLan(dt[i], dt[j], khoangCachGiuaTam);
                dienTichPhuBoi -= dienTichChongLan;
            }
        }
    }

    return dienTichPhuBoi;
}

float TinhDienTichChongLan(DUONGTRON dt1, DUONGTRON dt2, float khoangCachGiuaTam)
{
    float r1 = dt1.R;
    float r2 = dt2.R;

    float a = (r1 * r1 - r2 * r2 + khoangCachGiuaTam * khoangCachGiuaTam) / (2 * khoangCachGiuaTam);
    float b = khoangCachGiuaTam - a;

    float dienTichChongLan = r1 * r1 * acos(a / r1) - a * sqrt(r1 * r1 - a * a) + r2 * r2 * acos(b / r2) - b * sqrt(r2 * r2 - b * b);

    return dienTichChongLan;
}
