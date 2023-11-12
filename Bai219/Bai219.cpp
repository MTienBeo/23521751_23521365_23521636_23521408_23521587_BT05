#include <iostream>
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


int main()
{
	DIEM A[100][100];
	int m, n;
	cout << "Nhap ma tran diem mat phang Oxy: \n";
	Nhap(A, m, n);
	cout << endl;

	cout << "Ma tran diem vua nhap la: \n";
	Xuat(A, m, n);
	return 1;
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
	cout << "\nx: " << P.x;
	cout << "\ny: " << P.y;
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