#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

struct tamgiac
{
	DIEM A;
	DIEM B;
	DIEM C;
};
typedef struct tamgiac TAMGIAC;void Nhap(DIEM&);void Xuat(DIEM);void Nhap(TAMGIAC&);void Xuat(TAMGIAC);float KhoangCach(DIEM, DIEM);float DienTich(TAMGIAC);int main(){	TAMGIAC tg;	cout << "Nhap tam giac: ";	Nhap(tg);	cout << "\nTam giac: ";	Xuat(tg);	cout << "\nDien tich tam giac: " << fixed << setprecision(2) << DienTich(tg);	return 0;}void Nhap(DIEM& P){	cout << "\nNhap x: ";	cin >> P.x;	cout << "Nhap y: ";	cin >> P.y;}void Xuat(DIEM P){	cout << "(" << P.x << ";" << P.y << ")";}void Nhap(TAMGIAC& t){	cout << "\nNhap diem A: ";	Nhap(t.A);	cout << "Nhap diem B: ";	Nhap(t.B);	cout << "Nhap diem C: ";	Nhap(t.C);}void Xuat(TAMGIAC t){	cout << "\nDiem A: ";	Xuat(t.A);	cout << "\nDiem B: ";	Xuat(t.B);	cout << "\nDiem C: ";	Xuat(t.C);}float KhoangCach(DIEM P, DIEM Q){	return sqrt((P.x - Q.x) * (P.x - Q.x) + (P.y - Q.y) * (P.y - Q.y));}float DienTich(TAMGIAC t)
{
	float a = KhoangCach(t.B, t.C);
	float b = KhoangCach(t.A, t.C);
	float c = KhoangCach(t.A, t.B);
	float p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}