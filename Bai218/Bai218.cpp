#include<iostream>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

void Nhap(DIEM&);
void Nhap(DIEM[][100], int&, int&);
void Xuat(DIEM);
void Xuat(DIEM[][100], int, int);

int main()
{
	DIEM a[100][100];
	int n, m;
	Nhap(a, n, m);
	Xuat(a, n, m);
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