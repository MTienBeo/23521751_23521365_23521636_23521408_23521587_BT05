#include<iostream>
#include<iomanip>
using namespace std;

struct dathuc
{
	int n;
	float a[100];
};
typedef struct dathuc DATHUC;

void Nhap(DATHUC&);
void Xuat(DATHUC);
DATHUC operator+(DATHUC, DATHUC);
void GiamBac(DATHUC&);
DATHUC operator-(DATHUC , DATHUC );
DATHUC operator*(DATHUC, DATHUC);
DATHUC Thuong(DATHUC, DATHUC);

int main()
{
	DATHUC ff, gg;
	cout << "Nhap da thuc thu nhat: " << endl;
	Nhap(ff);
	cout << "Nhap da thuc thu hai : " << endl;
	Nhap(gg);	
	cout << "Thuong hai da thuc: " <<endl;
	DATHUC kk = Thuong(ff, gg);
	Xuat(kk);
	return 0;
}

void Nhap(DATHUC& f)
{
	cout << "Nhap bac da thuc: ";
	cin >> f.n;
	for (int i = f.n; i >= 0; i--)
	{
		cout << "Nhap he so a[" << i << "]: ";
		cin >> f.a[i];
	}
}

void Xuat(DATHUC f)
{
	for (int i = f.n; i >= 1; i--)
	{
		cout << f.a[i];
		cout << "x^" << i;
		cout << " + ";
	}
	cout << f.a[0];
}

void GiamBac(DATHUC& f)
{
	while (f.a[f.n] == 0)
		f.n--;
}

DATHUC operator+(DATHUC f, DATHUC g)
{
	DATHUC temp = g;
	int lc = f.n;
	if (f.n > g.n)
	{
		temp = f;
		lc = g.n;
	}
	for (int i = lc; i >= 1; i--)
	{
		temp.a[i] = f.a[i] + g.a[i];
	}
	temp.a[0] = f.a[0] + g.a[0];
	GiamBac(temp);
	return temp;
}

DATHUC operator-(DATHUC f, DATHUC g)
{
	for (int i = g.n; i >= 0; i--)
	{
		g.a[i] = -g.a[i];
	}
	return f + g;
}
DATHUC operator*(DATHUC f, DATHUC g)
{
	DATHUC temp;
	temp.n = f.n + g.n;
	for (int i = temp.n; i >= 0; i--)
	{
		temp.a[i] = 0;
	}
	for (int i = 0; i <= g.n; i++)
	{
		for (int j = 0; j <= f.n; j++)
			temp.a[i + j] = temp.a[i + j] + g.a[i] * f.a[j];
	}
	return temp;
}
DATHUC Thuong(DATHUC f, DATHUC g)
{
	DATHUC bichia = f;
	DATHUC sochia = g;
	if (bichia.n < sochia.n)
	{
		return bichia;
	}
	DATHUC temp;
	temp.n = f.n - g.n;
	for (int i = temp.n; i >= 0; i--)
		temp.a[i] = 0;
	while (bichia.n >= sochia.n)
	{
		DATHUC tg;
		tg.n = bichia.n - sochia.n;
		for (int i = tg.n; i >= 0; i--)
		{
			tg.a[i] = 0;
		}
		tg.a[tg.n] = bichia.a[bichia.n] / sochia.a[sochia.n];
		DATHUC tru = tg * sochia;
		bichia = bichia - tru;
		temp = temp + tg;
	}
	return temp;
}