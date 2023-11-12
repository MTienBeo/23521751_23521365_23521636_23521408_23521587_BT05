#include <iostream>
using namespace std;

struct SoPhuc
{
	float Thuc;
	float Ao;
};

typedef struct SoPhuc SOPHUC;
void Nhap(SOPHUC&);
void Xuat(SOPHUC);

void Nhap(SOPHUC[][100], int&, int&);
void Xuat(SOPHUC[][100], int, int);

int main()
{
	SOPHUC M[100][100];
	int m, n;
	cout << "Ma tran so phuc la: \n";
	Nhap(M, m, n);
	cout << endl;

	cout << "Ma tran so phuc vua nhap: \n";
	Xuat(M, m, n);


	return 1;
}

void Nhap(SOPHUC& x)
{
	cout << "Nhap thuc: ";
	cin >> x.Thuc;
	cout << "Nhap ao: ";
	cin >> x.Ao;
	cout << endl;
}

void Xuat(SOPHUC x)
{
	cout << "\nThuc: " << x.Thuc;
	cout << "\nAo: " << x.Ao << endl;
}

void Nhap(SOPHUC a[][100], int& m, int& n)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n; 
	cout << endl;
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
			cout << "A[" << i << "][" << j << "]:";
			Xuat(a[i][j]);
			cout << endl;
		}
}