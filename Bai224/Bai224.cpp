#include <iostream>
#include <iomanip>
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

void Nhap(DIEM[][100], int&, int&);
void Xuat(DIEM[][100], int, int);

float KhoangCach(DIEM, DIEM);
int ktThuoc(DUONGTRON, DIEM);
int DemDiem(DIEM[][100], int, int, DUONGTRON);

int main()
{
	DIEM A[100][100];
	int m, n;
	cout << "Nhap ma tran diem: \n";
	Nhap(A, m, n);
	cout << endl;

	cout << "Ma tran diem la: \n";
	Xuat(A, m, n);
	cout << endl;
	
	DUONGTRON dt;   
	Nhap(dt);     // duong tron
	Xuat(dt);
	cout << endl;

	cout << "So diem trong ma tran nam trong duong tron C(I,R) la: ";
	cout << DemDiem(A, m, n, dt);

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
	cout << "Nhap tam I: ";
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

void Nhap(DIEM a[][100], int& m, int& n)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]: ";
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

float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt((P.x - Q.x) * (P.x - Q.x) +
				(P.y - Q.y) * (P.y - Q.y));
}

int ktThuoc(DUONGTRON c, DIEM P)
{
	float kc = KhoangCach(c.I, P);
	if (kc <= c.R)
		return 1;
	return 0;
}

int DemDiem(DIEM a[][100], int m, int n, DUONGTRON c)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktThuoc(c, a[i][j]))
				dem++;
	return dem;
}