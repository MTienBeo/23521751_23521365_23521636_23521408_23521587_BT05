#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct SoPhuc
{
	float Thuc;
	float Ao;
};
typedef struct SoPhuc SOPHUC;

void Nhap(SOPHUC&);
void Xuat(SOPHUC);
void Nhap(SOPHUC [][100], int&, int&);
void Xuat(SOPHUC [][100], int, int);
SOPHUC ThucAoAmCuoi(SOPHUC a[][100], int m, int n);

int main()
{
    SOPHUC a[100][100];
    int m, n;
    Nhap(a, m, n);
    Xuat(a, m, n);
    cout << "Thuc ao am cuoi la: ";
    Xuat(ThucAoAmCuoi(a, m, n));
}

void Nhap(SOPHUC& x)
{
	cout << "Nhap phan thuc: ";
	cin >> x.Thuc;
	cout << "Nhap phan ao: ";
	cin >> x.Ao;
}
void Xuat(SOPHUC x)
{
	cout << x.Thuc << x.Ao<<"i";
}
void Nhap(SOPHUC a[][100], int& m, int& n)
{
    cout << "Nhap so hang m: ";
    cin >> m;
    cout << "Nhap so cot n: ";
    cin >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Nhap a[" << i << "][" << j << "]: \n";
            Nhap(a[i][j]);
        }
    }
}
void Xuat(SOPHUC a[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            Xuat(a[i][j]);

        }
        cout << endl;
    }
}
SOPHUC ThucAoAmCuoi(SOPHUC a[][100], int m, int n)
{
    for (int i = m - 1; i >= 0; i--)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            if (a[i][j].Thuc < 0 && a[i][j].Ao < 0)
                return a[i][j];
        }
    }
    return { 0, 0 };
}