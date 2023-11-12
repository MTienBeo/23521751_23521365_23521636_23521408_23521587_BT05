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

struct TamGiac
{
    DIEM A;
    DIEM B;
    DIEM C;
};
typedef struct TamGiac TAMGIAC;

void Nhap(DIEM&);
void Xuat(DIEM);
void Nhap(DIEM[], int&);
void Xuat(DIEM[], int);
void Xuat(TAMGIAC);
float KhoangCach(DIEM, DIEM);
float DIENTICH(TAMGIAC);
TAMGIAC TaoTamGiac(DIEM, DIEM, DIEM);
bool ktTrong(DIEM, TAMGIAC);
TAMGIAC TimTamGiac(DIEM[], int);

int main()
{
    DIEM a[500];
    int n;
    Nhap(a, n);

    cout << "\nMang cac diem:";
    Xuat(a, n);

    cout << "\nTam giac hop le la: ";
    Xuat(TimTamGiac(a, n));

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

void Xuat(TAMGIAC t)
{
    Xuat(t.A);
    Xuat(t.B);
    Xuat(t.C);
}

float KhoangCach(DIEM P, DIEM Q)
{
    return sqrt((P.x - Q.x) * (P.x - Q.x) + (P.y - Q.y) * (P.y - Q.y));
}

float DIENTICH(TAMGIAC t)
{
    float a = KhoangCach(t.A, t.B);
    float b = KhoangCach(t.A, t.C);
    float c = KhoangCach(t.B, t.C);
    float p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

TAMGIAC TaoTamGiac(DIEM A, DIEM B, DIEM C)
{
    TAMGIAC temp;
    temp.A = A;
    temp.B = B;
    temp.C = C;
    return temp;
}

bool ktTrong(DIEM P, TAMGIAC t)
{
    TAMGIAC PAB = TaoTamGiac(P, t.A, t.B);
    TAMGIAC PCA = TaoTamGiac(P, t.C, t.A);
    TAMGIAC PBC = TaoTamGiac(P, t.B, t.C);
    float s1 = DIENTICH(t);
    float s2 = DIENTICH(PAB);
    float s3 = DIENTICH(PCA);
    float s4 = DIENTICH(PBC);
    if (s1 == s2 + s3 + s4)
        return 1;
    return 0;
}

TAMGIAC TimTamGiac(DIEM a[], int n)
{
    for (int i = 0; i < n - 2; i++)
        for (int j = i + 1; j < n - 1; j++)
            for (int k = j + 1; k < n; k++)
            {
                int flag = 1;
                TAMGIAC t = TaoTamGiac(a[i], a[j], a[k]);
                for (int l = 0; l < n; l++)
                    if (l != i && l != j && l != k)
                        if (ktTrong(a[l], t))
                            flag = 0;
                if (flag)
                    return t;
            }
    TAMGIAC t;
    t.A.x = t.B.x = t.C.x = 0;
    t.A.y = t.B.y = t.C.y = 0;
    return t;
}
