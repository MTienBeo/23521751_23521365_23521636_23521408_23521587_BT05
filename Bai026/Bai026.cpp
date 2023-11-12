#include <iostream>
#include <iomanip>
#include <iostream>
using namespace std;

struct diem
{
	float x;
	float y;
};

typedef struct diem DIEM;
int ktTrung(DIEM, DIEM);

int main()
{
	DIEM P,Q ;
	cout << "/nKiem tra hai diem trung ";
}

int ktTrung(DIEM P, DIEM Q)
{
	if (P.x == Q.x && P.y == Q.y)
		return 1;
	return 0;
}

