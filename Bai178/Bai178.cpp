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
float KhoangCach(DIEM, DIEM);
void GanNhauNhat(DIEM[], int, DIEM&, DIEM&);
void Xuat(DIEM[], int);
void Xuat(DIEM);

int main()
{
	DIEM a[100];
	DIEM P, Q;
	int n;
	Nhap(a, n);
	GanNhauNhat(a, n, P, Q);
	cout << "Toa do 2 diem gan nhau nhat la: " << endl;
	Xuat(P);
	Xuat(Q);
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

float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt((P.x - Q.x) * (P.x - Q.x) + (P.y - Q.y) * (P.y - Q.y));
}

void GanNhauNhat(DIEM a[], int n, DIEM& P, DIEM& Q)
{
	P = a[0];
	Q = a[1];
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (KhoangCach(a[i], a[j]) < KhoangCach(P, Q))
			{
				P = a[i];
				Q = a[j];
			}
		}
	}
}