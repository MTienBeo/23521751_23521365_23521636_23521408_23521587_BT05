#include<iostream>
using namespace std;


struct duongthang
{
	float a, b, c;
};
typedef struct duongthang DUONGTHANG;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

void Nhap(DIEM&);
void Nhap(DIEM[][100], int&, int&);
void Nhap(DUONGTHANG&);
int ktThuoc(DUONGTHANG, DIEM);
int DemDiem(DIEM[][100], int, int, DUONGTHANG);
void Xuat(DIEM);
void Xuat(DIEM[][100], int, int);

int main()
{
	DIEM a[100][100];
	int n, m;
	DUONGTHANG d;
	Nhap(d);
	Nhap(a, n, m);
	cout << "So luong diem trong ma tran thuoc duong thang d la: " << DemDiem(a, n, m, d);
}

void Xuat(DIEM p)
{
	cout << "Hoanh do: " << p.x << endl;
	cout << "Tung do: " << p.y << endl;
}

void Nhap(DIEM& p)
{
	cout << "Nhap hoanh do: ";
	cin >> p.x;
	cout << "Nhap tung do: ";
	cin >> p.y;
}

void Nhap(DIEM a[][100], int& n, int& m)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap diem a[" << i << "][" << j << "]: " << endl;
			Nhap(a[i][j]);
		}
	}
}

void Xuat(DIEM a[][100], int n, int m)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Diem a[" << i << "][" << j << "]: " << endl;
			Xuat(a[i][j]);
			cout << endl;
		}
	}
}
void Nhap(DUONGTHANG& d)
{
	cout << "Nhap duong thang ax + by +c =0:" << endl;
	cout << "Nhap a: ";
	cin >> d.a;
	cout << "Nhap b: ";
	cin >> d.b;
	cout << "Nhap c: ";
	cin >> d.c;
}

int ktThuoc(DUONGTHANG d, DIEM P)
{
	if (d.a * P.x + d.b * P.y + d.c == 0)
		return 1;
	return 0;
}

int DemDiem(DIEM a[][100], int n, int m, DUONGTHANG d)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (ktThuoc(d, a[i][j]))
				dem++;
		}
	}
	return dem;
}