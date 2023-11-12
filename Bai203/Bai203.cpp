#include<iostream>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

struct DuongTron
{
	DIEM i;
	float r;
};
typedef struct DuongTron DUONGTRON;

void Nhap(DUONGTRON[], int& n);
void Nhap(DUONGTRON&);
void Nhap(DIEM&);
void Xuat(DuongTron);
void Xuat(DIEM);
float KhoangCach(DIEM, DIEM);
int TuongDoi(DUONGTRON, DUONGTRON);
void LietKe(DUONGTRON[], int);

int main()
{
	DUONGTRON a[100];
	int n;
	Nhap(a, n);
	cout << "Cac cap duong tron tiep xuc voi nhau la:";
	LietKe(a, n);
	return 0;
}

void Nhap(DUONGTRON a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap duong trong a[" << i << "] :" << endl;
		Nhap(a[i]);
	}
}

void Nhap(DUONGTRON& c)
{
	cout << "Nhap tam duong tron: " << endl;
	Nhap(c.i);
	cout << "Nhap ban kinh duong tron: " << endl << "r: ";
	cin >> c.r;
}

void Nhap(DIEM& x)
{
	cout << "x: ";
	cin >> x.x;
	cout << "y: ";
	cin >> x.y;
}

float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt((Q.x - P.x) * (Q.x - P.x) + (Q.y - P.y) * (Q.y - P.y));
}

int TuongDoi(DUONGTRON c1, DUONGTRON c2)
{
	float kc = KhoangCach(c1.i, c2.i);
	if (kc == 0 && c1.r == c2.r)
		return 0;
	if (kc > (c1.r + c2.r))
		return 1;
	if (kc == (c1.r + c2.r))
		return 2;
	if ((kc < (c1.r + c2.r)) && (kc > abs(c1.r + c2.r)))
		return 3;
	if (kc == abs(c1.r - c2.r))
		return 4;
	return 5;
}

void LietKe(DUONGTRON a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j=i+1;j<n;j++)
			if (TuongDoi(a[i], a[j]) == 2 || TuongDoi(a[i], a[j]) == 4)
			{
				cout << "Duong tron a[" << i << "] va a[" << j << "]: " << endl;
				Xuat(a[i]);
				Xuat(a[i]);
			}
	}
}

void Xuat(DUONGTRON c)
{
	cout << "Tam: " << endl;
	Xuat(c.i);
	cout << "Ban kinh: " << endl << "r: " << c.r << endl;
}

void Xuat(DIEM x)
{
	cout << "x: " << x.x << endl;
	cout << "y: " << x.y << endl;
}
