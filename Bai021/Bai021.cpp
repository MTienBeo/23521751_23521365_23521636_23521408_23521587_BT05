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
DIEM DoiXungGoc(DIEM);
float KhoangCach(DIEM, DIEM);

int main()
{
	DIEM P;
	P = DoiXungGoc(O);
	cout << "/nDiem doi xung A qua goc toa do:";
}

DIEM DoiXungGoc(DIEM P)
{
	DIEM temp;
	temp.x = -P.x;
	temp.y = -P.y;
	return temp;
}