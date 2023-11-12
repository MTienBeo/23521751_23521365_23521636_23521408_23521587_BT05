#include<iostream>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

void Nhap(DIEM[], int&);
void Nhap(DIEM&);
void Xuat(DIEM[], int);
void Xuat(DIEM);

int main()
{
	DIEM a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
}


void Nhap(DIEM a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap diem a[" << i << "]: " << endl;
		Nhap(a[i]);
	}
}

void Nhap(DIEM& p)
{
	cout << "Nhap hoanh do: ";
	cin >> p.x;
	cout << "Nhap tung do: ";
	cin >> p.y;
}

void Xuat(DIEM a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Diem a[" << i << "]: " << endl;
		Xuat(a[i]);
	}
}

void Xuat(DIEM p)
{
	cout << "Hoanh do: " << p.x << endl;
	cout << "Tung do: " << p.y << endl;
}