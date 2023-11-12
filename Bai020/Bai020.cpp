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
float KhoangCachGoc(DIEM);

int main()
{
    DIEM P;
    cout << "Nhap toa do diem:\n";
    Nhap(P);

    cout << "\nDiem vua nhap:";
    Xuat(P);

    cout << "\nKhoang cach den goc toa do: " << fixed << setprecision(2) << KhoangCachGoc(P);

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

float KhoangCachGoc(DIEM P)
{
    return sqrt(P.x * P.x + P.y * P.y);
}