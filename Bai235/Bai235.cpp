#include <iostream>
#include <cmath>
using namespace std;

struct sophuc
{
    float Thuc;
    float Ao;
};
typedef struct sophuc SOPHUC;

void Nhap(SOPHUC&);
void Xuat(SOPHUC);
void Nhap(SOPHUC[][100], int&, int&);
void Xuat(SOPHUC[][100], int, int);

int main()
{
    SOPHUC a[100][100];
    int m, n;
    Nhap(a, m, n);
    cout << "\nMa tran cac so phuc: ";
    Xuat(a, m, n);

    return 0;
}

void Nhap(SOPHUC& x)
{
    cout << "\nNhap phan thuc: ";
    cin >> x.Thuc;
    cout << "Nhap phan ao: ";
    cin >> x.Ao;
}

void Xuat(SOPHUC x)
{
    cout << x.Thuc << " + " << x.Ao << "i";
}

void Nhap(SOPHUC a[][100], int& m, int& n)
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

void Xuat(SOPHUC a[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            cout << "Diem A[" << i << "][" << j << "]:";
            Xuat(a[i][j]);
            cout << endl;
        }
}