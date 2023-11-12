#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct DuongThang
{
	float a;
	float b;
	float c;
};
typedef struct DuongThang DUONGTHANG;

void Nhap(DUONGTHANG&);
void Xuat(DUONGTHANG);
int ktSongSong(DUONGTHANG d1, DUONGTHANG d2);

int main()
{
	DUONGTHANG d1;
	DUONGTHANG d2;
	cout << "Nhap duong thang thu nhat" << endl;
	Nhap(d1);
	cout << "Nhap duong thang thu hai" << endl;
	Nhap(d2);
	cout << "Duong thang thu nhat: " << endl;
	Xuat(d1);
	cout << "Duong thang thu hai: " << endl;
	Xuat(d2);
	if (ktSongSong(d1, d2) == 1)
		cout << "song song";
	else
		cout << "khong";

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
	cout << "\na: " << d.a;
	cout << "\nb: " << d.b;
	cout << "\nc: " << d.c << endl;
}

int ktSongSong(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = d1.a * d2.b - d2.a * d1.b;
	float Dx = -d1.c * d2.b + d2.c * d1.b;
	if (D == 0 && Dx != 0)
		return 1;
	return 0;

}