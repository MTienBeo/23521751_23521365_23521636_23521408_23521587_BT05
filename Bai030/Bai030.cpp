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
bool ktThuoc4(DIEM);

int main()
{
    DIEM P;
    cout << "Nhap toa do diem:\n";
    Nhap(P);

    cout << "\nDiem vua nhap:";
    Xuat(P);

    if (ktThuoc4(P))
        cout << "\nDiem thuoc phan tu thu IV";
    else 
        cout << "\nDiem khong thuoc duong phan tu thu IV";

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

bool ktThuoc4(DIEM P)
{
    if (P.x > 0 && P.y < 0)
        return 1;
    return 0;
}