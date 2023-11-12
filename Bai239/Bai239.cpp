#include<iostream>
using namespace std;

struct sophuc
{
	float Thuc, Ao;
};
typedef struct sophuc SOPHUC;

void Nhap(SOPHUC&);
void Nhap(SOPHUC[][100], int&, int&);
int ktDong(SOPHUC[][100], int, int, int);
int DemDong(SOPHUC[][100], int, int);
void Xuat(SOPHUC);
void Xuat(SOPHUC[][100], int, int);

int main()
{
	SOPHUC a[100][100];
	int n, m;
	Nhap(a, n, m);
	cout << "So dong co chua toan bo so phuc thoa man phan thuc va phan ao trai dau nhau la: " << DemDong(a, n, m);
}

void Xuat(SOPHUC p)
{
	cout << "Thuc: " << p.Thuc << endl;
	cout << "Ao: " << p.Ao << endl;
}

void Nhap(SOPHUC& p)
{
	cout << "Nhap phan thuc: ";
	cin >> p.Thuc;
	cout << "Nhap phan ao: ";
	cin >> p.Ao;
}

void Nhap(SOPHUC a[][100], int& n, int& m)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap phan so a[" << i << "][" << j << "]: " << endl;
			Nhap(a[i][j]);
		}
	}
}

void Xuat(SOPHUC a[][100], int n, int m)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Phan so a[" << i << "][" << j << "]: " << endl;
			Xuat(a[i][j]);
			cout << endl;
		}
	}
}

int ktDong(SOPHUC a[][100], int n, int m, int d)
{
	int flag = 1;
	for (int j = 0; j < n; j++)
	{
		if (a[d][j].Thuc * a[d][j].Ao >= 0)
			flag = 0;
	}
	return flag;
}

int DemDong(SOPHUC a[][100], int n, int m)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
	{
		if (ktDong(a, n, m, i))
			dem++;
	}
	return dem;
}