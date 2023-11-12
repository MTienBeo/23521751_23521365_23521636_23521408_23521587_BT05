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
void Nhap(DIEM[][100], int&, int&);
void Xuat(DIEM[][100], int, int);
bool ktThuoc3(DIEM);
int DemThuoc3(DIEM[][100], int, int);

int main()
{
    DIEM a[100][100];
    int m, n;
    Nhap(a, m, n);
    cout << "\nMa tran cac diem: ";
    Xuat(a, m, n);

    cout << "\nCac gia tri thuoc phan tu thu 3: " << DemThuoc3(a, m, n);

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

bool ktThuoc3(DIEM P)
{
    if (P.x < 0 && P.y < 0)
        return 1;
    return 0;
}

int DemThuoc3(DIEM a[][100], int m, int n)
{
    int dem = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (ktThuoc3(a[i][j]))
                dem++;
    return dem;
}