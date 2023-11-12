#include <iostream>
using namespace std;

struct duongthang
{
	float a, b, c;
};
typedef struct duongthang DUONGTHANG;

void Nhap(DUONGTHANG&);
void Nhap(DUONGTHANG[], int&);
void Xuat(DUONGTHANG);
void Xuat(DUONGTHANG[], int);
int ktSongSong(DUONGTHANG[], int);
int ktSongSong(DUONGTHANG, DUONGTHANG);


int main()
{
	DUONGTHANG a[100];
	int n;
	Nhap(a, n);
	if (ktSongSong(a, n) == 1)
		cout << "Cac duong thang cung song song voi nhau";
	else
		cout << "Cac duong thang khong cung song song voi nhau";

}

void Nhap(DUONGTHANG& d)
{
	cout << "Nhap a: ";
	cin >> d.a;
	cout << "Nhap b: ";
	cin >> d.b;
	cout << "Nhap c: ";
	cin >> d.c;
}
void Xuat(DUONGTHANG d)
{
	cout << "a: " << d.a << endl;
	cout << "b: " << d.b << endl;
	cout << "c: " << d.c << endl;
}

void Nhap(DUONGTHANG a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap duong thang a[" << i << "]: " << endl;
		Nhap(a[i]);
	}
}

int ktSongSong(DUONGTHANG a[], int n)
{
	for (int i = 1; i < n; i++)
	{
		if (ktSongSong(a[i], a[0])==0)
			return 0;
	}
	return 1;
}

int ktSongSong(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = d1.a * d2.b - d1.b * d2.a;
	float Dx = -d1.c * d2.b + d2.c * d1.b;
	if (D == 0 && Dx != 0)
		return 1;
	return 0;
}