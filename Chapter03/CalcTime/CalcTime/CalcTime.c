#include <stdio.h>
int main()
{
	int hour = 11;
	int minute = 35;
	int elapseMinute = 100;
	int work;
	work = minute + elapseMinute;
	hour = hour + work / 60;
	minute = work % 60;
	printf("%d\n", hour);
	printf("%d\n", minute);
	return 0;
}