#include <stdio.h>

enum DAY
{
	MON = 1, TUE, WED, THU, FRI, SAT, SUN
};

int main()
{

	enum DAY day;
	day = SUN;
	printf("%d «%d", day,day);
	return 0;

}
